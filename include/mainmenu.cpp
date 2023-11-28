#include "mainmenu.h"
#include "login.h"
#include "ticketsummary.h"
#include "user.h"
#include "utils.h"
// #include "stationselect.h"

using namespace std;

User currentUser;
vector<User> userList = SReadDFile();
bool loggedIn = false;
bool active = true;
int billTotal = 0;

void MainMenu()
{
    while (active)
    {
        int options;
        cout << "-- Train Ticketing System --" << endl
             << endl;

        cout << "Options: " << endl;
        cout << "[1] Purchase a Ticket" << endl;
        cout << "[2] " << (loggedIn ? "Sign Out" : "Account") << endl;
        cout << (loggedIn ? "[3] Reload Balance\n\n" : "\n");
        // cout << "[4] Buy Beep Card (Out of Stock)" << endl;

        if (billTotal > 0)
        {
            cout << "[4] Pay Total Bill" << endl
                 << endl;
            cout << "Total to Pay: P" << billTotal << endl;
        }

        if (loggedIn)
        {
            cout << "Account Balance: P" << currentUser.balance << endl;
        }

        cout << "(Insert Option Number): ";
        cin >> options;

        if (cin.fail()) // check if input is not a number
        {
            cin.clear();                                         // clear the error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the row
            options = 727;
        }

        switch (options)
        {
        case 1:
            billTotal += TicketSummary();
            MainMenu();
            break;
        case 2:
            Login(userList, loggedIn, currentUser);
            break;
        case 3:
            ReloadBalance();
            break;
        case 4:
            PayBill();
            break;
        default:
            cout << "Invalid Option" << endl
                 << endl;
            MainMenu();
            break;
        }
    }
    // TODO: Fix recursion call here.
}

void ReloadBalance()
{
    if (!loggedIn)
    {
        cout << endl;
        return;
    }
    int balance = 1, newBalance, load;
    char op;

    cout << "Include the amount you want to reload... " << endl;
    cin >> load;

    if (cin.fail()) // check if input is not a number
    {
        cin.clear();                                         // clear the error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the row
        load = -1;
    }
    
    // newBalance = balance + load;
    if (load < 0)
    {
        cout << "\nInvalid Input\n"
             << endl;
        return;
    }

    cout << "Do you want to Reload " << load << " php to your card? (Y/N)" << endl;
    // cout << "Current Card Balance: " << balance << endl;
    // cout << "Balance After Reload: " << newBalance << endl;
    cin >> op;

    switch (op)
    {
    case 'Y':
    case 'y':
        UpdateBalance(userList, currentUser, load);
        // balance = newBalance;
        cout << "Reload Successful!" << endl;
        MainMenu();
        break;
    case 'N':
    case 'n':
        cout << "Leaving...\n" << endl;
        MainMenu();
        break;
    default:
        cout << "Invalid\n" << endl;
        MainMenu();
        break;
    }
}

void PayBill()
{
    if (billTotal <= 0)
    {
        cout << endl;
        return;
    }

    int userInput, userPayment, userChange;

    cout << "\n\tAmount to Pay: P" << billTotal;
    cout << "\n\t\tEnter Payment Amount: ";
    cin >> userInput;

    if (cin.fail()) // check if input is not a number
    {
        cin.clear();                                         // clear the error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the row
        cout << "\tInvalid Input!\n"
             << endl;
        return;
    }

    if (userInput < billTotal)
    {
        cout << "\n\t* You do not have enough to complete this transaction. Exiting Program... *\n";
        active = false;
        WriteDFile(userList);
        return;
    }

    userPayment = userInput;

    userChange = userPayment - billTotal;

    if (userChange != 0)
    {
        cout << "\n\tChange: P" << userChange << endl;
    }

    cout << "\n\t* Transaction successful! Exiting Program... *\n";
    active = false;
    WriteDFile(userList);
    return;
}
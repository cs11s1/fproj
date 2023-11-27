#include "mainmenu.h"
#include "login.h"
// #include "stationselect.h"
#include "ticketsummary.h"
#include "user.h"
using namespace std;

User letUser;
bool loggedIn = true;
int billTotal = 0;

void MainMenu(){
    int options;
    cout << "Train Ticketing System" << endl << endl;

    cout << "Options: " << endl;
    cout << "[1] Purchase a Ticket" << endl;
    cout << "[2] " << (loggedIn ? "Manage Account" : "Log In") << endl;
    cout << (loggedIn ? "[3] Reload Balance\n\n" : "\n");
    // cout << "[4] Buy Beep Card (Out of Stock)" << endl;
    
    if (billTotal > 0)
    {
        cout << "Total to Pay: " << billTotal << endl;
    }

    cout << "Account Balance: " << letUser.balance << endl;
    cout << "Insert Option Number: ";
    cin >> options;
    switch (options){
        case 1: 
            billTotal += TicketSummary(); 
            MainMenu();
            break;
        case 2: 
            Login();
            break;
        case 3:
            ReloadBalance();
            break;
        case 4: 
            break;
        default: 
            cout << "Invalid Option" << endl;
            break;
    }
    cout << endl << "Transaction Success!!! Thank you come again!!";
}

void ReloadBalance(){
    int balance = 1, newBalance, load;
    char op;

    cout << "Include the amount you want to reload... " << endl;
    cin >> load;
    // newBalance = balance + load;

    cout << "Do you want to Reload " << load << " php to your card? (Y/N)" << endl;
    // cout << "Current Card Balance: " << balance << endl;
    // cout << "Balance After Reload: " << newBalance << endl;
    cin >> op;
    
    switch (op){
        case 'Y':
        case 'y':
            letUser.balance += load;
            // balance = newBalance;
            cout << "Reload Successful!" << endl;
            MainMenu();
            break;
        case 'N':
        case 'n':
            cout << "Leaving...";
            MainMenu();
            break;
        default:
            cout << "Invalid";
            MainMenu();
            break;
    }
}


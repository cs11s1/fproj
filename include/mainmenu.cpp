#include "mainmenu.h"
#include "login.h"
#include "stationselect.h"
using namespace std;

void MainMenu(){
    int options;
    cout << "Train Ticketing System" << endl << endl;

    cout << "Options: " << endl;
    cout << "[1] Purchase a Ticket"<< endl;
    cout << "[2] Reload Card Balance"<< endl;
    cout << "[3] Buy Beep Card (Out of Stock)"<< endl;
    cout << "[4] Account"<< endl;
    cout << "Insert Option Number: ";
    cin >> options;
    switch (options){
        case 1: 
            StationSelect();
            break;
        case 2: 
            reload();
            break;
        case 3:
            cout << "DON'T EXPECT BEEP CARDS EXIST IN THIS TRANSACTION..."; 
            break;
        case 4: 
            Login();
            break;
        default: 
            cout << "Invalid Option" << endl;
            break;
    }
    cout << endl << "Transaction Success!!! Thank you come again!!";
}

void reload(){
    int balance = 1, newBalance, load;
    char op;

    cout << "Include the amount you want to reload... " << endl;
    cin >> load;
    newBalance = balance + load;

    cout << "Do you want to Reload Php" << load << " to your card? (Y/N)" << endl;
    cout << "Current Card Balance: " << balance << endl;
    cout << "Balance After Reload: " << newBalance << endl;
    cin >> op;
    
    switch (op){
        case 'Y':
        case 'y':
            balance = newBalance;
            cout << "Reload Successful!" << endl;
        case 'N':
        case 'n':
            cout << "Leaving...";
            break;
        default:
            cout << "Invalid";
            break;
    }
}


#include <iostream>
#include <string>
#include "mainmenu.h"
using namespace std;

void ticket(){
    string lrt[] = {"Roosevelt", "Balintawak", "Yamaha Monumento", "5th Avenue", "R. Papa", "Abad Santos", "Bluementritt", "Tayuman", "Bambang", "Doroteo Jose", "Carriedo", "Central Terminal", "United Nations", "Pedro Gil", "Quirino", "Vito Cruz", "Gil Puyat", "Libertad", "EDSA", "Baclaran"};
    string lrt2[] = {"Recto", "Legarda", "Pureza", "V. Mapa", "J. Ruiz", "Gilmore", "Betty Go", "Cubao", "Anonas", "Katipunan", "Santolan", "Marikina-Pasig", "Antipolo"};
    string mrt[] = {"North Avenue", "Quezon Avenue", "Kamuning", "Araneta Center (Cubao)", "Santolan (Annapolis)", "Ortigas", "Shaw Boulevard", "Boni", "Guadalupe", "Buendia", "Ayala", "Magallanes", "Taft Avenue"};
    int lrt2Count = 13;
    int lrtCount = 20;
    int mrtCount = 13;
    int line;

    cout << "Select a train line: "<< endl;
    cout << "[1] LRT-1"<< endl;
    cout << "[2] LRT-2"<< endl;
    cout << "[3] MRT"<< endl;

    cin >> line;
    switch(line){
    case 1:
        cout << "LRT-1 Destinations: " << endl;
        for (int x=0; x<lrtCount; x++){
            cout << x + 1 << ". " << lrt[x] << endl;
        }
        break;
    case 2:
        cout << "LRT-2 Destinations: " << endl;
        for (int y=0; y<lrt2Count; y++){
            cout << y + 1 << ". " << lrt2[y] << endl;
        }
        break;
    case 3:
        cout << "MRT Destinations: " << endl;
        for (int z=0; z<mrtCount; z++){
            cout << z + 1 << ". " << mrt[z] << endl;
        }
        break;
    default:
        cout << "Invalid Option";
        break;
    }
}

void mainmenu(){
    int options;
    cout << "Train Ticketing System";

    cout << "Options: " << endl;
    cout << "[1] Purchase a Ticket"<< endl;
    cout << "[2] Reload Card Balance"<< endl;
    cout << "[3] Buy Beep Card (Out of Stock)"<< endl;
    cout << "[4] Account"<< endl;
    
    cin >> options;
    switch (options){
        case 1: 
            ticket(); 
            break;
        case 2: 
            reload();
            break;
        case 3:
            cout << "DON'T EXPECT BEEP CARDS EXIST IN THIS TRANSACTION..."; 
            break;
        case 4: 
            break;
        default: 
            cout << "Invalid Option";
            break;
    }
    
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


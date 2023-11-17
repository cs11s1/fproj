#include <iostream>
#include <string>
#include "mainmenu.h"
using namespace std;

void ticket(){
    string lrt2[] = {"Recto", "Antipolo"};
    int lrt2Count = 2;
    cout << "LRT-2 Destinations: ";
    for (int x=0; x<lrt2Count; x++){
        cout << x + 1 << ". " << lrt2[0] << endl;
    }
}

void mainmenu(){
    int options;
    cout << "Train Ticketing System";

    cout << "Options: ";
    cout << "[1] Purchase a Ticket";
    cout << "[2] Reload Card Balance";
    cout << "[3] Buy Beep Card (Out of Stock)";
    cout << "[4] Account";

    cin >> options;
    switch (options){
        case 1: 
            ticket();
        break;
        case 2: break;
        case 3: break;
        case 4: break;
        default: break;
    }
    
}




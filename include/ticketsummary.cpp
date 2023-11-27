#include "ticketsummary.h"
#include "stationselect.h"
using namespace std;

int TicketSummary()
{
    vector<string> stations = StationSelect();
    string stringChoice;
    int intChoice, ticketPrice, totalPrice;
    bool valChoice = false;

    int tripDistance = stoi(stations[2]);
    // PROTOTYPE
    ticketPrice = (15 + (5 * (tripDistance == 1 ? 0 : (tripDistance == 2 ? 1 : tripDistance / 3))));
    // if 1 = 15, if 2,3 = 20, higher is /3;
    cout << "Ticket Price - " << ticketPrice << endl;

    while (!valChoice)
    {
        cout << "How many would you like to buy?: ";
        cin >> intChoice;

        if (cin.fail()) // check if input is not a number
        {
            cin.clear();                                         // clear the error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the row
            intChoice = -1;
        }

        if (intChoice < 0)
        {
            cout << "Invalid Amount!" << endl;
        }
        else
        {
            valChoice = true;
        }
    }

    valChoice = false;
    totalPrice = ticketPrice * intChoice;

    cout << "+-------------------------------------------------+" << endl;
    cout << " Ticket Summary                                  " << endl;
    cout << "  Your Selected Origin is: " << stations[0] << endl;
    cout << "  Your Selected Destination is: " << stations[1] << endl;
    cout << "  Quantity: " << intChoice << endl;
    cout << "                                                 " << endl;
    cout << " Your Total Bill is: " << totalPrice << endl;
    cout << "+-------------------------------------------------+" << endl;
    cout << "\nDo You Want to Proceed? [Y/N]" << endl;
    // cout << "1. Yes" << endl;
    // cout << "2. No" << endl;
    while (!valChoice)
    {
        cout << "Confirm: ";
        cin >> stringChoice;
        if (stringChoice == "Y" || stringChoice == "y")
        {
            cout << "Adding to cart..." << endl;
            valChoice = true;
            return totalPrice;
        }
        else if (stringChoice == "N" || stringChoice == "n")
        {
            cout << "Transaction Cancelled." << endl;
            valChoice = true;
        }
        else
        {
            cout << "\nInvalid choice." << endl;
        }
    }
    return 0;
}
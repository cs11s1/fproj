#include "ticketsummary.h"
using namespace std;

int TicketSummary()
{
  string choice;
  bool valChoice = false;
  
  cout << "+-------------------------------------------------+" << endl;
  cout << "| Ticket Summary                                  |" << endl;
  cout << "|  Your Selected Origin is: Antipolo              |" << endl;
  cout << "|  Your Selected Destination is: Cubao            |" << endl;
  cout << "|  Quantity: 2                                    |" << endl;
  cout << "|                                                 |" << endl;
  cout << "| Your Total Bill is: 40                          |" << endl;
  cout << "+-------------------------------------------------+" << endl;
  cout << "\nDo You Want to Proceed?" << endl;
  cout << "1. Yes" << endl;
  cout << "2. No" << endl;
  while (!valChoice) {
        cout << "Enter Your Choice (1 / 2): ";
        cin >> choice;
        if (choice == "1") {
            cout << "Transaction is proceeding...";
            valChoice = true;
        } else if (choice == "2") {
            cout << "Transaction Cancelled." << endl;
            valChoice = true;
        } else {
            cout << "\nInvalid choice." << endl;
        }
    }
    return 0;
}
#include <iostream>
#include <fstream> // reading and writing files
#include <string>
#include "login.h"

using namespace std;

bool isLoggedIn()
{
    string username, password;
    string un,pw; // comparison strings

    cout << "Enter a username: ";
    cin >> username;
    cout <<"Enter a password: ";
    cin >> password;

    ifstream read(username + ".txt" ); // ifstream reads a file
    getline(read, un); // read the username
    getline(read,pw); // read the password

    if(un == username && pw == password) // if both un & username and pw & password are the same, true
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Login()
{
    int choice;

    cout << endl;
    cout << "Main Menu: " << endl;
    cout << "-------------------------------" << endl;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << endl;
    cout << "Your choice: ";
    cin >> choice;

    if(choice == 2)
    {
        string username, password;

        cout << "Registration: " << endl;
        cout << endl;
        cout << "Select a username: ";
        cin >> username;
        cout << "Select a password: ";
        cin >> password;

        ofstream file; // ofstreamc create a file
        file.open(username + ".txt");
        file << username  << endl << password;
        file.close();
        cout << "Welcome " << username << "!" << endl;

    }
    else if(choice == 1) // if user chooses to login
    {
        bool status = isLoggedIn();

        if(!status) // if isLoggedIn() returns false
        {
            system("clear");
            cout << endl;
            cout << "Invalid login" << endl;
            Login();
        }
        else // if isLoggedIn() returns true, the dashboard is displayed
        {
            cout << "Successfully logged in!" << endl;
            cout << endl;

            int choiceOne;

            //Display dashboard:
            cout << "Welcome back! " << endl;
            cout << endl;
            cout <<"GUNDAM WORLD" << endl;
            cout <<"You have a new message." << endl; // example of what could appear
            cout << endl;
            cout <<"1. Sign Out" << endl;
            cout <<"Your choice: " << endl;
            cin >> choiceOne;
            switch(choiceOne){
                case 1:
                    Login();
                    break;
            }
        }
    
    }
}




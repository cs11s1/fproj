#include "login.h"
#include "user.h"

using namespace std;

string _username;
// User newUser;
vector<User> *login_userList;

bool isLoggedIn(User &_logUser)
{
    string username, password;
    // string un, pw; // comparison strings

    cout << "Enter a username: ";
    cin >> username;
    cout << "Enter a password: ";
    cin >> password;

    for (User &user : *login_userList)
    {
        if (user.name == username && user.pw == password)
        {
            _username = user.name;
            _logUser = user;
            return true;
        }
    }

    return false;

}

void Login(std::vector<User> &_userList, bool &_loggedIn, User &_currentUser)
{
    login_userList = &_userList;

    if (_loggedIn)
    {
        _currentUser.balance = 0;
        _loggedIn = false;
        cout << endl;
        return;
    }

    int choice;

    cout << endl;
    cout << "Account Menu: " << endl;
    cout << "-------------------------------" << endl;
    cout << "0. Return to Main Menu" << endl;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << endl;
    cout << "Your choice: ";
    cin >> choice;

    if (cin.fail()) // check if input is not a number
    {
        cin.clear();                                         // clear the error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the row
        cout << "Invalid Choice\n" << endl;
        Login(_userList, _loggedIn, _currentUser);
        // choice = 727;
    }

    if (choice == 2)
    {
        string username, password;

        cout << "Registration: " << endl;
        cout << endl;
        cout << "Select a username: ";
        cin >> username;
        cout << "Select a password: ";
        cin >> password;

        _currentUser.name = username;
        _currentUser.pw = password;
        _currentUser.balance = 0;

        cout << "Successfully registered!" << endl;
        cout << "Welcome " << _currentUser.name << "!" << endl;
        _userList.push_back(_currentUser);
        // _currentUser = newUser;
        _loggedIn = true;
        return; 
    }
    else if (choice == 1) // if user chooses to login
    {
        bool status = isLoggedIn(_currentUser);

        if (!status) // if isLoggedIn() returns false
        {
            system("clear");
            cout << endl;
            cout << "Invalid login" << endl;
            Login(_userList, _loggedIn, _currentUser);
        }
        else // if isLoggedIn() returns true, the dashboard is displayed
        {
            cout << "Successfully logged in!" << endl;
            cout << "Welcome " << _username << "!" << endl;
            cout << endl;
            _loggedIn = true;
            return;

            // int choiceOne;

            // // Display dashboard:
            // cout << "Welcome back! " << endl;
            // cout << endl;
            // cout << "GUNDAM WORLD" << endl;
            // cout << "You have a new message." << endl; // example of what could appear
            // cout << endl;
            // cout << "1. Sign Out" << endl;
            // cout << "Your choice: " << endl;
            // cin >> choiceOne;
            // switch (choiceOne)
            // {
            // case 1:
            //     Login(_userList, _loggedIn, _currentUser);
            //     break;
            // }
        }
    }
    else if (choice == 0)
    {
        return;
    }
}

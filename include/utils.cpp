#include "utils.h"
#include "user.h"

// using namespace std;

std::vector<User> SReadDFile()
{
    std::vector<User> userList;
    std::ifstream file("db.txt");
    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        User user;
        iss >> user.name >> user.pw >> user.balance;
        userList.push_back(user);
    }
    file.close();
    return userList;
}

void ReadDFile(std::vector<User> &userList)
{
    std::ifstream file("db.txt");
    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        User user;
        iss >> user.name >> user.pw >> user.balance;
        userList.push_back(user);
    }
    file.close();
}

void WriteDFile(std::vector<User> &userList)
{
    std::ofstream fileOut("db.txt");
    for (const User &user : userList)
    {
        fileOut << user.name << "\t" << user.pw << "\t" << user.balance << std::endl;
    }
    fileOut.close();
}

void UpdateBalance(std::vector<User> &userList, User &currentUser, int valueToAdd)
{
    for (User &user : userList)
    {
        if (user.name == currentUser.name)
        {
            user.balance = valueToAdd;
            break;
        }
    }
    currentUser.balance += valueToAdd;
}
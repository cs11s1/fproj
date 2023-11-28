#include "utils.h"
#include "user.h"

// using namespace std;

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
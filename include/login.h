#pragma once

#include <iostream>
#include <fstream> // reading and writing files
#include <sstream>
#include <string>
#include <vector>
#include <limits>
#include "user.h"

// void ReadDFile();
// void WriteDFile();
// bool isLoggedIn();
bool isLoggedIn(User &currentUser);
void Login(std::vector<User> &userList, bool &loggedIn, User &currentUser);
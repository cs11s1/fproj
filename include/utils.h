#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "user.h"

std::vector<User> SReadDFile();
void ReadDFile(std::vector<User> &userList);
void WriteDFile(std::vector<User> &userList);
void UpdateBalance(std::vector<User> &userList, User &currentUser, int valueToAdd);
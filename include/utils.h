#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "user.h"


void ReadDFile(std::vector<User> &userList);
void WriteDFile(std::vector<User> &userList);
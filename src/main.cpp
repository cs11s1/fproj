#include <iostream>
#include "../include/menu.h"

int main()
{

//    Menu panel = Menu(10,
//                      9,
//                      "LRT (Computer Automated Ticketing System)",
//                      {"1. Single Journey Ticket",
//                       "2. Add Beep Card Load"});

    Menu panel = Menu(10,
                      8,
                      "Welcome to TCATS",
//                      "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque feugiat orci imperdiet, fringilla augue id, vehicula tellus.");
                      "Test a longer message needed lorem ipsum dolor sit amet, consectetur adipiscing elit.");
//                    "test");

    panel.Print();

    return 0;
}
#include <iostream>
#include "../include/menufactory.h"

int main()
{

//    Menu panel = Menu(10,
//                      9,
//                      "LRT (Computer Automated Ticketing System)",
//                      {"1. Single Journey Ticket",
//                       "2. Add Beep Card Load"});

    Menu panel = Menu(10, 19,
                      "Title",
//                      "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque feugiat orci imperdiet, fringilla augue id, vehicula tellus. extra line needed for this test");
//                      "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque feugiat orci imperdiet, fringilla augue id, vehicula tellus.");
//                      "Test a longer message needed lorem ipsum dolor sit amet, consectetur adipiscing elit.");
                    "test");
//
//    Menu panel = Menu(10, 10, "foo", "bar");
    panel.Print();

    MenuFactory test;
    auto bruh = test.CreateMenu(DISPLAY, 10, 10, "foo", "bar");
    bruh->Print();




    return 0;
}
#include "stationselect.h"

using namespace std;

vector<string> StationSelect()
{
    int stn, x, y, z, no, dest, stn2, dest2;
    string conf;
    string save, saveout, saveout2, saveloc, save2, confirans;
    string selLine[1];
    string line[3] = {"LRT1", "LRT2", "MRT3"};
    string num[20] = {"1. ", "2. ", "3. ", "4. ", "5. ", "6. ", "7. ", "8. ", "9. ", "10. ", "11. ", "12. ", "13. ", "14. ", "15. ", "16. ", "17. ", "18. ", "19. ", "20. "};
    string LRT1[20] = {"Roosevelt", "Balintawak", "Yamaha Monumento", "5th Avenue", "R. Papa", "Abad Santos", "Bluementritt", "Tayuman", "Bambang", "Doroteo Jose", "Carriedo", "Central Terminal", "United Nations", "Pedro Gil", "Quirino", "Vito Cruz", "Gil Puyat", "Libertad", "EDSA", "Baclaran"};
    string LRT2[13] = {"Recto", "Legarda", "Pureza", "V. Mapa", "J. Ruiz", "Gilmore", "Betty Go", "Cubao", "Anonas", "Katipunan", "Santolan", "Marikina", "Antipolo"};
    string MRT3[13] = {"North Avenue", "Quezon Avenue", "Kamuning", "Cubao", "Santolan Anapolis", "Ortigas", "Shaw Boulevard", "Boni Ave", "Guadalupe", "Buendia", "Ayala Ave", "Magallanes", "Taft"};
    vector<string> stats; // Array to be returned

    cout << "\nSelect Station: " << endl;
    cout << "0. Return to Main Menu" << endl;
    for (z = 0; z < 3; z++)
    {
        cout << num[z] << line[z] << endl;
    }
    cout << "Station: ";
    cin >> stn;

    if (cin.fail()) // check if input is not a number
    {
        cin.clear();                                         // clear the error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the row
        stn = 777;
    }

    if (stn == 727)
    {
        cout << "wysi :tf:";
    }
    if (stn == 0)
    {
        stats.push_back("cancel");
        cout << endl << endl;
        return stats;
    }

    switch (stn)
    {

    case 1:
    {
        cout << "\nStation: " << line[stn - 1] << endl;

        for (x = 0; x < 20; x++)
        {
            cout << num[x] << " " << LRT1[x] << endl;
        }
        cout << "\nChoose Origin Station: ";
        cin >> dest;

        if (cin.fail()) // check if input is not a number
        {
            cin.clear();                                         // clear the error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the row
            dest = 777;
        }

        switch (dest)
        {
        case 1:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 2:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 3:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 4:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 5:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 6:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 7:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 8:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 9:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 10:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 11:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 12:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 13:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 14:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 15:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 16:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 17:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 18:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 19:
        {
            save = LRT1[dest - 1];
        }
        break;

        case 20:
        {
            save = LRT1[dest - 1];
        }
        break;

        default:
        {
            cout << "Invalid Location" << endl;
            return StationSelect();
        }
        break;
        }
    }
    break;

    case 2:
    {
        cout << "\nStation: " << line[stn - 1] << endl;
        for (x = 0; x < 13; x++)
        {
            cout << num[x] << " " << LRT2[x] << endl;
        }
        cout << "\nChoose Origin Station: ";
        cin >> dest;

        if (cin.fail()) // check if input is not a number
        {
            cin.clear();                                         // clear the error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the row
            dest = 777;
        }

        switch (dest)
        {
        case 1:
        {
            save = LRT2[dest - 1];
        }
        break;

        case 2:
        {
            save = LRT2[dest - 1];
        }
        break;

        case 3:
        {
            save = LRT2[dest - 1];
        }
        break;

        case 4:
        {
            save = LRT2[dest - 1];
        }
        break;

        case 5:
        {
            save = LRT2[dest - 1];
        }
        break;

        case 6:
        {
            save = LRT2[dest - 1];
        }
        break;

        case 7:
        {
            save = LRT2[dest - 1];
        }
        break;

        case 8:
        {
            save = LRT2[dest - 1];
        }
        break;

        case 9:
        {
            save = LRT2[dest - 1];
        }
        break;

        case 10:
        {
            save = LRT2[dest - 1];
        }
        break;

        case 11:
        {
            save = LRT2[dest - 1];
        }
        break;

        case 12:
        {
            save = LRT2[dest - 1];
        }
        break;

        case 13:
        {
            save = LRT2[dest - 1];
        }
        break;

        default:
        {
            cout << "Invalid Location" << endl;
            return StationSelect();
        }
        break;
        }
    }
    break;

    case 3:
    {
        cout << "\nStation: " << line[stn - 1] << endl;
        for (x = 0; x < 13; x++)
        {
            cout << num[x] << " " << MRT3[x] << endl;
        }
        cout << "\nChoose Origin Station: ";
        cin >> dest;

        if (cin.fail()) // check if input is not a number
        {
            cin.clear();                                         // clear the error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the row
            dest = 777;
        }

        switch (dest)
        {
        case 1:
        {
            save = MRT3[dest - 1];
        }
        break;

        case 2:
        {
            save = MRT3[dest - 1];
        }
        break;

        case 3:
        {
            save = MRT3[dest - 1];
        }
        break;

        case 4:
        {
            save = MRT3[dest - 1];
        }
        break;

        case 5:
        {
            save = MRT3[dest - 1];
        }
        break;

        case 6:
        {
            save = MRT3[dest - 1];
        }
        break;

        case 7:
        {
            save = MRT3[dest - 1];
        }
        break;

        case 8:
        {
            save = MRT3[dest - 1];
        }
        break;

        case 9:
        {
            save = MRT3[dest - 1];
        }
        break;

        case 10:
        {
            save = MRT3[dest - 1];
        }
        break;

        case 11:
        {
            save = MRT3[dest - 1];
        }
        break;

        case 12:
        {
            save = MRT3[dest - 1];
        }
        break;

        case 13:
        {
            save = MRT3[dest - 1];
        }
        break;

        default:
        {
            cout << "Invalid Location" << endl;
            return StationSelect();
        }
        break;
        } // end of dest switch
    }
    break; // end of case

    default:
        return StationSelect();
        break;
    }

    if (stn == 1)
    {
        cout << "\nStation: " << line[stn - 1] << endl;

        for (x = 0; x < 20; x++)
        {
            cout << num[x] << " " << LRT1[x] << endl;
        }
        cout << "\nChoose Destination Station: ";
        cin >> dest2;

        if (cin.fail()) // check if input is not a number
        {
            cin.clear();                                         // clear the error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the row
            dest2 = 777;
        }

        switch (dest2)
        {
        case 1:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 2:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 3:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 4:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 5:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 6:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 7:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 8:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 9:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 10:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 11:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 12:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 13:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 14:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 15:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 16:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 17:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 18:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 19:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        case 20:
        {
            save2 = LRT1[dest2 - 1];
        }
        break;

        default:
        {
            cout << "Invalid Location" << endl;
            return StationSelect();
        }
        break;
        }
    }

    else if (stn == 2)
    {
        cout << "\nStation: " << line[stn - 1] << endl;
        for (x = 0; x < 13; x++)
        {
            cout << num[x] << " " << LRT2[x] << endl;
        }
        cout << "\nChoose Destination Station: ";
        cin >> dest2;

        if (cin.fail()) // check if input is not a number
        {
            cin.clear();                                         // clear the error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the row
            dest2 = 777;
        }

        switch (dest2)
        {
        case 1:
        {
            save2 = LRT2[dest2 - 1];
        }
        break;

        case 2:
        {
            save2 = LRT2[dest2 - 1];
        }
        break;

        case 3:
        {
            save2 = LRT2[dest2 - 1];
        }
        break;

        case 4:
        {
            save2 = LRT2[dest2 - 1];
        }
        break;

        case 5:
        {
            save2 = LRT2[dest2 - 1];
        }
        break;

        case 6:
        {
            save2 = LRT2[dest2 - 1];
        }
        break;

        case 7:
        {
            save2 = LRT2[dest2 - 1];
        }
        break;

        case 8:
        {
            save2 = LRT2[dest2 - 1];
        }
        break;

        case 9:
        {
            save2 = LRT2[dest2 - 1];
        }
        break;

        case 10:
        {
            save2 = LRT2[dest2 - 1];
        }
        break;

        case 11:
        {
            save2 = LRT2[dest2 - 1];
        }
        break;

        case 12:
        {
            save2 = LRT2[dest2 - 1];
        }
        break;

        case 13:
        {
            save2 = LRT2[dest2 - 1];
        }
        break;

        default:
        {
            cout << "Invalid Location" << endl;
            return StationSelect();
        }
        break;
        }
    }

    else if (stn == 3)
    {
        cout << "\nStation: " << line[stn - 1] << endl;
        for (x = 0; x < 13; x++)
        {
            cout << num[x] << " " << MRT3[x] << endl;
        }
        cout << "\nChoose Destination Station: ";
        cin >> dest2;

        if (cin.fail()) // check if input is not a number
        {
            cin.clear();                                         // clear the error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the row
            dest2 = 777;
        }

        switch (dest2)
        {
        case 1:
        {
            save2 = MRT3[dest2 - 1];
        }
        break;

        case 2:
        {
            save2 = MRT3[dest2 - 1];
        }
        break;

        case 3:
        {
            save2 = MRT3[dest2 - 1];
        }
        break;

        case 4:
        {
            save2 = MRT3[dest2 - 1];
        }
        break;

        case 5:
        {
            save2 = MRT3[dest2 - 1];
        }
        break;

        case 6:
        {
            save2 = MRT3[dest2 - 1];
        }
        break;

        case 7:
        {
            save2 = MRT3[dest2 - 1];
        }
        break;

        case 8:
        {
            save2 = MRT3[dest2 - 1];
        }
        break;

        case 9:
        {
            save2 = MRT3[dest2 - 1];
        }
        break;

        case 10:
        {
            save2 = MRT3[dest2 - 1];
        }
        break;

        case 11:
        {
            save2 = MRT3[dest2 - 1];
        }
        break;

        case 12:
        {
            save2 = MRT3[dest2 - 1];
        }
        break;

        case 13:
        {
            save2 = MRT3[dest2 - 1];
        }
        break;

        default:
        {
            cout << "Invalid Location" << endl;
            return StationSelect();
        }
        break;
        } // end of dest switch
    }

    if (dest == dest2)
    {
        cout << "Origin and Destination cannot be the same!" << endl;
        return StationSelect();
    }

    cout << "\nIs this correct? [Y/N]" << endl;
    cout << "From: " << save << "\nto: " << save2 << endl;
    cout << "Confirm: ";
    cin >> conf;

    if (conf == "Y" || conf == "y")
    {
        stats.push_back(save);
        stats.push_back(save2);
        int locationDistance = abs(dest - dest2);
        stats.push_back(to_string(locationDistance));

        return stats;
    }
    else if (conf == "N" || conf == "n")
    {
        return StationSelect();
        // cout << "Returning...";
    }
    else
    {
        conf = 'b';
        return StationSelect();
        // cout << "Invalid Input";
    }
}
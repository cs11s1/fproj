#include <iostream>

using namespace std;

string saveddest1(string);
string saveddest2(string);

int main()
{

    int stn, x, y, z, no, dest, stn2, dest2;
    char conf;
    string save, saveout, saveout2, saveloc, save2, confirans;
    string selLine[1];
    string line[3] = {"LRT1", "LRT2", "MRT3"};
    string stats[2];
    string num[20] = {"1. ", "2. ", "3. ", "4. ", "5. ", "6. ", "7. ", "8. ", "9. ", "10. ", "11. ", "12. ", "13. ", "14. ", "15. ", "16. ", "17. ", "18. ", "19. ", "20. "};
    string LRT1[20] = {"Roosevelt", "Balintawak", "Yamaha Monumento", "5th Avenue", "R. Papa", "Abad Santos", "Bluementritt", "Tayuman", "Bambang", "Doroteo Jose", "Carriedo", "Central Terminal", "United Nations", "Pedro Gil", "Quirino", "Vito Cruz", "Gil Puyat", "Libertad", "EDSA", "Baclaran"};
    string LRT2[13] = {"Recto", "Legarda", "Pureza", "V. Mapa", "J. Ruiz", "Gilmore", "Betty Go", "Cubao", "Anonas", "Katipunan", "Santolan", "Marikina", "Antipolo"};
    string MRT3[13] = {"North Avenue", "Quezon Avenue", "Kamuning", "Cubao", "Santolan Anapolis", "Ortigas", "Shaw Boulevard", "Boni Ave", "Guadalupe", "Buendia", "Ayala Ave", "Magallanes", "Taft"};

    cout << "Select Station: " << endl;
    for (z = 0; z <= 2; z++)
    {
        cout << num[z] << line[z] << endl;
    }
    cout << "Station: ";
    cin >> stn;

    if (stn == 727)
    {
        cout << "wysi :tf:";
    }
    switch (stn)
    {

    case 1:
    {
        cout << "\n Station:" << line[stn - 1] << endl;

        for (x = 0; x <= 19; x++)
        {
            cout << num[x] << " " << LRT1[x] << endl;
        }
        cout << "\nchoose yer destination 1 fuckass: ";
        cin >> dest;

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
            cout << "Invalid Location";
        }
        break;
        }
    }
    break;

    case 2:
    {
        cout << "\n Station:" << line[stn - 1] << endl;
        for (x = 0; x <= 13; x++)
        {
            cout << num[x] << " " << LRT2[x] << endl;
        }
        cout << "\nchoose yer destination fuckass: ";
        cin >> dest;

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
            cout << "Invalid Location";
        }
        break;
        }
    }
    break;

    case 3:
    {
        cout << "\n Station:" << line[stn - 1] << endl;
        for (x = 0; x <= 12; x++)
        {
            cout << num[x] << " " << MRT3[x] << endl;
        }
        cout << "\nchoose yer destination fuckass: ";
        cin >> dest;

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
            cout << "Invalid Location";
        }
        break;
        } // end of dest switch
    }
    break; // end of case
    }

    cout << "\nChoose 2nd destination." << endl;

    if (stn == 1)
    {
        cout << "\n Station:" << line[stn - 1] << endl;

        for (x = 0; x <= 19; x++)
        {
            cout << num[x] << " " << LRT1[x] << endl;
        }
        cout << "\nchoose yer destination 1 fuckass: ";
        cin >> dest2;

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
            cout << "Invalid Location";
        }
        break;
        }
    }

    else if (stn == 2)
    {
        cout << "\n Station:" << line[stn - 1] << endl;
        for (x = 0; x <= 13; x++)
        {
            cout << num[x] << " " << LRT2[x] << endl;
        }
        cout << "\nchoose yer destination fuckass: ";
        cin >> dest2;

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
            cout << "Invalid Location";
        }
        break;
        }
    }

    else if (stn == 3)
    {
        cout << "\n Station:" << line[stn - 1] << endl;
        for (x = 0; x <= 12; x++)
        {
            cout << num[x] << " " << MRT3[x] << endl;
        }
        cout << "\nchoose yer destination fuckass: ";
        cin >> dest2;

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
            cout << "Invalid Location";
        }
        break;
        } // end of dest switch
    }

    cout << "Is this correct? [Y/N]" << endl;
    cout << "From: " << save << "\nto: " << save2 << endl;
    cout << "Answer: ";
    cin >> conf;

    if (conf == 'Y' or conf == 'y')
    {
        stats[0] = save;
        stats[1] = save2;
    }
    else if (conf == 'N' or conf == 'n')
    {
        cout << "k go fuck urself ig";
    }
    else
    {
        cout << "Cant even fucking type Y or N??";
    }
}
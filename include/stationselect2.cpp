#include "stationselect.h"

using namespace std;

int StationSelect()
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
    int linestationcount[3] = {20, 13, 13};

    cout << "Select Station: " << endl;
    for (z = 0; z < 3; z++)
    {
        cout << z << ". " << line[z] << endl;
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

        for (x = 0; x < 20; x++)
        {
            cout << x+1 << ". " << LRT1[x] << endl;
        }
        cout << "\nChoose Origin Station: ";
        cin >> dest;
        if (dest < 1 || dest > 20)
        {
            cout << "\nInvalid Option.";
            return -2;
        }

        save = LRT1[dest-1];
        break;
    }

    case 2:
    {
        cout << "\n Station:" << line[stn - 1] << endl;

        for (x = 0; x < 13; x++)
        {
            cout << x+1 << ". " << LRT1[x] << endl;
        }
        cout << "\nChoose Origin Station: ";
        cin >> dest;
        if (dest < 1 || dest > 13)
        {
            cout << "\nInvalid Option.";
            return -2;
        }

        save = LRT2[dest-1];
        break;
    }

    case 3:
    {
        cout << "\n Station:" << line[stn - 1] << endl;

        for (x = 0; x < 13; x++)
        {
            cout << x+1 << ". " << MRT3[x] << endl;
        }
        cout << "\nChoose Origin Station: ";
        cin >> dest;
        if (dest < 1 || dest > 13)
        {
            cout << "\nInvalid Option.";
            return -2;
        }

        save = MRT3[dest-1];
        break;
    }

    default:
        cout << "Invalid Option.";
    }

    cout << "\nChoose Destination station." << endl;

    if (stn == 1)
    {
        cout << "\n Station:" << line[stn - 1] << endl;

        for (x = 0; x < 20; x++)
        {
            cout << x+1 << ". " << LRT1[x] << endl;
        }
        cout << "\nChoose Origin Station: ";
        cin >> dest;
        if (dest < 1 || dest > 20)
        {
            cout << "\nInvalid Option.";
            return -2;
        }

        save2 = LRT1[dest-1];
    }

    else if (stn == 2)
    {
        cout << "\n Station:" << line[stn - 1] << endl;

        for (x = 0; x < 13; x++)
        {
            cout << x+1 << ". " << LRT2[x] << endl;
        }
        cout << "\nChoose Origin Station: ";
        cin >> dest;
        if (dest < 1 || dest > 13)
        {
            cout << "\nInvalid Option.";
            return -2;
        }

        save2 = LRT2[dest-1];
    }

    else if (stn == 3)
    {
        cout << "\n Station:" << line[stn - 1] << endl;

        for (x = 0; x < 13; x++)
        {
            cout << x+1 << ". " << MRT3[x] << endl;
        }
        cout << "\nChoose Origin Station: ";
        cin >> dest;
        if (dest < 1 || dest > 13)
        {
            cout << "\nInvalid Option.";
            return -2;
        }

        save2 = MRT3[dest-1];
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
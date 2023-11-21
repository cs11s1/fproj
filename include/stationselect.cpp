#include "stationselect.h"

using namespace std;


int main(){
    
int stn, x, no, dest, stn2, dest2;
char conf;
string save, saveout, saveout2, saveloc, save2, confirans;
string stats[2];
string num[20] = {"1. ", "2. ", "3. ", "4. ", "5. ", "6. ", "7. ", "8. ", "9. ", "10. ", "11. ", "12. ", "13. ", "14. ", "15. ", "16. ", "17. ", "18. ", "19. ", "20. "};
string LRT1[20] = {"Roosevelt", "Balintawak", "Yamaha Monumento", "5th Avenue", "R. Papa", "Abad Santos", "Bluementritt", "Tayuman", "Bambang", "Doroteo Jose", "Carriedo", "Central Terminal", "United Nations", "Pedro Gil", "Quirino", "Vito Cruz", "Gil Puyat", "Libertad", "EDSA", "Baclaran"};
string LRT2[13] = {"Recto", "Legarda", "Pureza", "V. Mapa", "J. Ruiz", "Gilmore", "Betty Go", "Cubao", "Anonas", "Katipunan", "Santolan", "Marikina", "Antipolo"};
string MRT3[13] = {"North Avenue", "Quezon Avenue", "Kamuning", "Cubao","Santolan Anapolis", "Ortigas", "Shaw Boulevard", "Boni Ave", "Guadalupe", "Buendia", "Ayala Ave", "Magallanes", "Taft"};
    
    cout<<"Choose your Station: " << endl;
    cout<<"\t1.) station 1. \n \t2.) station 2. \n \t3.) station 3. \nChoose: ";
    cin >> stn;
    
    if(stn == 727){
        cout << "wysi :tf:";
    }

switch(stn){
    
    case 1: {
        cout << "\n Station: LRT 1"<< endl;
            for (x = 0; x <= 19; x++){
                cout <<num[x] <<" "<< LRT1[x]<< endl;
        }
        cout << "\nchoose yer destination fuckass: ";
        cin >> dest;
        
        switch(dest){
            case 1: {
                save = "Roosevelt";
            } break;
            
            case 2: {
                save = "Balintawak";
            } break;
            
            case 3: {
                save = "Yamaha Monumento";
            }break;
            
            case 4: {
                save = "5th Avenue";
            }break;
            
            case 5: {
                save = "R. Papa";
            }break;
            
            case 6: {
                save = "Abad Santos";
            }break;
            
            case 7: {
                save = "Bluementritt";
            }break;
            
            case 8: {
                save = "Tayuman";
            }break;
            
            case 9: {
                save = "Bambang";
            }break;
            
            case 10: {
                save = "Doroteo Jose";
            }break;
            
            case 11: {
                save = "Carriedo";
            }break;
            
            case 12: {
                save = "Central Terminal";
            }break;
            
            case 13: {
                save = "United Nations";
            }break;
            
            case 14: {
                save = "Pedro Gil";
            }break;
            
            case 15: {
                save = "Quirino";
            }break;
            
            case 16: {
                save = "Vito Cruz";
            }break;
            
            case 17: {
                save = "Gil Puyat";
            }break;
            
            case 18: {
                save = "Libertad";
            }break;
            
            case 19: {
                save = "EDSA";
            }break;
            
            case 20: {
                save = "Baclaran";
            }break;
            
            default:{
                cout << "Invalid Location";
            }break;
            
        }
    }break;
    
    case 2: {
        cout << "\n Station: LRT 2"<< endl;
            for (x = 0; x <= 13; x++){
                cout << num[x] << " "<<LRT2[x]<< endl;
        }
        cout << "\nchoose yer destination fuckass: ";
        cin >> dest;
        
        switch(dest){
            case 1: {
                save = "Recto";
            } break;
            
            case 2: {
                save = "Legarda";
            } break;
            
            case 3: {
                save = "Pureza";
            }break;
            
            case 4: {
                save = "V. Mapa";
            }break;
            
            case 5: {
                save = "J. Ruiz";
            }break;
            
            case 6: {
                save = "Gilmore" ;
            }break;
            
            case 7: {
                save = "Betty Go";
            }break;
            
            case 8: {
                save = "Cubao";
            }break;
            
            case 9: {
                save = "Anonas" ;
            }break;
            
            case 10: {
                save = "Katipunan";
            }break;
            
            case 11: {
                save = "Santolan";
            }break;
            
            case 12: {
                save = "Marikina";
            }break;
            
            case 13: {
                save = "Antipolo";
            }break;

            default:{
                cout << "Invalid Location";
            }break;
        }
    }break;
    
    case 3: {
        cout << "\n Station: MRT 3"<< endl;
            for (x = 0; x <= 13; x++){
                cout << num[x] << " "<<LRT2[x]<< endl;
        }
        cout << "\nchoose yer destination fuckass: ";
        cin >> dest;
        
        switch(dest){
            case 1: {
                save = "North Avenue";
            } break;
            
            case 2: {
                save = "Quezon Avenue";
            } break;
            
            case 3: {
                save = "Kamuning";
            }break;
            
            case 4: {
                save = "Cubao" ;
            }break;
            
            case 5: {
                save = "Santolan Anapolis";
            }break;
            
            case 6: {
                save = "Ortigas";
            }break;
            
            case 7: {
                save = "Shaw Boulevard";
            }break;
            
            case 8: {
                save = "Boni Ave";
            }break;
            
            case 9: {
                save = "Guadalupe" ;
            }break;
            
            case 10: {
                save = "Buendia";
            }break;
            
            case 11: {
                save = "Ayala Ave";
            }break;
            
            case 12: {
                save = "Magallanes" ;
            }break;
            
            case 13: {
                save = "Taft";
            }break;

            default:{
                cout << "Invalid Location";
            }break;
        }//end of dest switch
    }break;//end of case
}
cout<<"\nChoose your 2nd Station: " << endl;
cout<<"\t1.) station 1. \n \t2.) station 2. \n \t3.) station 3. \nChoose: ";
cin >> stn2;
    
switch(stn2){
    
    case 1: {
        cout << "\n Station: LRT 1"<< endl;
            for (x = 0; x <= 19; x++){
                cout <<num[x] <<" "<< LRT1[x]<< endl;
        }
        cout << "\nchoose yer destination fuckass: ";
        cin >> dest2;
        
        switch(dest2){
            case 1: {
                save2 = "Roosevelt";
            } break;
            
            case 2: {
                save2 = "Balintawak";
            } break;
            
            case 3: {
                save2 = "Yamaha Monumento";
            }break;
            
            case 4: {
                save2 = "5th Avenue";
            }break;
            
            case 5: {
                save2 = "R. Papa";
            }break;
            
            case 6: {
                save2 = "Abad Santos";
            }break;
            
            case 7: {
                save2 = "Bluementritt";
            }break;
            
            case 8: {
                save2 = "Tayuman";
            }break;
            
            case 9: {
                save2 = "Bambang";
            }break;
            
            case 10: {
                save2 = "Doroteo Jose";
            }break;
            
            case 11: {
                save2 = "Carriedo";
            }break;
            
            case 12: {
                save2 = "Central Terminal";
            }break;
            
            case 13: {
                save2 = "United Nations";
            }break;
            
            case 14: {
                save2 = "Pedro Gil";
            }break;
            
            case 15: {
                save2 = "Quirino";
            }break;
            
            case 16: {
                save2 = "Vito Cruz";
            }break;
            
            case 17: {
                save2 = "Gil Puyat";
            }break;
            
            case 18: {
                save2 = "Libertad";
            }break;
            
            case 19: {
                save2 = "EDSA";
            }break;
            
            case 20: {
                save2 = "Baclaran";
            }break;
            
            default:{
                cout << "Invalid Location";
            }break;
            
        }
    }break;
    
    case 2: {
        cout << "\n Station: LRT 2"<< endl;
            for (x = 0; x <= 13; x++){
                cout << num[x] << " "<<LRT2[x]<< endl;
        }
        cout << "\nchoose yer destination fuckass: ";
        cin >> dest2;
        
        switch(dest2){
            case 1: {
                save2 = "Recto";
            } break;
            
            case 2: {
                save2 = "Legarda";
            } break;
            
            case 3: {
                save2 = "V. Mapa";
            }break;
            
            case 5: {
                save2 = "J. Ruiz";
            }break;
            
            case 6: {
                save2 = "Gilmore" ;
            }break;
            
            case 7: {
                save2 = "Betty Go";
            }break;
            
            case 8: {
                save2 = "Cubao";
            }break;
            
            case 9: {
                save2 = "Anonas" ;
            }break;
            
            case 10: {
                save2 = "Katipunan";
            }break;
            
            case 11: {
                save2 = "Santolan";
            }break;
            
            case 12: {
                save2 = "Marikina";
            }break;
            
            case 13: {
                save2 = "Antipolo";
            }break;

            default:{
                cout << "Invalid Location";
            }break;
        }
    }break;
    
    case 3: {
        cout << "\n Station: MRT 3"<< endl;
            for (x = 0; x <= 13; x++){
                cout << num[x] << " "<<LRT2[x]<< endl;
        }
        cout << "\nchoose yer destination fuckass: ";
        cin >> dest2;
        
        switch(dest2){
            case 1: {
                save2 = "North Avenue";
            } break;
            
            case 2: {
                save2 = "Quezon Avenue";
            } break;
            
            case 3: {
                save2 = "Kamuning";
            }break;
            
            case 4: {
                save2 = "Cubao" ;
            }break;
            
            case 5: {
                save2 = "Santolan Anapolis";
            }break;
            
            case 6: {
                save2 = "Ortigas";
            }break;
            
            case 7: {
                save2 = "Shaw Boulevard";
            }break;
            
            case 8: {
                save2 = "Boni Ave";
            }break;
            
            case 9: {
                save2 = "Guadalupe" ;
            }break;
            
            case 10: {
                save2 = "Buendia";
            }break;
            
            case 11: {
                save2 = "Ayala Ave";
            }break;
            
            case 12: {
                save2 = "Magallanes" ;
            }break;
            
            case 13: {
                save2 = "Taft";
            }break;

            default:{
                cout << "Invalid Location";
            }break;
        }
    }break;
    
}



saveout = saveddest1(save);
 cout << "\n\nFrom: " << saveout << endl;
 
saveout2 = saveddest2(save2);
cout << "To: " << saveout2 << endl;

cout << "Is this correct? [Y/N]: ";
cin >> conf;
if(conf == 'Y' or conf == 'y'){
    stats[0] = saveout;
    stats[1] = saveout2;
}
else{
    cout << "k" <<endl;
}
cout << stats[0] <<" "<< stats[1];
}

string saveddest1(string save){
    return save;
}

string saveddest2(string save2){
    return save2;
}

//Напишите программу, которая вычисляет дату следующего дня.

#include <iostream>
#include <string>


using namespace std;

class DMY {
public:
    int DD, MM, YYYY;
    void DD_Check(){
        cout << "Enter Day: \t";
        cin >> DD;
        if (DD <  1){
            cout << "Error! Re-enter Day!\n";
            DD_Check();
        }
        else if (DD > 31){
            cout << "Error! Re-enter Day!\n";
            DD_Check();
        }
        else {
            system("cls");
            MM_Check();
        }
    }
    void MM_Check(){
        int MM;
        cout << "Enter Month: \t";
        cin >> MM;
        if (MM == 1 || MM == 3 || MM == 5 || MM == 7 || MM == 8 ||  MM == 10 || MM == 12){
             YYYY_Check();
        }
        else if (MM == 02) {
            if (DD < 1 || DD > 28) {
                YYYY_Check();
            }
            else {
                cout << "Error";
            }

        }
        else {
            if (DD < 1 || DD > 30) {
                YYYY_Check();
            }
            else {
                cout << "Re-enter Day: ";
                DD_Check();
            }
        }
    }
    void YYYY_Check(){
        cout << "Enter Year: \t";
        cin >> YYYY;

    }
};


int main()
{
    DMY dmy;
    dmy.DD_Check();

    return 0;
}

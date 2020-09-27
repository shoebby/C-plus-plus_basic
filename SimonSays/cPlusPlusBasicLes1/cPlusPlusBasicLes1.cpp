#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int numberInput;
    int digitCountMin = 100;
    int digitCountMax = 1000;
    int num;

    //fresh hot new seed
    srand(time(NULL));
    
    //to constantly loop this piece
    while (true) {

        //create a number between two values
        int code = rand() % digitCountMax + digitCountMin;
        cout << code;

        Sleep(1000);

        //wipe the screen
        system("CLS");

        //user types in the code
        cout << "TYPE OUT THE GIVEN CODE MORTAL: ";
        cin >> numberInput;
        cin.ignore();

        //if correct, two values are multiplied by 10 to increase the length of the code by 1 number
        if (numberInput == code) {
            cout << "THANK YOU MORTAL, NEXT ONE";
            digitCountMax = digitCountMax * 10;
            digitCountMin = digitCountMin * 10;

            Sleep(1000);

            system("CLS");
        }
        //if false, length is reset to the base length of 3 numbers
        else {
            cout << "WRONG, YOU MAY LEAVE NOW IF YOU WANT";
            digitCountMax = 1000;
            digitCountMin = 100;

            Sleep(1000);

            system("CLS");
        }
    }
}

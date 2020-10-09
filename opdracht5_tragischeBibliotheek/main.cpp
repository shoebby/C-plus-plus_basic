#include <iostream>
#include "boek.h"
#include "bibliotheek.h"

int main()
{
    std::string optionSelect;

    Bibliotheek* BibliotheekObj = new Bibliotheek();
    Boek* boekObj = new Boek();

    while (true) {
        
        std::cout << "0. Boek inleveren" << "\n" "\n";

        boekObj->boekListing();

        std::cin >> optionSelect;

        system("CLS");

        if (optionSelect == "0") {

            boekObj->leverIn();

        } else if (optionSelect == "1") {

            boekObj->leenUit();

        }
    }
}
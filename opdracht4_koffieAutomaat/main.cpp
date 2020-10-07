#include <iostream>
#include "koffieAutomaat.h"
#include "munt.h"
#include <string>

int main()
{
    while (true){
        std::string keuzeInput;
        float saldo = 0;
        bool gratisKoffie = false;

        VijftigCentMunt vcm = VijftigCentMunt();
        EuroMunt em = EuroMunt();
        KoffieMunt km = KoffieMunt();

        KoffieAutomaat ka = KoffieAutomaat();

        while (true) {

            ka.KoffieLijst("A. ", "Capucchino", 0.95);
            ka.KoffieLijst("B. ", "Americano", 0.75);
            ka.KoffieLijst("C. ", "Liquid Gold", 100.12);

            std::cout << "\n" "\n" << "Deposit die cash money of maak een koffiekeuze, homegirl." << "\n";
            std::cout << "1. 50 cent" << "\n" << "2. 1 euro" << "\n" << "3. Koffiemunt" << "\n" "\n";

            std::cin >> keuzeInput;
            std::cin.ignore();

            system("CLS");

            if (keuzeInput == "1") {

                ka.enterCoins(vcm, saldo);

                saldo += 0.50;
            }
            
            if (keuzeInput == "2") {

                ka.enterCoins(em, saldo);

                saldo += 1.00;
            }
            
            if (keuzeInput == "3") {

                ka.enterCoins(km, saldo);

                gratisKoffie = true;
            }

            if (keuzeInput == "a") {

                ka.kiesKoffie("Capucchino", 0.95, saldo, gratisKoffie);

                gratisKoffie = false;
            }
            
            if (keuzeInput == "b") {

                ka.kiesKoffie("Americano", 0.75, saldo, gratisKoffie);

                gratisKoffie = false;
            }
            
            if (keuzeInput == "c") {

                ka.kiesKoffie("Liquid Gold", 100.12, saldo, gratisKoffie);

                gratisKoffie = false;
            }
        }
    }
}

#include <iostream>
#include "koffieAutomaat.h"
#include "munt.h"
#include <Windows.h>
#include <string>

KoffieAutomaat::KoffieAutomaat() {}

void KoffieAutomaat::enterCoins(Munt c, float saldo) {
	std::cout  << "Je hebt - " << c.muntNaam << " - ingestoken" <<"\n";
	std::cout << "saldo: " << saldo + c.muntWaarde << "\n" "\n";

	saldo += c.muntWaarde;

	if (c.muntNaam == "Koffie Munt") {
		std::cout << "Eerstvolgende keuze kost 0 euro!" << "\n" "\n";
	}
}

void KoffieAutomaat::KoffieLijst(std::string x, std::string y, float z) {
	koffieLetter = x;
	koffieNaam = y;
	koffiePrijs = z;

	std::cout << koffieLetter << koffieNaam << " - $" << koffiePrijs << "\n";
}

void KoffieAutomaat::kiesKoffie(std::string koffieNaam, float prijs, float saldo, bool gratisKoffie) {

	if (gratisKoffie == true) {
		std::cout << "Uw keuze is: " << koffieNaam << "\n";
		std::cout << "Geniet van uw koffie!" << "\n";
		std::cout << "saldo: " << saldo << "\n" "\n";
	}
	else if (saldo >= prijs) {
		saldo -= prijs;
		std::cout << "Uw keuze is: " << koffieNaam << "\n";
		std::cout << "Geniet van uw koffie!" << "\n";
		std::cout << "saldo: " << saldo << "\n" "\n";
	}
	else {
		std::cout << "Uw keuze is: " << koffieNaam << "\n";
		std::cout << "Te skeer, helaas!" << "\n";
		std::cout << "saldo: " << saldo << "\n" "\n";
	}
}
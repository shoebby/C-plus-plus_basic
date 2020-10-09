#include <iostream>
#include "boek.h"

Boek::Boek() {
	titel = "Call of Cthulhu";
	uitgeleend = false;
}

void Boek::boekListing() {
	if (uitgeleend == false) {
		std::cout << "1. " << titel << "\n" "\n";
	}
	else if (uitgeleend == true) {
		std::cout << "1. " << titel << " - Uitgeleend" "\n" "\n";
	}
}

void Boek::leenUit() {
	
	if (uitgeleend == false) {
		std::cout << titel << " uitgeleend aan gebruiker" << "\n" "\n";

		uitgeleend = true;
	}
	else if (uitgeleend == true) {
		std::cout << titel << " is al uitgeleend" << "\n" "\n";
	}
}

void Boek::leverIn() {
	
	std::cout << titel << " ingeleverd door gebruiker" << "\n" "\n";
	
	uitgeleend = false;
}
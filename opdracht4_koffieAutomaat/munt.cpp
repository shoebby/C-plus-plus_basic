#include "munt.h"
#include <string>

Munt::Munt(){}

KoffieMunt::KoffieMunt() : Munt() {
	muntNaam = "Koffie Munt";
	muntWaarde = 0;
	muntCode = 1;
}

EuroMunt::EuroMunt() : Munt() {
	muntNaam = "1 Euro Munt";
	muntWaarde = 1;
	muntCode = 2;
}

VijftigCentMunt::VijftigCentMunt() : Munt() {
	muntNaam = "50 Cent Munt";
	muntWaarde = 0.50f;
	muntCode = 3;
}
#include <iostream>
#include "koffer.h"

Koffer::Koffer() {
	
}

Koffer::Koffer(std::string kleur) {
	std::cout << "Koffer met de kleur '" << kleur << "' gemaakt - adres: " << this << std::endl;
	this->kleur = kleur;
}

//Koffer::~Koffer() {
//	std::cout << "Koffer: dtor" << std::endl;
//}

void Koffer::toonKofferInhoud() {
	if (sok.kleur != "grijs") {
		std::cout << "Koffer bevat sokken met de kleur '" << sok.kleur << "'" << std::endl;
	}
	else {
		std::cout << "De koffer is leeg" << std::endl;
	}
}

void Koffer::vulKoffer(std::string sokKleur) {
	sok = Sok(sokKleur);
}
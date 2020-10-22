#include <iostream>
#include "caravan.h"
#include "koffer.h"
#include "sok.h"

Caravan::Caravan() {

}

Caravan::Caravan(std::string kleur) {
	std::cout << "Caravan met de kleur '" << kleur << "' gemaakt - adres: " << this << std::endl;
	this->kleur = kleur;
}

Caravan::~Caravan() {
	std::cout << "Caravan: dtor" << std::endl;
}

void Caravan::toonCaravanInhoud() {
	if (koffer.kleur != "grijs") {
		std::cout << "Caravan bevat koffer met de kleur '" << koffer.kleur << "'" << std::endl;
		std::cout << "Koffer in de caravan bevat sokken met de kleur '" << sok.kleur << "'" << std::endl;
	}
	else {
		std::cout << "De Caravan is leeg" << std::endl;
	}
}

void Caravan::vulCaravan(std::string sokKleur, std::string kofferKleur) {
	sok.kleur = sokKleur;
	koffer = Koffer(kofferKleur);

	koffer.vulKoffer(sok.kleur);
	koffer.toonKofferInhoud();
}
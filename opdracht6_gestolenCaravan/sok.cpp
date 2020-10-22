#include <iostream>
#include "sok.h"

Sok::Sok() {
	
}

Sok::Sok(std::string kleur) {
	std::cout << "Sok met de kleur '" << kleur << "' gemaakt - adres: " << this << std::endl;
	this->kleur = kleur;
}

//Sok::~Sok() {
//	std::cout << "Sok: dtor: '" << kleur << "' adres " << this << std::endl;
//}
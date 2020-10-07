#pragma once
#include <string>
#include "munt.h"

class KoffieAutomaat {
public:
	std::string koffieNaam;
	std::string koffieLetter;
	float koffiePrijs;
	int coinInput;

	KoffieAutomaat();

	void KoffieLijst(std::string x, std::string y, float z);

	void enterCoins(Munt c, float saldo);

	void kiesKoffie(std::string koffieNaam, float prijs, float saldo, bool gratisKoffie);
};
#pragma once
#include <string>
#include "koffer.h"
#include "sok.h"

class Caravan {
public:
	std::string kleur = "grijs";
	Caravan();
	Caravan(std::string kleur);
	virtual ~Caravan();

	void vulCaravan(std::string kofferKleur, std::string sokKleur);
	void toonCaravanInhoud();

private:
	Sok sok;
	Koffer koffer;
};
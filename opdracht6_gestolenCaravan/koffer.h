#pragma once
#include <string>
#include "sok.h"

class Koffer {
public:
	std::string kleur = "grijs";

	Koffer();
	Koffer(std::string kleur);
	//virtual ~Koffer();

	void vulKoffer(std::string sokKleur);
	void toonKofferInhoud();

private:
	Sok sok;
};
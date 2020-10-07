#pragma once
#include <string>

class Munt {
public:
	std::string muntNaam;
	float muntWaarde;
	int muntCode;

	Munt();
};

class KoffieMunt : public Munt {
public:
	KoffieMunt();
};

class EuroMunt : public Munt {
public:
	EuroMunt();
};

class VijftigCentMunt : public Munt {
public:
	VijftigCentMunt();
};
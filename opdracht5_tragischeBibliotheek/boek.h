#pragma once

class Boek {
public:
	std::string titel;
	bool uitgeleend;

	Boek();

	void boekListing();

	void leenUit();

	void leverIn();
};
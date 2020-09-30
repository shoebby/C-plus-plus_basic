#pragma once
#include "persoon.h"

class Docent : public Persoon {
public:
	int m_salaris;

	Docent(int salaris = 0)
		: m_salaris{salaris}
	{
	}

	int getSalaris() {
		return m_salaris;
	}

	void printDocent() const
	{
		std::cout << "DOCENT - " << m_naam << " - " << m_leeftijd << " jaar - " << m_salaris << " euro per maand" << '\n';
	}
};
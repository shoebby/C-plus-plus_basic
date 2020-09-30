#include <iostream>
#include "docent.h"
#include "student.h"

int main()
{
	Docent jop{ 15 };

	jop.m_naam = "Jop Kaaskop";
	jop.m_leeftijd = 38;

	jop.printDocent();

	Student kizzie{ 0.5 };

	kizzie.m_naam = "Kizzie Kazobo";
	kizzie.m_leeftijd = 19;

	kizzie.printStudent();
}
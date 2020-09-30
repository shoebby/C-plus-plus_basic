#pragma once
#include <string>

class Persoon {      
public:
    int m_leeftijd;
    std::string m_naam;

    Persoon(std::string naam = "", int leeftijd = 0)
        : m_naam{naam}, m_leeftijd{leeftijd}
    {
    }

    std::string getName() {
        return m_naam;
    }

    int getAge() {
        return m_leeftijd;
    }
};
#pragma once
#include "persoon.h"

class Student : public Persoon {
public:
    float m_alcoholgehalte;

    Student(float alcoholgehalte = 0.0)
        : m_alcoholgehalte{alcoholgehalte}
    {
    }

    float getAlcLevel() {
        return m_alcoholgehalte;
    }

    void printStudent() const
    {
        std::cout << "STUDENT - " << m_naam << " - " << m_leeftijd << " jaar - " << m_alcoholgehalte << " promille alcohol" << '\n';
    }
};

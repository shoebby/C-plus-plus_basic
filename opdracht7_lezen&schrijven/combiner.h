#pragma once
#include <fstream>
#include <string>

class Combiner
{
public:
    int switch1 = true;
    int switch2 = false;
    std::string s;
    std::ifstream inFile;
    std::ifstream outFile;
	
	void Combine();
};
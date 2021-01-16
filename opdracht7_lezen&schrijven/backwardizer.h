#pragma once
#include <fstream>
#include <string>

class Backwardizer
{
public:
	std::string s;
	int combinerPart1 = 1;
	int combinerPart2 = 0;
	std::ifstream inFile;
	
	void Backwardize();
};
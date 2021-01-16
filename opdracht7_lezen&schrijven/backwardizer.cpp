#include <algorithm>
#include "backwardizer.h"

void Backwardizer::Backwardize() {

    std::ofstream outFile("D:/C++ Basic/opdracht7/jabberwockyFileReversed.txt");

    inFile.open("D:/C++ Basic/opdracht7/jabberwockyFile.txt");

    while (getline(inFile, s)) {

        std::reverse(s.begin(), s.end()); //ik weet niet helemaal zeker of dit nou mocht, maar ik heb de reverse functie uit de algorithm library gebruikt om de lines te reversen
        outFile << s << std::endl;
    }
    outFile.close();
}
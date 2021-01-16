#include "combiner.h"

void Combiner::Combine() {

    std::ofstream outFileCombined("D:/C++ Basic/opdracht7/jabberwockyFileCombined.txt");

    inFile.open("D:/C++ Basic/opdracht7/jabberwockyFile.txt");
    outFile.open("D:/C++ Basic/opdracht7/jabberwockyFileReversed.txt");

    while (getline(inFile, s)) {

        if (switch1 == true) { //dit is echt afschuwelijk maar helaas de enige manier die ik kon bedenken
            outFileCombined << s << std::endl;
            switch1 = false;
        }
        else {
            switch1 = true;
        }

        if (switch2 == true) { //ik heb geprobeerd deze in een functie te zetten om herhaling te voorkomen, nadruk op geprobeerd
            getline(outFile, s);
            getline(outFile, s); //ik kon niks vinden over hoe ik op een andere manier een line kon overslaan, dus dan maar zo
            outFileCombined << s << std::endl;
            switch2 = false;
        }
        else {
            switch2 = true;
        }
    }
    outFileCombined.close();
}
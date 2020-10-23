#include <iostream>
#include <fstream>

int main()
{   
    std::ifstream in_stream;

    in_stream.open("D:/C++ Basic/opdracht7/testDoc.txt");

    if (!in_stream) {
        std::cout << "Probleem bij openen file" << std::endl;
        exit(1);
    }
    else {
        std::cout << "File found" << std::endl;
    }
}
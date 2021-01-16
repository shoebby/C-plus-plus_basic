#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "combiner.h"
#include "backwardizer.h"

int main()
{
    Backwardizer backwardizer_obj;
    Combiner combiner_obj;

    backwardizer_obj.Backwardize();
    combiner_obj.Combine();
}
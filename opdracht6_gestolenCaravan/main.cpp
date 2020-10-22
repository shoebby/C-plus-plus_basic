#include <iostream>
#include "sok.h"
#include "koffer.h"
#include "caravan.h"

int main() {
    {
        Caravan* caravanObj = new Caravan("blauw");

        caravanObj->vulCaravan("groen", "rood");
        caravanObj->toonCaravanInhoud();

        delete caravanObj;

        caravanObj = new Caravan("blauw");
        caravanObj->toonCaravanInhoud();
    }

    return 0;
}
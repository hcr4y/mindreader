#include "Tracker.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

Tracker:: Tracker(){

    numHeads = 0;
    numTails = 0;

}

int Tracker:: getnumHeads(){

    return numHeads;

}

void Tracker:: setnumHeads(){

    numHeads++;

}

int Tracker:: getnumTails(){

    return numTails;

}

void Tracker:: setnumTails(){

    numTails++;

}


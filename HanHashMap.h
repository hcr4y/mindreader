#include "Tracker.h"
#include <iostream>
#include <list>
#include <string>
#include <utility>

using namespace std;

class HanHashMap{

    private: 

        int computeHash(string str);
        static const int SIZE = 60331;
        Tracker myHash[SIZE];

    public:

        HanHashMap();
        void add(string str, char pick);
        char check(string str);
        char predict(string str);


};
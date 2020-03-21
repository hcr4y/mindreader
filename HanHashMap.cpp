#include "HanHashMap.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

HanHashMap:: HanHashMap(){
    for (int i = 0; i < SIZE; i++){
        myHash[i] = Tracker();
    }


}

int HanHashMap:: computeHash(string str){

    int hash = 0;

    for (int i = 0; i < str.length(); i++){

        hash += str[i];

    }

    return ((hash/(str.length())) % SIZE);

}

void HanHashMap:: add(string str, char pick){

    int hash = computeHash(str);
    
    if (pick == 'h'){

        myHash[hash].setnumHeads();

    }

    else {

        myHash[hash].setnumTails();

    }

}

char HanHashMap:: check(string str){

    int hash = computeHash(str);

    if (myHash[hash].getnumHeads() == 0 && myHash[hash].getnumTails() == 0){

        return ' ';

    }

    else {

        if (myHash[hash].getnumHeads() > myHash[hash].getnumTails()){

            return 'h';

        }

        else if (myHash[hash].getnumHeads() < myHash[hash].getnumTails()){

            return 't';

        }

        else {

            srand(time(NULL));
            int rnd = rand() % 2;

            if (rnd == 0) {

                return 'h';

            }

            else {

                return 't';

            }

        }

        

    }

   
    
}



char HanHashMap:: predict(string str){

string newStr = str;

for (int i = str.length(); i > 0 ; i--) {

    char predik = check(newStr);

    if (predik != ' ') { 

        return predik;

    }

    newStr = newStr.substr(1);

}

srand(time(NULL));
int rnd = rand() % 2;

if (rnd == 0) {

    return 'h';

}

else {

    return 't';

}


}
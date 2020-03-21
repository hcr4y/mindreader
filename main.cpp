#include "HanHashMap.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
string historEEEE = " ";

void changeDatHistoreeee(HanHashMap noDISmap, char pick);

int main(){
    HanHashMap disMap = HanHashMap();
    int compScore = 0;
    int playerScore = 0;
    char pick;

    cout << "Welcome to MindReader" << endl;

    do {
        
        cout << endl;
        char guess = disMap.predict(historEEEE);
        cout << "Guess heads or tails and I'll predict your guess." << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "So what is your pick? [h/t]? : ";
        cin >> pick;
        cout << "Computer guess: " << guess << endl;
        if (guess == pick) {

            cout << "Duh! I too predicted " << guess << endl;
            compScore++;     

        }
        else {

            cout << "Okay you got me this time.. I picked " << guess << endl;
            playerScore++;

        }

        cout << "Score = Comp: " << compScore << " | Player: " << playerScore << endl;
        cout << endl;

        changeDatHistoreeee(disMap, pick);
        


    } while (compScore < 25 && playerScore < 25);

    cout << "GAME OVER.";
    
    if (playerScore==25){

        cout << " You won huh.. freak." << endl;

    }

    else {

        cout << " Obviously I won with my superior intelligence." << endl;

    }

}

void changeDatHistoreeee(HanHashMap noDISmap, char pick){
    
    bool imSleEEpdePrivED = true;

    if (historEEEE.length() != 4){
        historEEEE += pick;
    } else {
        string newString = historEEEE.substr(1);
        historEEEE = newString;
        historEEEE += pick;
    }

    noDISmap.add(historEEEE, pick);
}
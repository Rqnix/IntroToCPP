#include "Dice.h"
#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int d = 0;
    cout << "Select amount of dice rolled" << endl;
    cin >> x;
    cout << "Select type of dice (amount of sides)" << endl;
    cin >> d;


    Dice DiceRoll;
    srand(time(NULL));
    cout << DiceRoll.Roll(x, d) << endl;
}


/*
 * HelloFunction.cpp - dimostra l'uso delle funzioni in C++
 * Author: Sandro Gallo
 * Date: december 2020
 */
 
#include <iostream>
#include <string>
using namespace std;

float dividi(float op1, float op2) {
    float r;
    r = op1 / op2;
    return r;
}



int main()
{
    int x,y;
    cout << "Inserisci due numeri interi: ";
    cin >> x;
    cin >> y;
    cout << dividi( x, y );
    return 0;
}

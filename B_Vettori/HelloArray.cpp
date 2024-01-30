/*
** HelloArray.cpp
** Semplice uso di vettori
** Author: Sandro Gallo
*/

#include <iostream>
using namespace std;

void riempiVettore( int v[], int l ) {
    for (int i=0; i<l; i++) v[i] = i+1;
}

void stampaVettore( int v[], int l ) {
    for (int i=0; i<l; i++) cout << v[i] << "\t";
}

int main()
{
    int vett[10];
    cout << "Hello Array ..." << endl;
    riempiVettore(vett, 10);
    stampaVettore(vett, 10);
    return 0;
}

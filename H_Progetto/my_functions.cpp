/*
** my_functions.cpp
** Raccolta di funzioni di utilità
** Author: Sandro Gallo
*/

#include <string>
#include <iostream>
#include "my_functions.h"
using namespace std;

/* ------------------------------------------------------------------------- */
void my_PrintHelloWorld(int times) {
    string saluto = "Hello World!";
    for(int i=0; i<times; i++) {
        cout << i+1 << ") " << saluto << endl;
    }
}

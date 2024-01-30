/*
** main.cpp
** Esempio di programma C++ che chiama anche delle funzioni esterne
** Author: Sandro Gallo
*/

#include <string>
#include <iostream>
#include "my_functions.h"
using namespace std;

/* ------------------------------------------------------------------------- */
int main()
{

    cout << "Starting program from main function ..." << endl;

    my_PrintHelloWorld(3);
    cout << "\t** intermediate message from main function **" << endl;
    my_PrintHelloWorld(5);

    cout << "... ending program!" << endl;
    return 0;
}

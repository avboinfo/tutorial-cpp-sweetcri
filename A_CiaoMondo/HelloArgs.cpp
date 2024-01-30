/*
** HelloArgs.cpp
** Programma che visualizza gli argomenti passati sulla linea comandi
** Author: Sandro Gallo
*/

#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
  for (int i=0; i<argc; i++) {
    cout <<  argv[i] << endl;
  }
  return 0;
}

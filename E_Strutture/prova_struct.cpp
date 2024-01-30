/*
** prova_struct.cpp
** Author: IAV 3CIN
** 28/02/2021
*/

#include <iostream>
using namespace std;

/* Il tipo di dato "struct" serve per memorizzare dati di tipi uguali o diversi
** nella stessa struttura, per poter accedere a ciascuno dei membri 
** attraverso il nome unico della struttura.
*/

struct numeri
{
    int val_uno;
    float val_due;
};


int main()
{
  struct numeri n;
  n.val_uno = 100;
  cout <<  "1) n.val_uno = " << n.val_uno << " - " << "n.val_due = " << n.val_due << endl;
  n.val_due = 33.33;
  cout <<  "2) n.val_uno = " << n.val_uno << " - " << "n.val_due = " << n.val_due << endl;
  return 0;
}

#include <iostream>
#include <string>
#include "Coda.cpp"

using namespace std;


int main(){
    Coda c = Coda(1000);
    
    c.stampa();
    c.enter(100);
    c.enter(120);
    c.enter(85);
    c.exit();
    c.enter(225);
    c.stampa();
}
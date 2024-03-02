/*
** Bicicletta.cpp
*/

#include <iostream>
using namespace std;

class Bicicletta {
  public:
    int raggio;
    string colore;
    Bicicletta() {
        raggio=10;
        colore="bianco";
    }
    Bicicletta( int r, string c ) {
        raggio=r;
        colore=c;
    }
    void presentati() {
        cout << "Buongiorno, sono una bici di colore " << colore << " e con le ruote " << raggio << "!" << endl;
    }
};

int main()
{
    Bicicletta x;
    x.presentati();
    Bicicletta y(12,"rosso");
    y.presentati();
    
    

    return 0;
}

/**
 * BattleShip.cpp 
 * Dolce Davide - 20/04/2024
*/

#include <iostream>
#include "BattleField.cpp"
using namespace std;

class BattleShip{
    
    BattelField mappa;
    BattelField campo;
    
    public: 
     BattleShip(){

        mappa = BattelField(VOID);
        campo = BattelField(VOID);

        campo.placeHorizontalShip(3);
        campo.placeVerticalShip(4);
        campo.placeVerticalShip(2);
        campo.placeHorizontalShip(5);
    }
    
    void play(){
    
    //lancia 20 bombe a caso
    for(int i=0;i<20;i++){
        int x = rand()%DIM;
        int y = rand()%DIM;
        if (campo.get(x,y)==HIT) continue;
        if (campo.get(x,y)==SHIP) {
            mappa.put(x,y,HIT);
            campo.put(x,y,HIT);

        } else mappa.put(x,y,MISS);
    
    }
    mappa.stampa();
    
    ask();

    campo.stampa();
    }

    void ask() {
        cout<< "inserisci le coordinate di riga e colonna in cui sganciare la bomba: "<<endl;
        int x, y;
        cout<< "x: ";
        cin >> x;
        cout<< "y: ";
        cin >> y;

        if(campo.get(x,y)==SHIP){
            mappa.put(x,y,HIT);
            campo.put(x,y,HIT);

        }else mappa.put(x,y,MISS);
    }


};
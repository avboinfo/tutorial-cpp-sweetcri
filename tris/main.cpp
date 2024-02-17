/*
se dentro griglia c'è ZERO ==> cella vuota
se dentro griglia c'è UNO stiamo parlando di una x (giocatore 1)
se in griglia c'è DUE stiamo parlando di un CERCHIO (giocatore 2)
*/



#include <iostream>

using namespace std;

class Tris{
    public:
        int griglia[3][3];

    
    void reset_tabella(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                griglia[i][j] = 0;
            }
        }
    }

    void stampa_griglia(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<griglia[i][j]<<"\t";
            }
            cout<<endl;
        }
    }

    bool giocatore_1(int x, int y){
        if(x > 2 || x < 0){
            return false;
        }
        
        if(y > 2 || y < 0){
            return false;
        }

        if(griglia[x][y] == 1 || griglia[x][y] == 2){
            return false;
        }

        griglia[x][y] = 1;

        return true;


    }

    bool giocatore_2(int x, int y){
        if(x > 2 || x < 0){
            return false;
        }
        
        if(y > 2 || y < 0){
            return false;
        }

        if(griglia[x][y] == 1 || griglia[x][y] == 2){
            return false;
        }

        griglia[x][y] = 2;

        return true;

    }
        
};



 
int main()
{
    Tris myTris;

    myTris.reset_tabella();

    cout<<"stato iniziale"<<endl;
    myTris.stampa_griglia();

    int x,y;
    //int cont;
    bool mossa_valida;

    //while(cont>4){
        do{
            cout<<"mossa del giocatore 1."<<endl;
        cout<<"x: ";
        cin>>x;

        cout<<"y: ";
        cin>>y;

        mossa_valida = myTris.giocatore_1(x, y);
        myTris.stampa_griglia();
        
        cout<<"mossa del giocatore 2."<<endl;
        cout<<"x: ";
        cin>>x;

        cout<<"y: ";
        cin>>y;

        mossa_valida=myTris.giocatore_2(x,y);
        myTris.stampa_griglia();
        } while(!mossa_valida);
        //cont++;
    //}

    //myTris.stampa_griglia();


    return 0;
}

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

    int controlla_vincitore(){
        int risultato;
        for(int i=0;i<3;i++){
            risultato = controlla_colonna(i);
            if(risultato != 0)
                return risultato;
            
            risultato = controlla_riga(i);
            if(risultato != 0)
                return risultato;
        }
        
    }

private:
    int controlla_colonna(int col){
        int acc_1 = 0;
        int acc_2 = 0;
        for(int i=0;i<3;i++){
            int cella = griglia[i][col];
            if (cella == 1)
                acc_1++;
            else if(cella==2)
                acc_2++;
            
        } 
        if(acc_1 == 3)
            return 1;
        if(acc_2==3)
            return 1;

        return 0;  
    }

    int controlla_riga(int riga){
        int acc_1 = 0;
        int acc_2 = 0;
        for(int i=0;i<3;i++){
            int cella = griglia[riga][i];
            if (cella == 1)
                acc_1++;
            else if(cella==2)
                acc_2++;
            
        } 
        if(acc_1 == 3)
            return 1;
        if(acc_2==3)
            return 1;

        return 0;
    }
    
    //int controlla_diagolani(){
        
    //}
};



 
int main()
{
    Tris myTris;

    myTris.reset_tabella();

    cout<<"stato iniziale"<<endl;
    myTris.stampa_griglia();
    int mosse_totali=0;

    int x,y;
    bool mossa_valida;
    int vincitore = 0;

    while(mosse_totali<9){
        do{
            cout<<"mossa del giocatore 1."<<endl;
        cout<<"x: ";
        cin>>x;

        cout<<"y: ";
        cin>>y;

        mossa_valida = myTris.giocatore_1(x, y);
        myTris.stampa_griglia();
        } while(!mossa_valida);
        
        vincitore = myTris.controlla_vincitore();
        if (vincitore != 0)
            break;
        
        do{
        cout<<"mossa del giocatore 2."<<endl;
        cout<<"x: ";
        cin>>x;

        cout<<"y: ";
        cin>>y;

        mossa_valida=myTris.giocatore_2(x,y);
        } while(!mossa_valida);

        myTris.stampa_griglia();

        vincitore =myTris.controlla_vincitore();
        if (vincitore != 0)
            break;

        mosse_totali++;
        
    }
    if(vincitore==1){
        cout<<"vince giocatore 1"<<endl;
    }
    else if(vincitore==2){
        cout<<"vince giocatore 2"<<endl;
    }
    else
        cout<<"pareggio"<<endl;

    return 0;
}

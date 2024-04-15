/*
matrici come tipo di variabile
*/

#include <iostream>
#include <time.h>

const int DIM = 10;

using namespace std;


class Matrice {
    private:
        int m[DIM][DIM];

    public:
        Matrice(){
            for(int i=0;i<DIM;i++){
                for(int j=0;j<DIM;j++){
                    m[i][j] =97 + rand()%26;
                }
            }
        }

        Matrice(char c){
            for(int i=0;i<DIM;i++){
                for(int j=0;j<DIM;j++){
                    m[i][j] = c;
                }
            }
        }

        char get(int x, int y){
            return m[x][y];
        }
        void put(int x,int y, char c){
            m[x][y]=c;
        }

        void stampa() {
            cout<<"--------------------------------------------------------------------------"<<endl;
            for(int i=0;i<DIM;i++){

                for(int j=0;j<DIM;j++){
                    printf("%3c", m[i][j]);
                    //cout<<m[i][j]<<"\t";
                }
            cout<<endl;
            }
            cout<<endl;cout<<"--------------------------------------------------------------------------"<<endl;

        }

        void bomb(){
            int x = rand()%DIM;
            int y = rand()%DIM;
            m[x][y]='*';
        }

        void placeVerticalShip(int len){
            if(len<=0 || len >=DIM) return;
            int x = rand()%DIM;
            int y = rand()%(DIM-len);
            for(int i=0;i<len;i++){
                m[x][y+i] = 'O';
            }
        }

        void placeHorizontalShip(int len){
            if(len<=0 || len >=DIM) return;
            int x = rand()%DIM;
            int y = rand()%(DIM-len);
            for(int i=0;i<len;i++){
                m[x+i][y] = 'O';
            }
        }
};


int main(){
    srand(time(NULL));
    Matrice mappa = Matrice('-');
    Matrice campo = Matrice('-');
    //Matrice m2 = Matrice();
    campo.placeHorizontalShip(3);
    campo.placeVerticalShip(4);
    campo.placeVerticalShip(2);
    campo.placeHorizontalShip(5);
    mappa.stampa();
    campo.stampa();
    
    //lancia 20 bombe a caso
    for(int i=0;i<20;i++){
        int x = rand()%DIM;
        int y = rand()%DIM;
        if (campo.get(x,y)=='O') mappa.put(x,y,'*');
    }
    mappa.stampa();
}
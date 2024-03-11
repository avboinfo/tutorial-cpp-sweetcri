#include <iostream>
using namespace std;

class Pila
{

protected:  //Modificatore di visibilità. 
    int dim, len, delta;

public: 
        int * v;

public:
    Pila(int d, int delta)
    {
        this -> dim = dim;
        this -> delta = delta;

        dim = d;
        delta = 10;
        len = 0;
        v = new int[dim];
    }

    void push(int n)
    {
        if (len == dim)
        {

            int * nuovoV = new int[dim + delta];

            for (int i = 0; i < dim; i++)
                nuovoV[i] = v[i];

            dim += delta;
            delete[] v;
            v = nuovoV;    
        }

        v[len] = n;
        len++;
    }

    int pop(){
        if(len==0){ cout<<"\nERRORE pila vuota\n"; return 0;}

        return v[--len];
    }

    int getElement ( int index )
    {
        return v[index];
    }

    void setElement ( int index, int newValue )
    {
        v[index] = newValue;
    }

    void print()
    {

        cout << "\nContenuto del Vettore: ";

        for (int i = 0; i < len; i++)
        {
            cout << v[i] << " ";
        }

        cout << endl;
    }
};

int main(int argc, char *argv[])
{
    Pila vett(10, 10);

    for (int i = 0; i < 100; i++) vett.push(i);
        
    cout << vett.getElement(10) << endl;
    vett.setElement ( 10, 333);
    vett.print();

    cout<<endl<<endl;

    for(int i=0;i<10;i++){
        cout<<vett.pop()<<" ";
    }
    vett.print();
    return 0;        
}
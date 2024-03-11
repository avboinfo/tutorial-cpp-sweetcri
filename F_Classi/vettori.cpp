#include <iostream>

using namespace std;

class vettore {

    protected:

    int dim, len, delta;
    int * v;
    
    public:
    
    vettore(int d){
        dim = d;
        delta = 10;
        len = 0;
        v = new int[dim];
    }

    void add(int n){
        if (len==dim){ 
            int * nuovov = new int[dim+delta];
            for(int i =0;i<dim; i++) nuovov[i] = v[i];
            dim+=delta;
            v = nuovov;
        }
        v[len] = n;
        len++;
    }

    int getElement (int index){
        return v[index];
    }

    void setElement(int index, int newvalue){
        v[index] = newvalue;
    }

    void print(){
        cout<<"contenuto del vettore: "<<endl;
        for(int i=0; i<len;i++){
            cout<< v[i]<<" ";
        }
        cout<<endl;
    }


};


int main() {
    vettore vett(10);

    for(int i=0;i<100;i++) vett.add(i);
    //vett.add(33);
    //vett.add(333);
    //vett.print();
    cout<< vett.getElement(10)<<endl;
    vett.setElement(10, 333);
    vett.print();

}
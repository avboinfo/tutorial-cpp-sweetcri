/*
** Vettore.cpp - definizione e uso di una classe Vettore
*/

#include <iostream>
#include <string>
using namespace std;

class Vettore {
    private:
        int l;
        string *data;
    public:
        Vettore(int lunghezza) {
            l = lunghezza;
            data = new string[l];
            for (int i=0; i<l; i++) data[i] = "";
        }
        int len() { return l; }
    string get(int i) { return data[i]; }
    void put(int i, string v) { data[i] = v; }

    int min();
//  int max();
};

int Vettore::min() {
    int min = 0;
    for (int i=0; i<len(); i++) {
        if (get(i)<get(min)) min=i;
    }
    return min;
}

int main()
{
    Vettore v(100), w(150);
    v.put(33, "Trentatre");
    w.put(144, "Quarantaquattro");
    printf("Hello World\n");
    cout << v.get(33) << endl;
    cout << v.get(11) << endl;
    cout << w.get(144) << endl;

    return 0;
}


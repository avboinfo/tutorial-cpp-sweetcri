/*
** Rettangolo.cpp
*/

#include <iostream>
using namespace std;

class Rettangolo {
    private: int lato_minore, lato_maggiore;
    public: Rettangolo(int lmin, int lmag) {
        lato_minore=lmin;
        lato_maggiore=lmag;
    }
    public: int getArea() { return lato_minore * lato_maggiore; }
    public: void presentati() { cout << "Sono un rettangolo di area " << getArea() << " - " << lato_minore << " x " << lato_maggiore << endl; }
};

int main()
{
    Rettangolo r1(10,15);
    Rettangolo r2(20,32);
    r1.presentati();
    r2.presentati();
    return 0;
}

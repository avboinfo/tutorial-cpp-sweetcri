/*
** Sorter.cpp
*/

#include <iostream>
using namespace std;

class Sorter {

  private:
    void saluta() {
        cout << "Buongiorno, sono uno molto ordinato!" << endl;
    }

  public:
    Sorter() {
        saluta();
    }

    void randomFill(int v[], int l) {
      for (int i=0; i<l; i++) {
        v[i] = rand() % 100 + 1;
      }
    }

    void print(int v[], int l) {
      for (int i=0; i<l; i++) {
        cout << v[i] << "\t";
      }
    }

};

int main()
{
    cout << "Inizio programma (main)." << endl;

    Sorter s;
    int *v = new int[100];
    s.randomFill(v, 100);
    s.print(v, 100);

    cout << endl << "Fine programma (main)." << endl;
    return 0;
}

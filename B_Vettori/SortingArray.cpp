/**************************************************
 legge da un file input un array di stringhe
 e crea un file di output con l'array ordinato
 Davide Dolce - 10/02/2024
*****************************************************/

#include <iostream>
#include <fstream>

using namespace std;

const string FILENAME = "SortingArray.txt";
int numeroScambi;

void stampaVettore(string v[], int l) {
    cout << endl;
    for (int i = 0; i < l; i++) {
        cout << v[i] << "\n";
    }
    cout << endl;
}

void swap(string arr[], int pos1, int pos2) {
    string temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

int bubbleSort(string v[], int l) {
    int numOp = 0;
    string tmp;
    for (int i = 0; i < l; i++) {
        bool alreadySorted = true;
        for (int j = 0; j < l - 1; j++) {
            if (v[j] > v[j + 1]) {
                alreadySorted = false;
                tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
                numOp++;
            }
        }
        if (alreadySorted)
            break;
    }
    return numOp;
}

int partition(string arr[], int low, int high, string pivot) {
    int i = low;
    int j = low;
    while (i <= high) {
        if (arr[i] > pivot) {
            i++;
        } else {
            swap(arr, i, j);
            i++;
            j++;
            numeroScambi++;
        }
    }
    return j - 1;
}

void quickSort(string arr[], int low, int high) {
    if (low < high) {
        string pivot = arr[high];
        int pos = partition(arr, low, high, pivot);

        quickSort(arr, low, pos - 1);
        quickSort(arr, pos + 1, high);
    }
}

int main() {
    ifstream f;
    f.open(FILENAME);
    if (f.fail()) {
        cout << "Il file di input non esiste";
        return -1;
    }

    int n = 0;
    string s;
    while (getline(f, s)) {
        n++;
    }
    f.close();
    cout << "il file di input contiene " << n << " righe";

    string *vs = new string[n]; 

    f.open(FILENAME);
    for (int i = 0; i < n; i++) {
        getline(f, vs[i]);
    }
    f.close();

    stampaVettore(vs, n);

    cout << "scegli l'algoritmo di ordinamento:\n";
    cout << "1. bubbleSort\n";
    cout << "2. quickSort\n";
    int choice;
    cin >> choice;

    if (choice == 1) {
        numeroScambi = bubbleSort(vs, n);
        cout << "eseguiti " << numeroScambi << " scambi.";
        stampaVettore(vs, n);
    } else if (choice == 2) {
        numeroScambi = 0;
        quickSort(vs, 0, n - 1);
        cout << "eseguiti " << numeroScambi << " scambi.";
        stampaVettore(vs, n);
    } else {
        cout << "scelta non valida";
    }


    return 0;
}


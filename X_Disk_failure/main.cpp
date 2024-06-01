#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long A, B, T;
    cin >> A >> B >> T;

    // insert your code here
     long long g_intero = T/24;
     long long upTime = B-A;
     long long left_over=upTime*g_intero;
     T=T-g_intero*24;
     T=T-(24-upTime);
     
     if(T<0) {
         
       T=0;
     }
     
    cout << T+left_over << endl; // print the result
    

    return 0;
}
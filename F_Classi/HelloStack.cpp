/*
** HelloStack.cpp
** Definizione ed uso di una classe Pila
** Author: Sandro Gallo
*/

#include <iostream>
using namespace std;

class Stack {
  int top, max;
  string * buffer;

  public:
  Stack() {
    top=0; max=100;
    buffer=new string[max];
  }
  bool isEmpty() { return top==0; }
  bool isFull() { return top==max; }
  void push( string element ) {
    if (isFull()) return;
    buffer[top++] = element;
  }
  string pop() {
    if (isEmpty()) return "";
    return buffer[--top];
  }
  Stack & operator<<(const string e) {push(e); return *this;}
};

int main()
{
  string s;
  Stack pila;
  while (true) {
    cout << "Inserire una frase (basta per terminare): ";
    getline(cin, s);
    if (s=="basta") break;
    pila.push(s);
  }
  while (!pila.isEmpty()) { cout << pila.pop() << endl; }

  pila << "ancona" << "bologna" << "como";
  while (!pila.isEmpty()) { cout << pila.pop() << endl; }

  return 0;
}

#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("multipli5.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
}
#include <iostream>
using namespace std;

void addOneReference(int &x) {
  x = x + 1;
}

void addOnePointer(int* x) {
  *x = (*x) + 1;
}

int main() {
  int a = 0;
  cout << "Antes: " << a << endl;
  addOneReference(a);
  //addOnePointer(&a);
  cout << "Depois: " << a << endl;

  return 0;
}

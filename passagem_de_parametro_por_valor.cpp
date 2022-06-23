#include <iostream>
using namespace std;

void addOneValue(int x) {
  x = x + 1;
}

int main() {
  int a = 0;
  cout << "Antes: " << a << endl;

  addOneValue(a);
  cout << "Depois: " << a << endl;

  return 0;
}

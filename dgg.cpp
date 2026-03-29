// a game using a function with return to double a number five times
#include <iostream>
using namespace std;

int doubleGame(int x) {
  return x * 2;
}

int main() {
  for (int i = 1; i <= 5; i++) {
    cout << "Double of " << i << " is " << doubleGame(i) << endl;
  }
  return 0;
}

#include <iostream>

using namespace std;

int main() {
  // Try changing these values to see what happens.
  bool condition = true;
  bool condition2 = false;
  
  if (condition) {
    cout << "The condition is true!" << endl;
  }
  else if (condition2) {
    cout << "The first condition is false, but the second one is true!" << endl;
  }
  else {
    cout << "The condition is false." << endl;
  }
  
  return 0;
}

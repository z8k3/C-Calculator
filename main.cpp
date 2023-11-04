#include <iostream>
using namespace std;

int main() {
  cout << "Multiply, divide, add, or subtract?" << endl;
  string choice;
  cin >> choice;
  double x;
  double y;
  cin >> x;
  cin >> y;
  if (choice == "multiply" || choice == "Multiply") {
    cout << x * y << endl;
  } else if (choice == "add" || choice == "Add") {
    cout << x + y << endl;
  } else if (choice == "divide" || choice == "Divide") {
    cout << x / y << endl;
  } else if (choice == "subtract" || choice == "Subtract") {
    cout << x - y << endl;
  }
  return 0;
}

#include <iostream>
using namespace std;
// cout << "\n";

// here is the logic functions
void sum(double &a, double &b, double &result) { result = a + b; };
void mul(double &a, double &b, double &result) { result = a * b; };
void div(double &a, double &b, double &result) { result = a / b; };
void sub(double &a, double &b, double &result) { result = a - b; };

// This function is for input taking from user
void input(double &a, double &b) {
  cout << "Please enter first number: ";
  cin >> a;
  cout << "Please enter second number: ";
  cin >> b;
}

int main() {
  // variables for storing number and result and operater.
  short op;
  double a, b, result;

  //  logic
  while (true) {
    cout << "Serial No List:\n1.Addition \n2.Multiplication \n3.Substraction \n4.Divisions \n5.Exit"<< endl;
    cout << "Please enter serial number for operation: ";
    cin >> op;
    cout << endl;
    if (op == 1) {
      input(a, b);
      sum(a, b, result);
      cout << "The result of sum is " << result << endl;
    } else if (op == 2) {
      input(a, b);
      mul(a, b, result);
      cout << "The result of mul is " << result << endl;
    } else if (op == 4) {
      input(a, b);
      div(a, b, result);
      cout << "The result of div is " << result << endl;
    } else if (op == 3) {
      input(a, b);
      sub(a, b, result);
      cout << "The result of sub is " << result << endl;
    } else if (op == 5) {
      cout << "Thank you for using." << endl;
      break;
    } else {
      cout << "Please enter a valid number from the list" << endl;
    }
  }
}

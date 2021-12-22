#include <iostream>

#include <string>

using namespace std;

int main() {
  string a;
  cin >> a;
  bool palindrome = true;
  int length = a.length() - 1;
  for (int i = 0; i <= length; i++) {
    if (a[i] != a[length - i]) {
      palindrome = false;
    }
  }
  if (palindrome) {
    cout << "yes";
  } else {
    cout << "no";
  }
}
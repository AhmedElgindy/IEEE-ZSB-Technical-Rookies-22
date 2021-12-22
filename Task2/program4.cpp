#include <iostream>

using namespace std;

int main() {
  int a[5] {
    1,
    3,
    4,
    3,
    1
  };
  int result = 0;
  int temp;
  for (int i = 0; i < 5; i++) {
    for (int z = i + 1; z < 5; z++) { // i+1 to make sure that the second loop is ahead of the main loop to get less iterates
      if (a[z] == a[i]) {
        temp = z - i;
      }
      if (temp < result) {
        result = temp;
      }
    }
  }
  cout << temp;
  //writen by Ahmed Alaa Elgindy ##

}
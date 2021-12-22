#include <iostream>

using namespace std;
void swap(int * a, int * b) {
  int temp = * b;
  b = a;
  * a = temp;
}
int main() {
  int a[7] = {
    19,
    3,
    47,
    2,
    6,
    8,
    4
  };
  for (int i = 0; i < 7; i++) {
    for (int z = i + 1; z < 7; z++) {
      if (a[i] > a[z]) {
        swap(a[i], a[z]);
      }
    }
  }

  for (int i = 0; i < 7; i++) {
    cout << a[i] << " ";
  }
  //writen by Ahmed Alaa Elgindy ##

}
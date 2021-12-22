#include <iostream>

#include <vector>

using namespace std;

int main() {
  vector < int > a = {
    1,
    1,
    1,
    1,
    2,
    2,
    2,
    2,
    3,
    3,
    3
  };
  int temp = 0;
  int counter = 0;
  while (counter < a.size()) {
    if (temp == a[counter]) {
      a.erase(a.begin() + counter);
      counter--;
    }
    if (a[counter] > temp) {
      temp = a[counter];
    }
    counter++;

  }
  for (auto i: a) {
    cout << i << " ";
  }
  ////o(N)
  //writen by Ahmed Alaa Elgindy ##
}
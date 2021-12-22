#include <iostream>
using namespace std;
int binary(int ar[],int length ,int x){
    int begin = 0 ; 
    int last = length;
    while(begin <= last){
    int mid = begin + (last - begin) / 2;
    if (ar[mid] == x) {
      return ar[mid];
    } else if (ar[mid] < x) {
      begin = mid + 1;
    } else {
      last = mid - 1;
    }
  }
  return -1;
    }
int main()
{ 
    //example
    int a[10] = {0,2,9,17,20,26,28,30,33,35};
    cout<<binary(a,10,33);
    }

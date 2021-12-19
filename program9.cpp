
#include <iostream>
#include <vector> // using vectors insted of array 
using namespace std;
void fib(int a ){
    vector <int> arr ;
    // adding first two numbers 
 arr.push_back(0);
  arr.push_back(1);
for(int i = 2; i < a ; i ++){
    arr.push_back(arr[i-1]+arr[i-2]);
}
for (int i: arr)
    cout << i << ' ';
}
int main()
{
    int i; 
    cin>>i;
    fib(i);
}

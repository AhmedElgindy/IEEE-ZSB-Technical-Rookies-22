
#include <iostream>

using namespace std;
int func1(int * ar){
    int size = sizeof(ar)/sizeof(ar[0]);
    int temp = 0;
    for(int i =0 ; i <= size ; i++){
        temp += ar[i];
    }
    return temp;
}
int func2(int * ar){
    int size = sizeof(ar)/sizeof(ar[0]);
    int temp = 0 ;
    while (size != -1 ){
        temp += ar[size];
        size --;
    }
    return temp;
}
int func3(int * ar, int N)
{
    if (N <= 0)
        return 0;
    return (func3(ar, N - 1) + ar[N - 1]);
}

int main()
{
    int n ; cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i ++){
        int z ; cin>>z;
        arr[i]=z;
    }
    cout<<func1(arr)<<endl;
    cout<<func2(arr)<<endl;
    cout<<func3(arr,n)<<endl;
}

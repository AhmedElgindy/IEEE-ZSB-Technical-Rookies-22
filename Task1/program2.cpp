
#include <iostream>

using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    cout<<"enter number more than 1"<<endl;
    int n;cin>>n;
    for(int i = 2; i <= n ;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}

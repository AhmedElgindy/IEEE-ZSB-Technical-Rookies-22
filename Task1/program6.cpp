#include <iostream>

using namespace std;

int main()
{
    int n ; cin>>n;
    int temp = 0;
    if(n>1){
        for(int i = 1 ; i <= n ; i ++){
            temp +=i;
        }
    }
    cout<<temp;
}

#include <iostream>

using namespace std;

int main()
{
    int n ; cin>>n;
    int temp = 0;
    if(n>1){
        for(int i = 1 ; i <= n ; i ++){
            if(i %3 == 0 || i %5 ==0){
                temp+=i;
            }
        }
    }
    cout<<temp;
}

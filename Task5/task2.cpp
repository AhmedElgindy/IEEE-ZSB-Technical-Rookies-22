
#include <iostream>

using namespace std;

int main()
{
    int const a = 86400;
    cout<<"how much time you need for the book"<<endl;
    int b;cin>>b;
    cout<<"how many days you have"<<endl;
    int d;cin>>d;
    int ar[d];
    for(int i =0;i<d;i++){
        int t;cin>>t;
        ar[i] = a-t;
    }
    int counter = 0;
    while(b > 0){
        b -= ar[counter];
        counter++;
    }
    cout<<counter<<" days"<<endl;
}

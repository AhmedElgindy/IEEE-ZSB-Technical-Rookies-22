#include <iostream>
#include <math.h>
using namespace std;
int main() {
    cout<<"input: "<<endl;
    string in;cin>>in;
    int n;cin>>n;
    double counter=0.00;
    for(int i =0;i<=in.length();i++){
        if(in[i]=='r'){
            counter++;
        }
    }
    double pre = counter / in.length();
    cout<<round(n*pre);
}
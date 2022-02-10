#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    cout<<"enter the size of list"<<endl;
    int list;cin>>list;
    //adding the element 
    for(int i = 0;i<list;i++){
        int n; cin>>n;
        a.push_back(n);
    }
    // I made this value bigger than any possible differnce in the list
    int dif = list ;
    for(int i = 0 ; i < list;i++){
        for(int z = i+1;z<list;z++){
            if(a[i] == a[z]){
                if(dif > z - i){
                    dif = z - i;
                }
            }
        }
    }
    if(dif < list ){
        cout<<dif;
    }
    else{
        cout<<"there isn't similar number in the list";
    }
}

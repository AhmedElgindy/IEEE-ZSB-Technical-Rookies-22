#include <iostream>
#include <vector>
using namespace std;

class bottel{
    public:
        int volume;
        int capacity;
};
int main()
{
    vector <bottel> base;
    int n;cin>>n;
    int totalv = 0 ;
    for(int i = 0 ; i < n ;i++){
        int volume;int capacity;cin>>volume;cin>>capacity;
        totalv += volume ;
        bottel b;
        b.volume = volume;
        b.capacity =capacity;
        base.push_back(b);
    }
    //finding the largest 2 capacities
    int large1 = base[0].capacity;
    int large2 = base[1].capacity;
    for(int i =2;i<n;i++){
        if(base[i].capacity>large1){
            large2 = large1;
            large1 = base[i].capacity;
        }
        else if (base[i].capacity > large2 )
        {
            large2 = base[i].capacity;
        }
    }
    if(((large2+large1) - totalv) >= 0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
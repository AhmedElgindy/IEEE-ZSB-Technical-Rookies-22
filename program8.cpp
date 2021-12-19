
#include <iostream>
#include <vector> // using vectors insted of array 
using namespace std;


int main()
{
    srand(time(0));  // Initialize random number generator
    int random_integer = 0 + rand() % 10;
    bool guess = true;
    int counter = 0 ;
    while(guess){
        int i ; cin>>i;
        if(i == random_integer){
            cout<<"yay you got it "<<counter<<" tries";
            guess = false;
        }
        else{
            counter ++;
            cout<<"wrong guess"<<endl;
        }
    }

}

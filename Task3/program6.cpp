
#include <iostream>

using namespace std;
int MaxNum(int num)
{
    int count[10] = {0}; //represent the numbers from 0 to 9
    string str = to_string(num);

    for (int i=0; i<str.length(); i++){
        count[str[i]-'0']++;
    }
    int result = 0, multiplier = 1;
    for (int i = 0; i <= 9; i++)
    {
        while (count[i] > 0)
        {
            result += (i * multiplier);
            count[i]--;
            multiplier = multiplier * 10;
        }
    }
    return result;
}
int MinNum(int maxnum){
    //here I am going to reverse the max number to get the min number
    int reversedNumber = 0;
    int remainder;
    while(maxnum != 0) {
        remainder = maxnum%10;
        reversedNumber = reversedNumber*10 + remainder;
        maxnum /= 10;
    }
    return reversedNumber;
}
int main()
{
    int count = 0 ;
    int n;cin>>n;
    while(n != 6174){
        int max = MaxNum(n);
        int min = MinNum(max);
        n = max - min;
        if(n < 1000){ //condtion if n < 4 digit 
            n *=10;
        }
        count++;
    }
    cout<<count;
}

#include <bits/stdc++.h>
#include<string>
#include <math.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(int p, int q) {
    bool empty = true;
    while(p<=q){
        long int po = pow(p,2);
        string str = to_string(po);
        if(p==1){
            cout<<p<<" ";
        }
        if(str.length()>1){
        string first = str.substr(0,str.length()/2);
        string scond = str.substr(str.length()/2,str.length());
        int firstn = stoi(first);
        int scondn = stoi(scond);
        if(firstn + scondn == p){
            cout<<p<<" ";
            empty = false;
        }
        }
        p++;
    }
    if(empty){
        cout<<"INVALID RANGE";
    }
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

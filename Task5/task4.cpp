#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



void remove(vector<int> &v)
{
    vector<int>::iterator itr = v.begin();
    unordered_set<int> s;
    for (auto curr = v.begin(); curr != v.end(); ++curr)
    {
        if (s.insert(*curr).second) {
            *itr++ = *curr;
        }
    }
    v.erase(itr, v.end());
}
int beautifulTriplets(int d, vector<int> arr) {
    bool first =false ,second = false;
    int counter;
    remove(arr); //remove the duplcaited values
    for(int i = 0;i<arr.size();i++){
        for(int z = i;z< arr.size();z++){
            if(arr[z] == arr[i]+d){
                first = true;
            }
            if(arr[z] == arr[i]+d*2){
                second = true;
            }
        }
        if(first && second){
            counter++;
            first = false;
            second = false;
        }
    }
    return counter;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int d = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = beautifulTriplets(d, arr);

    fout << result << "\n";

    fout.close();

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

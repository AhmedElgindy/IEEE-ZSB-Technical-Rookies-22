#include <iostream>
using namespace std;
int main()
{
  string sentence;
  cout << "Enter the sentence now." << endl;
    getline(cin, sentence);
    int temp = 0;int temp1 = 0;
    for(int i = 0; i <= sentence.length(); i++)// the calculate the width
  {
    if(sentence[i] == ' ' || i == sentence.length())
    {
        if(temp > temp1){
            temp1 = temp;
        }
        temp = 0 ;
    }
    temp++;
  }
  string line(temp1+2, '*');
  cout<<line<<endl;
  int counter = 0 ;
  for(int i = 0; i <= sentence.length();i++){
      if(counter == 0 ){
          cout<<'*';
      }
      if(sentence[i]==' '){
        while(counter < temp1){
            cout<<" ";
            counter++;
        }
        cout<<'*';
        cout<<endl;
      }
      
      else{
          cout<<sentence[i];
      }
      
    counter++;
    if(counter == temp1+1){
          counter = 0;
      }
      if(i == sentence.length()){
          while(counter <= temp1){
            cout<<" ";
            counter++;
        }
        cout<<'*';
        cout<<endl;
      } 
  }
  cout<<line<<endl;
  }

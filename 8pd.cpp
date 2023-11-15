#include<iostream>
#include<string>
using namespace std;
string keys(string correct , string written){
    int n = correct.length();
   for(int i = 0; i < n ; i++){
    if(correct[i] != written[i]){
        if(correct[i] == correct[i+1]){
            continue;
        }
        cout<< correct[i];
    }
   }
}
main(){
    string correct;
    string written;
    cout<<"Enter the correct phrase: ";
    getline(cin,correct);
    cout<<"Enter what you actually typed: ";
    getline(cin,written);
    cout<<"Broken keys are: ";
    keys(correct,written);
}
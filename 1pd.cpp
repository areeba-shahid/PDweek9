#include<iostream>
#include<string>
using namespace std;
string iseven(string n){

int m = n.length();
if(m % 2  == 0){
    return "true";
}
 
return "false";

}
main(){
    
string n;
cout<<"Enter a string: ";
cin>>n;
cout<<iseven(n);




}
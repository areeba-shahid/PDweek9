#include<iostream>
#include<string>
using namespace std;
int same(string arr1 ,string arr2 ){
int n = arr1.length();
int m = arr2.length();
int count = 0 ;
int  freq1[26] = {0};
int freq2[26]= {0};
for(int i = 0 ; i < n  ; i++){
  freq1[arr1[i] - 'a']++;
 
}
for(int j = 0 ; j < m ; j++){
freq2[arr2[j] - 'a']++;
}
int c = 0;
for(int k = 0 ; k < 26 ; k++){
     c = c +  min(freq1[k] , freq2[k]);
}
return c;
}
main(){

string arr1;
string arr2;
cout<<"Enter the first string: ";
cin>>arr1;
cout<<"Enter the second string: ";
cin>>arr2;
cout<<"Number of common characters: ";
cout<<same(arr1 , arr2);



}
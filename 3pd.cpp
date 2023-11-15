#include<iostream>
using namespace std;
bool same(int n , char arr[]){
for(int i =  0 ; i < n ; i++){
if(arr[i] == arr[i + 1]){
    return true;
}
}
return false;






}





main(){
int n ;
cout<<"Enter the size of array: ";
cin>>n;
char arr[n];
for(int i = 0 ; i < n ; i++){
    cout<<"Enter element "<<i+1<<": ";
cin>>arr[i];
}
cout<<same(n , arr);



}
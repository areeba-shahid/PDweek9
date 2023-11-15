#include<iostream>
#include<string>
using namespace std;
string boom(int n , int arr[]){
for(int i = 0 ; i < n ; i++){
while(arr[i] != 0){
if(arr[i] % 10 == 7){
    return "Boom!";
  arr[i] = arr[i] / 10;  
}

}

}

return "There is no 7 in the array";
}

main(){
int n ;
cout<<"Enter the size of array: ";
cin>>n;
int arr[n];
for(int i = 0 ; i < n ; i++){
cout<<"Enter element "<<i+1 <<": ";
cin>>arr[n];

}
cout<<boom(n , arr);

}
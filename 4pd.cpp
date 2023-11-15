#include<iostream>
using namespace std;
int transform(int size , int arr[] , int no){
    cout<<"[";
for(int i = 0 ; i < size; i++){
    for(int j = 0 ; j < no  ; j++ ){
    
 if(arr[i] % 2  == 0 ){
    arr[i] = arr[i ] - 2;}
    else if (arr[i] % 2 == 1){
        arr[i] = arr[i] + 2;}
 
    }
     cout<<arr[i];
 if(i < size-1  ){cout<<" ;";}
 if(i == size - 1){cout<<"]";}
 }

}






main(){

    int size ;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cout<<"Enter element "<<i+1<<": " ;
        cin>>arr[i];
    }
    int no;
    cout<<"Enter the number of times even-odd transform need to be done: ";
    cin>>no;
    transform(size , arr , no);
    
}

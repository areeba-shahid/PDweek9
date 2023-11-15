#include<iostream>
#include<string>
using namespace std;
int colors(int n , string color[]){
    int c = 0;
     c = n * 2;

for(int i = 0 ; i < n ; i++){
if(color[i] != color[i+1]){
 c++;
}

}
return c - 1 ;
}




main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    string color[n];
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>color[i];
    }
    cout<<"Time to colour: ";
    cout<<colors(n , color)<<" seconds";
}
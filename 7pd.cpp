#include<iostream>
#include<string>
using namespace std;
 void danceMoves(string pin ){
string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
"Pop", "Lock", "Arabesque"};
int c = 0;
    

for(int i = 0 ; i < 4 ; i++){
  
  int c =  pin[i] - '0';
  if(i == 3){cout<<moves[(c+i) % 10 ];}
  if(i < 3){cout<<  moves[(c + i )% 10] <<", "; }
} 

}
 
main(){
    int n ;  
string   pin;
cout<<"Enter your pin (4 digits): ";
cin>>pin;
if(pin.length() != 4 ){
cout<<"Invalid input";}
else 
for(int i = 0 ; i < 4 ; i++){
    if(pin[i] != '0'&& pin[i] !='1' && pin[i] != '2' && pin[i] !='3' && pin[i] != '4' && pin[i] != '5' && pin[i] !='6' && pin[i] !='7'&& pin[i] !='8'&& pin[i] !='9'){
    cout<<"Invalid input";
   break;
    }
}
danceMoves( pin );
}


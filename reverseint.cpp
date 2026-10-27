#include<iostream>
using namespace std;
int revNum(int n){
   int revnum = 0;
   while(n>0){
    int digit = n %10 ;
    revnum=revnum*10+ digit;
    n=n/10;
   }
return revnum;
}
int main(){
    cout<<revNum(124);
    return 0;
}

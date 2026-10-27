#include<iostream>
using namespace std;
int primeN(int num){
  if(num<=1){
    return 0;
  }
for(int i=2;i<num;i++){
    if(num%i==0){
        return 0;
    }
}
return 1;
}
int main(){
    int num;
    cout<<"Enter your number:";\
    cin>>num;
    if (primeN(num)==1){
        cout<<"prime";
    }else{
        cout<<"Not prime";
    }
    return 0;
}
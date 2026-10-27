#include<iostream>
using namespace std;
    int And(int a ,int b){
       int aand =(a & b);
       return aand;
    }

        int OR(int a, int b){
        int fr=(a | b);
        return fr;
    }
    int Xor(int a, int b){
    int lor=(a ^ b);
    return lor;
}
    int main(){
        cout<<And(6,10);
        cout<< OR(6,10);
        cout<<Xor(6,10);
    return 0;
    }

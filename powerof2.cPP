#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Input Number :";
    cin>>n;
    if (n>0 && (n&(n-1))==0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
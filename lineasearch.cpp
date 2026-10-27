#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,key;
    cin>>n;
    vector<int>v(n);
    for(int &n:v){
        cin>>n;}
cin>>key;
for(int i=0;i<n;i++){
    if(v[i]==key){
        cout<<"Foumd"<<i<<endl;
        return 0;
    }
}
cout<<"not found";
return 0;
}
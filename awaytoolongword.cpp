#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin>> n;
while(n--){
string word;
cin>> word;
if (word.size() >10 ){
cout<< word[0] << word.size()-2<<word.back()<< "\n" ;
}
else{
cout<<word<< "\n";
}
}
return 0;
}
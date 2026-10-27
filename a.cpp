#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[]={2,4,6,8,9,0,12,2};
    int size= 8;
    int sum=0;
    for(int i=0 ; i<size ; i++){
        sum=sum+nums[i];
    }
    cout<<sum;
    return 0;
}
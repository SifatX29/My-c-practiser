#include <bits/stdc++.h>
using namespace std;
int main(){
    int nums[]={5,15,22,1,-15,-24};
    int size= 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smindex;
    int lrindex;
    for(int i =0 ; i<size ; i++) {
        smallest= min(nums[i],smallest);
      
    }
    for(int i =0 ; i<size ; i++){
        largest=max(nums[i],largest);
      
    }
 cout<< smallest << endl;

 cout<<largest<<endl;
 
 return 0;
}
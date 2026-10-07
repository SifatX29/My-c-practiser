#include<iostream>
using namespace std;
void change(int arr[],int size){
    int minIndex=0, maxIndex=0;
    for(int i=0;i<size-1;i++){
        if(arr[i]<arr[minIndex]){
            minIndex=i;
        }
        if(arr[i]>arr[maxIndex]){
            maxIndex=i;
        }
         
    }
    swap(arr[minIndex],arr[maxIndex]);
}
int main(){
    int arr[]={5,2,9,1,7};
    int size=5;
     
    change(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

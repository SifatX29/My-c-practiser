#include<iostream>
using namespace std;
void cal(int arr[], int size){
    int sum=0,product=1;
    for(int i=0;i<size;i++){
        sum +=arr[i];
        product *=arr[i];
    }
    cout<<"sum="<<sum<<endl;
    cout<<"product="<<product<<endl;
}
int main(){
    int arr[]={1,2,3,4};
    int size=4;
    cal(arr,size);
    
    return 0;

}
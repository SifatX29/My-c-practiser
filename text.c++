#include<iostream>
#include <iomanip>
using namespace std;
int masin(){
    float A , B , MEDIA ;
   cin >> A >> B ;
   MEDIA = (A + B )/2 ;
   cout << fixed << setprecision(5) << "MEDIA = "<< MEDIA << endl;
   return 0;
}
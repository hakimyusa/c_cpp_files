#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Input n : ";cin>>n;
      int i=1;                                           
      while(n!=0){
             if(i % 2 !=0){
                   cout<<i<<" ";
                   n--;                                   
             }i++;
         }
     }

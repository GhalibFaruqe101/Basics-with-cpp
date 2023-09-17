#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,i,x;
   cout<<"Enter the times\n";
   cin>>x;
   int arr[x];
   cout<<"Enter the numbers\n";
   for(int i=0; i<x; i++){
      cin>>arr[i];
   }
   int counter=1;
   while(counter<x){
      for(int i=0; i<counter; i++){
         if(arr[i]>arr[i+1]){
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
         }
      }
      counter++;
   }
   for(int i=0; i<x; i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;

}
    

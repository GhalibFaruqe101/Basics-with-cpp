#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int arr(){
    int n,m,size;
    cout<<"Enter the size ";
    cin>>size;
    int *newArray=new int[size];
    for(int i=0; i<4; i++){ 
    cout<<"Enter number ";
    cin>>newArray[i];
    }
    for(int i=0; i<4; i++){ 

      cout<<"Array is "<<newArray[i]<<endl;
     
    
    }
    delete[]newArray;
      newArray=NULL;
      return 0;

}
int main()
{
    arr();
}
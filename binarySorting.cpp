#include<bits/stdc++.h>
using namespace std;
int main( ){
    int n;
    cout<<"Enter total index: ";
     cin>>n;
    int target;
    cout<<"Target digit index: ";
    cin>>target;
       int x[n]={11,12,4,6,8};
   
    int lft=0;
    int rht=n+1;
    while(lft!=rht){
        int mid =(lft+rht)/2;
        if(x[mid]==target){
            return mid;
        }
        else if(target<mid){
            rht=mid-1;
             mid =(lft+rht)/2;
        }
        else{
            lft=mid+1;
             mid =(lft+rht)/2;
        }
        cout<<x[mid]<<endl;
        return mid;
    }

}

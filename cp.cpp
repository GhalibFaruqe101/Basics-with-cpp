
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> permutation;
int n=4, news;
bool chosen[4+1];
void search(){
    if(permutation.size()==n){ 
        news:permutation;
        cout<<news<<"";
}
//cout<<"\n";
else{
    for(int i=0; i<=n; i++){
        if(chosen[i]) continue;
        chosen[i]=true;        
        permutation.push_back(i);
        search();
        chosen[i]= false;
        permutation.pop_back();
    }
}

}
int main(){
    search();
    return 0;
}
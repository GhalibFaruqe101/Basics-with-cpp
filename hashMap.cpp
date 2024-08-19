#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

/**
  Creates and returns an unordered map of strings and integers.
 return The created unordered map.
 */
unordered_map <string, int> map(){ 
 unordered_map <string, int> m {
    {"a",10},{"b",20},{"c",30}
 };
 return m;
}
int main(){ 
    unordered_map <string, int> m = map();
    for(auto& x:m){
        cout<<x.first<<" : "<<x.second<<endl;
    }
    return 0;
}

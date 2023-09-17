#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int len(char string[]){
    int number=0;
    while(string[number]!='\0')
    ++number;
    return number;
}
int main(void){
    char x[]={'o','z','y','x','\0'};
    char y[]={'c','b','a','\0'};
    cout<<len(x)<<endl;
    cout<<len(y)<<endl;
    return 0;
}
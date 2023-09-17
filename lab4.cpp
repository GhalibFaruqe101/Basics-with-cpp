#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class mobile{
    private:
    int imei_no;
    protected:
    string screen;
    public:
    int model;
    int is;
    int m;
    void setMbinfo(int I){
    imei_no=I;
    }
  
int getMbinfo(){
    return imei_no;
}
}; 
class samsung: public mobile{
private:
int i;
int s;
public:
void setScreen( string S){
    screen=S;

}
string getScreen(){
    return screen;
}


};
int main() {
   samsung d;
//    nokia n;
//    iphone i
    d.setMbinfo(1234);
    d.setScreen("oje");
    cout<<d.getMbinfo()<<endl;
    cout<<d.getScreen()<<endl;
    // cout<<endl;
    //  n.setMbinfo(16745);
    // n.setScreen("fddsfd");
    // cout<<n.getMbinfo()<<endl;
    // cout<<n.getScreen()<<endl;
    // cout<<endl;    
    //  i.setMbinfo(1234);
    // i.setScreen("oje");
    // cout<<i.getMbinfo()<<endl;
    // cout<<i.getScreen()<<endl;
    return 0;                   
}
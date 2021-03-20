#include<iostream>
using namespace std;
void toh(int disks, string s, string a,string d){
    if (disks == 0){
        return;
    }
    toh(disks-1,s,d,a);
    cout<<"from: "<<s<<" -> to :"<<d<<"\n";
    toh(disks-1,a,s,d);
}
int main(){
    cout<<"enter the number of disks\n";
    int disks;
    cin>>disks;
    string  s = "S"   ;
    string  a = "A"   ;
    string  d = "D"   ;
    toh(disks,s,a,d);
}
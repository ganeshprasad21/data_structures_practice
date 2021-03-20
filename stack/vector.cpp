#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> myvec;
    myvec.push_back("g");
    myvec.push_back("");
    myvec.push_back("\0");
        cout<<(myvec[0]+myvec[1]).length()<<endl;
}
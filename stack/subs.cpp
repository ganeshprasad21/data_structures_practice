#include<iostream>
using namespace std;
#include<vector>
vector<string> outVect;
void subs(string input,string output){
    if(input.empty()){
        outVect.push_back(output);
        return;
    }
    subs(input.substr(1),output);
    subs(input.substr(1),output+input[0]);
}
int main(){
    cout<<"enter string to find subs of"<<"\n";
    string input;
    cin>>input;
    string output = "\0";
    subs(input,output);
    for(int i = 0 ; i<   outVect.size();i++ ){
        cout<<outVect[i]<<",";
    }
    return EXIT_SUCCESS;
}
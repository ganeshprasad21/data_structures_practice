#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int substr(string input,string output[]){
    if(input.empty()){
        output[0]="";
        return 1;
    }
    int numOfStrSoFar = substr(input.substr(1),output);
    for (int i = 0 ; i < numOfStrSoFar ; i++){
        output[i+numOfStrSoFar] = input[0]+output[i];
    }
    numOfStrSoFar = numOfStrSoFar*2;
    return numOfStrSoFar;
}
int main(){
    string input;
    cout<<"enter the string \n";cin>>input;
    string *  output = new string[(int)pow(2,input.size())];
    int c = substr(input,output);
    for(int i =0 ; i < c ; i++){
        cout<< output[i]<<".";
    }
}
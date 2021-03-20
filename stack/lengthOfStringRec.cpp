#include<iostream>
using namespace std;
int lenRecursive (string str,int si){
    if (str[si] == '\0'){
        return 0;
    }
    return 1+lenRecursive(str,si+1);
}
int main() {
    cout<<"enter the string to find the length \n";
    string str;
    cin>>str;
    cout<<lenRecursive(str,0);
    return 0;
}
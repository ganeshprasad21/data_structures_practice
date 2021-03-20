#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
using namespace std;
int atoiRec(string arr,int si,int ei){
    if (si-ei == 0){
        return (int)(arr[si] - '0');
    }
    int subAns = atoiRec(arr,si+1,ei);
    return ((pow(10,(ei-si))*((int)arr[si]-'0')) + subAns); 
}
int main() {
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    cout<<atoiRec(str,0,str.length()-1)+3<<endl;
    return EXIT_SUCCESS;
}
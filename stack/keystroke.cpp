#include<iostream>
#include<stdio.h>

#include<sstream>
#include<vector>

using namespace std;
vector<string> findpatterns(string pattern,string key[]){
    if (pattern.length() == 0){
        vector<string> ans;
        ans.push_back("\0");
        return ans;
    }
    vector<string> stringsSoFar = findpatterns(pattern.substr(1),key);
    for(int i = 0 ; i < stringsSoFar.size() ; i ++){
        cout << stringsSoFar[i]<<"^";

    }
            cout<<endl;
    int numberOfStrSoFar = stringsSoFar.size();
    //cout<<"number of strings so far"<<numberOfStrSoFar<<"\n";
    vector<string> Ans;
    int keyInConsideration = stoi(pattern.substr(0,1));
    //cout<<"key in consideration"<<keyInConsideration<<endl;
    string currKeyPossibilities = key[keyInConsideration];
    //cout<<"currKeyPossibilits :    "<<currKeyPossibilities<<"\n";
    int possibilitiesCount = key[keyInConsideration].length() -1;
    //cout<<"possibilities count:    "<< possibilitiesCount << endl;
    while(possibilitiesCount >= 0){
        for(int i = 0 ; i < numberOfStrSoFar ; i++){
            //cout<<"until here"<<"\n";
            cout<<stringsSoFar[i]<<endl;
            Ans.push_back(currKeyPossibilities.substr(possibilitiesCount,1)+(stringsSoFar[i]));
            cout<<"pushed"<<currKeyPossibilities.substr(possibilitiesCount,1)+(stringsSoFar[i])<<"\n";
        }  
        possibilitiesCount--;
    } 
    for(int i = 0 ; i < Ans.size() ; i ++){
        cout << Ans[i]<<"+";
    }
    cout<<endl;
    return Ans;
}
int main(){
    cout<<"enter the keypad numbers 1 - 9 only\n";
    string pattern;
    cin>>pattern;
    string key[9] = {".,-","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> answer = findpatterns(pattern,key);
    for(int i = 0 ; i < answer.size() ; i ++){
        cout << answer[i]<<",";
    }
    cout<<"ksajfsa";
    return EXIT_SUCCESS;
    cout<<"akjsfkae";
}
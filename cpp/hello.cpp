#include <iostream>

using namespace std;

struct myStruct{
    int myStructId;
    char myStructName[21];
};

string sayHi() {
    return "hi there <3";
}

int main()
{
    int var = 3;
    int & refVar = var;
    var = 4;
    refVar = 5;
    cout << "address of var= " << &var << " val of var " << var<< endl;
    cout << "address of refvar= " << &refVar << " val of refvar " << refVar << endl;
    cout << sayHi() << endl;
    myStruct myStructA = {1, "Ganesh Prasasd R"};
    cout << "ID = " << myStructA.myStructId << " and name = " << myStructA.myStructName<<endl;
    return 0;
}
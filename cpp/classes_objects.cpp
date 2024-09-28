#include<iostream>
using namespace std;

class Complex
{
    int a,b;
public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex()
    {
        a=0;
        b=0;
    }
    Complex (const Complex &c)
    {
        a = c.a;
        b = c.b;
    }
    ~Complex()
    {
        cout << "destroyed = " <<this<< endl ;
    }
    void setComplexNum(int x,int y){
        a = x;
        b = y;
    }
    void showComplexNum(){
        cout<<a<<" + i"<<b<<endl;
    }
    Complex operator + ( Complex & anotherComplex)
    {
        return (Complex(a+anotherComplex.a,b+anotherComplex.b));
    }
};

class Base
{
    int baseVariable = 0;
public:
    virtual void displayVar()
    {
        cout << baseVariable << " = is the value Base\n";
    }
};

class Derived: public Base
{
    int derivedVar =1;
public:
    void displayVar(){
        cout<< derivedVar << " = is the value Derived\n";
        // return 3;
    }
};

class AbstractClass
{
    public:
    virtual void doNothing()=0;
    virtual void doSomething(){
        cout << "i did something!\n";
    }
};

class DerivedFromAbstract: public AbstractClass
{
    public:
    void doNothing()
    {
        cout << "i did nothing\n";
    }
};

template <class x> x myTemplateFunc (x a, x b){
    return a>b?a:b;
};

class DynamicConstructor
{
    int& var;
public:
    DynamicConstructor(int &x):var(x)
    {
        cout<< "Constructor with initializer list\n";
    }
    void show_addr(){
        cout << &(this->var)<<endl;
    }
};
int main(){
    // Complex a(1,2);
    // a.setComplexNum(3,0);
    // a.showComplexNum();
    // Complex c(a);
    // c.setComplexNum(4,0);
    // c.showComplexNum();
    // auto d = a + c;
    // d.showComplexNum();
    // cout.operator<<("used the operator syntax");
    // cout<<endl;
    Base base;
    Derived derived;
    Base* baseptr = new Base;
    Base* derivedptr = new Derived;
    base.displayVar();
    derived.displayVar();
    baseptr->displayVar();
    derivedptr->displayVar();
    cout << "thanks\n";
    AbstractClass *absClasPtr = new DerivedFromAbstract;
    // AbstractClass a;
    absClasPtr->doSomething();
    cout<<myTemplateFunc(1,2)<<endl;;
    cout<<myTemplateFunc(1.1,2.2)<<endl;
    int someVar = 3;
    cout << &someVar << endl;
    DynamicConstructor D(someVar);
    D.show_addr();
    
}


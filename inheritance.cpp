#include<iostream>
using namespace std;
// inheritance syntax
/*

class derived_class_name(D) : access_specifier_mode(public) base_class_name(B)
{
  // memeber of derived class
};

*/



//                                              Single Inheritance - Program
/*
class B// class 1 - (B)base class
{
    int a;
public: // here all function declared
    int b; // value not assigned to b yet.
    void get_ab();
    int get_a(void);
    void show_a(void);
};






class D:public B // class 2 - (D)derived class // syntax is defined in top
{
    int c;
public: // more function declared here
    void mul(void);
    void display(void);
};






void B::get_ab(void)
{
    a = 5; b = 10;
}
int B::get_a()
{
    return a;
}
void B::show_a()
{
    cout<<"A = "<<a<<endl;
}
void D::mul()
{
    c = b*get_a();
}
void D::display()
{
    cout<<"a = "<<get_a()<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}



// Program start from here.
int main()
{
    D d; // object created
    d.get_ab(); // functions calling start from here
    d.mul();//call
    d.show_a();//call
    d.display();//call

    d.b=20; // assigning a value to b
    d.mul();//call
    d.display();//call

    return 0;
}
*/

/* //Output
A = 5
a = 5
b = 10
c = 50
a = 5
b = 20
c = 100
*/

//                                   Multiple Inheritance
//

//

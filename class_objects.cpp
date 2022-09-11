#include<iostream>
using namespace std;
// Class & Objects in C++,
// Program 1 - in which we make classes and there objects and there attributes(variable & function) in defined with values in side class with public access specifier.
/*
class myName
{
public:
    char cast;
    float bankbalance;
    int age; //String
};

myName myObj;// defining object name outside main() function.

int main()
{
    //  myName myObj;

    myObj.cast = 'm';
    myObj.bankbalance = 10.009;
    myObj.age = 20;

    cout<<myObj.age<<endl<<myObj.bankbalance<<endl<<myObj.cast<<endl;
    return 0;
}
*/

//working of program is a,b variable inside private: class and [ void set_data(int x, int y) ] function inside
// public: access specifier and [x] assign to a, [y] assign to b now int main function calling the set_data function
// to set values(3, 6) inside (a=3, b=6).
// here's how function inside class is work by using variables from private (a, b)
/*

class myClass
{
private:
    int a, b;
public:
    void set_data(int x, int y)
    {
        a=x, b=y;
    }
    void show_data()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
};
myClass myObject;

int main()
{
    myObject.set_data(3, 4);
    myObject.show_data();
}
*/



// getdata() it is used to take input from user.
// putdata() it is used to give or print output to console.
/*
class item
{
private:
    int number;
    float cost;
public:
    void getdata(int a, float b);
    void putdata(void)
    {
        cout<<"number:"<<number<<endl;
        cout<<"cost:"<<cost<<endl;
    }
};

// Member function defination
void item::getdata(int a, float b) // scope resolution operator
{
    number = a;
    cost = b;
}
// main
int main()
{
    item x;
    cout<<"object x:"<<endl;
    x.getdata(100, 299.95); // member functions
    x.putdata();

    item y;
    cout<<"object y:"<<endl;
    y.getdata(200, 175.50); // member functions
    y.putdata();
    return 0;
}
*/





// simple member function program by taking input from user
/*
class myClass
{
    int students;
    float rollno;
public:
    void getdata(int, float);
    void putdata();
};

void myClass::getdata(void) // this function take input from user
{
    cout<<"Enter the value of class";
    cin>>students>>rollno;
    cout<<"Students in Class = "<<students<<"Roll no of students = "<<rollno<<endl;
}


int myClass::putdata(void) // this function give output to user
{
    int t=students+rollno;
    cout<<"Addition of "<<students<<"and"<<rollno<<"="<<t;
}



int main()
{
  myClass s1;
        s1.getdata();
        s1.putdata();

    return 0;
}
*/






// static data members
//
class myClass
{
    static int age;
    int rollno;
public:
    void getdata(int a)
    {
        rollno = a;
        age++;
    }
    void getage(void)
    {
        cout<<"age:";
        cout<<age<<endl;
    }
};

int myClass :: age;

int main()
{
    myClass a, b, c;
    a.getage();
    b.getage();
    c.getage();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout<<"after reading data"<<endl;

    a.getage();
    b.getage();
    c.getage();

    return 0;
}
//


// Static member function
/*
class test
{
    int code; // simple variable = code
    static int count;// static variable = count
public:
    void setcode(void)
    {
        code = ++count;
    }
    void showcode(void)
    {
        cout<<"object number: "<<code<<endl;
    }
    static void showcount(void)
    {
        cout<<"count: "<<count<<endl;
    }
};
int test :: count;
int main()
{
    test t1, t2; // object declaration

    t1.setcode();
    t2.setcode();

    test::showcount(); // accessing static function on t3

    test t3;
    t3.setcode();

    test::showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
}
*/


//
//

//



















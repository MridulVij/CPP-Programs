#include<iostream>
using namespace std;

// Constructors creating basics
/*
class constructor
{
private:
    int a,b;
public:
    constructor()
    {
        cout<<"Constructor is Working\n";
    }
};

int main()
{
    constructor c1,c2; // here constructor object = c1 and c2 is maded 2 times
}
*/


//Constructors Advanced
/*
class constructor
{
private:
    int a,b;
public:
    constructor(int x, int y)
    {
        a=x;
        b=y;
    cout<<a<<b; // prints a = 3 and b = 6 value from private specifier because of constructor = c1 object
    }
};

int main()
{
 constructor c1(3,6); // here constructor object = c1 and c2 is maded 2 times
}
*/

// Constructor argument passing though it.
//
class constructor
{
private:
    int a,b;
public:
    constructor(int x, int y) // parameterized constructor c1
    {
        a=x;
        b=y;
    cout<<a<<"\n"<<b<<"\n"; // prints a = 3 and b = 6 value from private specifier because of constructor = c1 object
    }
    constructor(int z) // constructor c2
    {
        a=z;
    }
};

int main()
{
 constructor c1(3,6),c2(4); // here constructor object = c1 and c2 is maded 2 times
}
//

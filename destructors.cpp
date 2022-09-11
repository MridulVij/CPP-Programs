#include<iostream>
using namespace std;

// destructors in c++ basics it is denoted by ~ tilde symbol
//
int count = 0;

class destructor
{
public:
    destructor()
    {
        count++;
        cout<<"\n No. of Object Created"<<count;
    }

    ~destructor() // destructors is denoted as ~tiled symbol it is similar to constructor
    {
        cout<<"\n No. of Object Destroyed"<<count;
        count--;
    }

};

int main()
{
    cout<<"\nEnter in Main function\n";

    destructor d1, d2, d3, d4;
    {
        cout<<"\nEnter Block1\n";
        destructor d5;
    }
    {
        cout<<"\nEnter Block2\n";
        destructor d6;
    }
    cout<<"\nRe-Enter in Main Function\n";
    return 0;
}
//

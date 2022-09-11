#include<iostream>
using namespace std;
// declaring square, pyramid, diamond patterns
int squarePattern();
int pyramidPattern();
int diamondPattern();

int main()
{
    squarePattern();
    //printf("\t\t\t\n");
    pyramidPattern();
    //printf("\t\t\t\n");
    diamondPattern();
    //printf("\t\t\t\n");
}

//               Square Pattern in C++
int squarePattern()
{
    int size = 5;
    //cin>>size;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
//

//                  Pyramid Pattern in C++
//
int pyramidPattern()
{
    int size = 5;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            cout<<" ";
        }
        for(int k=0; k<2 * i+1; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
//

// diamond start  patran pending

int diamondPattern()
{
    int size=5;
    for(int i=1; i<=size; i++)
    {
        for(int j=size; j>i; j--)
        {
            cout<<" ";
        }
        for(int k=0; k<i*2-1; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1; i<=size; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<" ";
        }
        for(int k=(size-i)*2-1; k>0; k--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
//

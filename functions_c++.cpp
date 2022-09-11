//Write a function to find number of vowels in string
// this program will only count vowel words like a,e,i,o,u. and give 1 in output if we enter any character of a,e,i,o,u
#include<iostream>
using namespace std;

/*
int count_st(string s) // count_st() is function declaration
    {
        int i = 0, ans = 0;
        while(s[i] != '\0')
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            ans++;
            i++;
        }
        return ans;
    }
int main()// function calling to count_st()
{
    string str;
    cin>>str;
    cout<<count_st(str)<<endl;
}
*/

/* output -> aaaa = 4, eeeeeee = 7
a=1, e=2, i=3, o=4, u=5
m=0 because apart from vowels we cant take another chatracters or alphabets in program
*/


//Write a function to check if a string is a palindrome or not?
//what is palindrome -> NITIN = NI  T  IN same alphabets with single string but in reverse direction or available in first and last
/*
string is_palindrome(string s)
{
    string ans = "";
    int l=s.length();
    int i=0;
    while(i<l-i-1)
    {
        if(s[i] != s[l-i-1])
            return "NOT A PALINDROME";
        i++;
    }
    return "YES IT's PALINDROME";
}
int main()
{
    string str;
    while(str != "a")
    {
        cin>>str;
        cout<<is_palindrome(str)<<endl;
    }
    return 0;
}
*/

// example program of function calling
/*
int fun(int &a, int b, int c)
{
    a += 10;
    b = b - ++c;
    c--;
    return a+b+c;
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<fun(a,b,a)<<" "<<a<<" "<<b<<endl;
    return 0;
}
*/

// Default Arguments
// program to multiply 2 numbers from each others
/*
int fun(int a, int b)
{
    return a*b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<fun(a,b)<<endl; // a, b is default arguments
    return 0;
}
*/

/*
int fun(int a, int b)
{
    return a*b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<fun(b)<<endl; //errors because function will not find integer value of a
    return 0;
}
*/

//Function Overloading
/*
int sum(int a, int b)
{
    return a+b;
}
int sum(int a, int b, int c)
{
    return a+b+c;
}
int sum(int a, int b, int c, int d)
{
    return a+b+c+d;
}
int main()
{
    cout<<"The Addition of 3 and 6 is: "<<sum(3,6)<<endl<<"Addition of 3, 6, 9 is: "<<sum(3,6,9)<<endl<<"Addition of 3, 6, 9, 12 is: "<<sum(3,6,9,12)<<endl;// function calling is happning here
    return 0;
}
*/

//              FUNCTION OVERLOADING - [PART 2]
/*
    int main()
    {
        int
        return 0;
    }
*/

// Virtual & Friend function after learning Classes and Objects topics in C.




// Date = 17 August 2022

// functions by  code with harry

//
//

//









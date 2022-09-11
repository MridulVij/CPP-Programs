#include<iostream>
#include<vector>
//#include<string>
using namespace std;
/* //Syntax
template <class_type> 
type function_name(type_argument1, type_argument2)
*/

//                             Templates in C++
//                              FUNCTION TEMPLATES
// program to calculate sum of 2 numbers with the help of template in c++
/*
template <class I> I func(I x, I y)
{
 return x+y;
}

int main()
{
 int a,b;
 cin>>a>>b;
 cout<<func<int>(a,b)<<endl;
 //func<int>(a,b);
 //cout<<func(a,b)<<endl;
}
*/

/*
template <class T> 
int func(T a, T b) //void
{
  return (a>b)?a:b; //int sum = , cout<<sum;
}

int main()
{
  cout<<func<int>(10,20)<<endl; //func(10,20); 
  return 0;
}
*/


/*
template <class T> 
void func(T a, T b) //int (in this class_T is basically int type of template)
{
  int sum = (a>b)?a:b; //return
  cout<<sum;
}

int main()
{
  func(10,20); //cout<<func<int>(10,20)<<endl;
  return 0;
}
*/



//                      Templates with Multiple Parameter
/*
template <class T1, class T2>
void func(T1 x, T2 y)
{
  cout<<x<<" "<<y<<endl;
}

int main()
{
 func<int>(10, "MV"); // int , string value
 func<float>(1.09, 200); // float, int value
 return 0;
}
*/

//
//

//





// Template Using swap()
// template in which all arguments will reach and change according to condition.
/*
template <class T> 
T swapping(T x, T y)
{
  cout<<"Before Swapping"<<"\n"<<"X = "<<x<<"\n"<<"Y = "<<y<<"\n";
  int temp = x;
  x = y;
  y = temp;
  cout<<"After Swapping"<<"\n"<<"X = "<<x<<"\n"<<"Y = "<<y<<"\n";
}

int main()
{
  int a, b;
  cin>>a>>b;
  swapping(a, b);
}
*/


// 
/*
template <class T> void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}
  
// Driver Code
int main()
{
    // start of array code
    int size;
    cout<<"Enter Size of an Array"<<endl;
    cin>>size; // input size of an array
    int a[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the Elements of an Array"<<endl;
        cin>>a[i]; // input elements in array
    }
    // end of array code


    int n = sizeof(a) / sizeof(a[0]);
    // calls template function
    bubbleSort<int>(a, n);
  
    cout << "Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
  
    return 0;
}
*/

//                          CLASS TEMPLATES 
//
template <class T>
class vector{
  
}
//

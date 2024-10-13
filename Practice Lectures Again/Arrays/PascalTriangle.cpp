// this is called pascal triagle.

//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
// 1 5 10 10 5 1

// 1st methods-> To find pascal triangle use combination method. (icj).

/*
#include<iostream>
using namespace std;
int fact(int n)
{
    int fact=1;
    for(int i=2; i<=n ;i++)
    fact*=i;
    return fact;
}


int combination(int n , int r)
{ // 1st write this fun then write fact function
    int ncr= fact(n)/(fact(r)*fact(n-r));
    return ncr;
}


int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
    {
    cout<< combination(i,j)<<" ";
    }
    cout<<endl;

}
}

*/

// Write a function to compute the greatest common divisor of two given no.
// #include<iostream>
// using namespace std;
// int gcd(int a, int b)
// {
//     int hcf=1;
//     for(int i=1; i<=min(a,b); i++)
//     {
//         if(a%i==0 && b%i==0)
//     {
//         hcf=i;
//         }
//     }
//     return hcf;
// }
// int main()
// {
//     int a;
//     cout<<"Enter 1st no. ";
//     cin>>a;
//     int b;
//     cout<<"Enter 2nd no. ";
//     cin>>b;
//     cout<<gcd(a,b);
// }



/*
// swap two numbers using functions use extra variable temp
#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp=a; 
    a=b;
    b=temp;

}
 int main()
 {
    int a,b;
    cout<<"Enter a nad b";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
 }

*/


// swap without temp variable or extra variable not allowed

// #include<iostream>
// using namespace std;
// void swap(int &a, int &b)
// {
//     a=a+b;
//     b=a-b;
//     a=a-b;
// }
//  int main()
//  {
//     int a,b;
//     cout<<"Enter a nad b";
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b;
//  }


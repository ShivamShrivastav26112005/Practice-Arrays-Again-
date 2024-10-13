// #include<iostream>
// using namespace std;
//  int main()
//  {
//  {
//     cout<<"hi"<<endl;
//     cout<<endl<<endl;
//     cout<<"\n"<<endl;

//     cout<<"hello"<<endl;
//     cout<<4<<endl;
//     cout<<4+5<<endl;
//     cout<<"4+9"<<endl;

// int a;
// a=6;
// cout<<a;

// cout<<2+3<<endl;
// cout<<6-4<<endl;
// cout<<5*6<<endl;
// cout<<6/2<<endl;
// cout<<5%2<<endl;

// int x=5;
// x--;
// cout<<x<<endl;
// ++x;
// cout<<x<<endl;
// x++;
// cout<<x<<endl;
// --x;
// cout<<x<<endl;

// float a=3.8;
// a=a+1;
// cout<<a<<endl;
// cout<<a/19<<endl;

// find remainder => r=a-(b+q)
// q=a/b;
// where a=dividend, b=divisor, q=quoitent, r=remainder

//  #include<iostream>
// using namespace std;
//  int main()
//  {
//    int a;
// cin>>a;
// cout<<"Enter 1st no."<<endl;
// cin>>a;
// int b;
// cout<<"Enter 2nd no."<<endl;
// cin>>b;

// cout<<"hi";
//  }

// calculate percentage of the n students
// #include<iostream>
// using namespace std;
// int main()
// {
// float x1=90;
// float x2=70;
// float x3=60;
// float x4=80;
// float x5=97;
// float x6=30;
// int percent;
// cout<<"Enter the values"<<endl;
// percent=(x1+x2+x3+x4+x5+x6)/6;
// cout<<percent;
// }

// take float input and print the fractional part of the real number.

// #include <iostream>
// using namespace std;
// int main()

//    char ch;
//    cout << "Enter character to check if it is vowel or not" << endl;
//    cin >> ch;
//    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//          cout << "YES,UPPER CASE";
//   if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//       {
//          cout << "YES,UPPER CASE";
//       }
//       else cout << "NO";
// }


//check these number is side of the triangle or not
// sum of two sides > third side 

// #include <iostream>
// using namespace std;
// int main()
// {
// int a,b,c;
// cout<<"Enter ";
// cin>>a>>b>>c;

//  if((a+b>c)&&(b+c>a)&&(c+a>b))

//    {cout<<"yes";}
//    else
//    {cout<<"no";}


// }

// greatest of 3 numbers.
// #include <iostream>
// using namespace std;
// int main()
// {
// int a,b,c;
// cout<<"Enter ";
// cin>>a>>b>>c;
// if(a>b)
// {
//     if(a>c)
//     {
//         cout<<" a is greater";
//     }
//     else cout << "c is geater";
//     }
//     else{
//     if(b>c)
// {
// cout<<"b is greater ";}
// else
// cout<<" c is greater";
// }}


// find ascii value 
// #include <iostream>
// using namespace std;
// int main()
// {
// char a;
// cin>>a;
// cout<<"Enter a";
// int b = (int)a;
// cout<<b;
// }

// find absolute value (mode)
// 4=4
// -4=4 using if else

// #include <iostream>
// using namespace std;
// int main()
// {
// int a;
// cout<<"enter the value";
// cin>>a;
// if(a>0)
// {
//     cout<<a<<endl;
// }
// else
// cout<<-a;

// }


// // print fractional value Poitive number 
// #include<iostream>
// using namespace std;
// int main()
// {
//     float a;
//     cout<<"Enter the number ";
//     cin>>a;
//     int b=(int)a;
//     a=a-b;
//     cout<<a;

// }


// write to count digits of a given number using loops
// count = n/10



// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cout<<"Enter a number "<<endl;
//    cin>>n;
//    int count =0;
//    while(n>0)
//    {
//     n/=10;
//     count++;
//    }
//    cout<<count;


// }


// write a program to print sum of digits of a given number.
// step- last digit (n%10)
// sum+=last digit


// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cout<<"Enter a number "<<endl;
//    cin>>n;
//    int sum =0;
//    int lastdigit=0;
//    while(n>0)
//    {
//     lastdigit=n%10;
//    sum+=lastdigit;
//    n/=10;
//    }
//    cout<<sum;
   
// }
// reverse the number 

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n;
//    cout<<"Enter a number "<<endl;
//    cin>>n;

//    int lastdigit=0;
//    int r=0;
//    while(n>0)
//    {
//     r=r*10;
//     lastdigit=n%10;
//    r+=lastdigit;
//    n/=10;
//    }
//    cout<<r;
// }



// //find the count 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n";
//     cin>>n;
//     int count=0;
//     while(n>0)
//     {
//         n/=10;
//         count++;
//     }
//     cout<<count;
// }


//find the sum of the digits
// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n";
//     cin>>n;
//     int sum =0;
//     int lastdigit=0;
//     while(n>0)
//     {
//        lastdigit= n%10;
//         sum=sum+lastdigit;
//         n/=10;
//     }
//     cout<<sum;
//  }





//find the reverse 
// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int n;
//     cout<<"Enter n";
//     cin>>n;
//     int r=0;
//     int ld;
//     while(n>0)
//     {
//         r*=10;
//         ld=n%10;
//         r+=ld;
//        n/=10;
//     }
//     cout<<r;

//  }

//find the factorial
// #include<iostream>
// using namespace std;
//  int main()
//  {
    // int n;
    // cout<<"Enter n";
    // cin>>n;
//     int fact=1;
//     for(int i=1; i<=n; i++)
//     {
//         fact*=i;
//     }
//     cout<<fact;
//  }



//find the fibonacci series.
#include<iostream>
using namespace std;
 int main()
 {
        int n;
    cout<<"Enter n";
    cin>>n;
    // fact=(n-1)*(n-2)...
    int a=1;
    int b=1;
    int sum=0;
    for(int i=1; i<=n-2; i++)
    {
         sum=a+b;
         a=b;
         b=sum;
    }

cout<<sum;
 }




















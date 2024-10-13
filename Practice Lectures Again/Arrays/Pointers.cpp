/*
#include<iostream>
using namespace std;
 int main()
 {
    int x;
    x=5;
    cout<<&x<<endl; //0x61ff0c
    x=7;
    cout<<&x; //0x61ff0c 
    // value can be changed but not address changed

 }

 



// pointer store addresses.
//important
// (*)-> dereferenc operator.. print value of address 

#include<iostream>
using namespace std;
 int main()
 {
    int x;
    x=7;
    cout<<&x<<endl;
    int* p=&x; // int* (*) is store addresses of the variable.
    cout<<p<<endl;
    cout<<*p; //we print the value of the address of x
 }
 */






// calculate sum of two numbers,using pointer, and dereference operator.
// #include<iostream>
// using namespace std;
//  int main()
//  {
// int x= 4;
// int y=5;
// int* p1=&x;
// int* p2=&y;

// // cout<<p1+p2; //error becoz we can't add address
// cout<<*p1+*p2;

//  }
    





//Calculate sum, diff, multi, divide of two numbers using pointer and dereference operator.
// #include<iostream>
// using namespace std;
// int main()
//  {
//     int a,b;
//      cout<<"Enter a and b"<<endl;
//      cin>>a>>b;

//     // int a=6;
//     // int b=3;
//     int* p1=&a;
//     int* p2= &b;
//     cout<<*p1+*p2<<endl;
//     cout<<*p2-*p1<<endl;
//     cout<<*p1 * *p2<<endl;
//     cout<<*p1/(*p2)<<endl;
//      cout<<*p1%(*p2)<<endl;

//     }








/*
// We already known to take input from the integer data type, float , char , boolean etc...
// can i also take input from the pointers the the answer is YES how let's start
#include<iostream>
using namespace std;
 int main()
 {
    int a;
    int b;
    int* p1=&a;
    int* p2=&b;
    cout<<"Take pointer input from the user ";
    cin>>*p1;
    cin>>*p2;
    // a=*p1, b=*p2.
    cout<<*p1+*p2<<endl;
    //also we can write 
    cout<<a+b;

 }
*/







// 6
// 6
// 6
// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int a;
//     int* p=&a;
//     cin>>*p;
//     cout<<a<<endl;
//     cout<<*p<<endl;
//  }





// these are the wrong manner to decalare pointer.

// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int a=3,b=4;
//     // int* p=&a,q=&b; //error 
// int* a, b; //error
//     cout<<a" "<<b<<" ";
//  }








// these are the corect way to declare pointer . Use always these type;
// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int a=3;
//     int* p=&a;
//     int b=3;
//     int* q=&b;
//     int c=4;
//     int* r=&c;
//     cout<<p<<" "<<q<<" "<<r<<" "<<endl; //0x61ff00 0x61fefc 0x61fef8 
//     cout<<*p<<" "<<*q<<" "<<*r<<" "; //3 3 4
//  }
























































 
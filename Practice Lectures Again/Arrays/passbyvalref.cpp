// pass by value and pass by refernce
// Write the correct swap ffunction.

// 1- Pass by value-:

// Enter a and b
// 5
// 6
// 5 6
// does not changed

// #include<iostream>
// using namespace std;
// //this a and b are diferent
// // only value is passed so it is called pass by value.
// void swap(int a, int b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main()
// {
//     int a,b;
//     cout<<"Enter a and b"<<endl;
//     cin>>a>>b;
//     //and this a and b are diffenert from upper a and b
//     swap(a,b);
//     cout<<a<<" "<<b;
// }

// 2-:  Pass by reference

// 1. Method
//  Enter a and b
//  5
//  6
//  6 5

// #include<iostream>
// using namespace std;
// void swap(int &x, int &y)
// {
//     int temp=x;
//     x=y;
//     y=temp;

// }
// int main()
// {
//     int a,b;
//     cout<<"Enter a and b"<<endl;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b;
// }

// 2.Method

// Enter a and b
// 5 3

// #include<iostream>
// using namespace std;
// // when we pass address then only pointer can be store address of variable
// void swap(int* x, int* y)
// {
//     int temp = *x;
//     *x=*y;
//     *y=temp;

// }
//  int main()
//  {

//     cout<<"Enter a and b"<<endl;
//     int a=3, b=5;
//    // we pass the address of a and b in the function
//     swap(&a,&b);
//     cout<<a<<" "<<b<<" ";
//  }

// 2.1.Method

// Enter a and b
// 5 3

// #include<iostream>
// using namespace std;

// void swap(int* x, int* y)
// {
//     int temp = *x;
//     *x=*y;
//     *y=temp;

// }
//  int main()
//  {

//     cout<<"Enter a and b"<<endl;
//     int a=3, b=5;
//     //inside input we make a pointer
//     int* x=&a;
//     int* y=&b;

//     swap(x,y);
//     cout<<a<<" "<<b<<" ";
//  }

// #include<iostream>
// using namespace  std;
//  int main()
//  {
//     bool flag = true;
//     bool* ptr=&flag;
//     cout<<ptr<<endl;
//     ptr=ptr+1;
//     cout<<ptr;
//  }

// 0x61ff0b
// 0x61ff0c  // add 1 byte in address
// boolean is store only 1 byte.

// #include<iostream>
// using namespace  std;
//  int main()
//  {
//     int a=5;
//     int* ptr=&a;
//     int b=++(*ptr);
//     cout<<a<<" "<<b;
//  }

// ques.1->first we find first digit and last digit?

// #include<iostream>
// using namespace  std;
//  int main()
//  {
//     // last digit
// int ld;
// int n;
// cin>>n;
// int i=n%10;
// cout<<i;

// run-
//  134674
//  4

// first digit
// int fd;
// int m;
// cin>>m;
// while(m>9)
// m=m/10;
// cout<<m;

// }
// run-
// 244596
// 2

// formula - first digit => while(n>9)
// {
//     n=n/10;
// }
// last digit => n%10;

// #include<iostream>
// using namespace  std;
//  int main()
//  {
// int ld;
// int n;

// cin>>n;
// int i=n%10;
// cout<<i<<" is a last digit ";

// int fd;
// cin>>n;
// while(n>9)
// n=n/10;
// cout<<n<<" is a first digit ";

//  }
//  654
// 4 is a last digit
// 549824
// 5 is a first digit

// also we find ld and fd.

// #include <iostream>
// using namespace std;
// int main()
// {
//       // last digit(ld)
//     {
//         int m;
//           cout << " Enter a number "<<endl;
//         cin>>m;
//         int i = m % 10;
//         cout << i << " is ld"<<endl;
//     }

//       // first digit(fd)
//       int n;
//     cout << " Enter a number "<<endl;
//     cin >> n;
//     while (n > 9)
//     {
//         n = n / 10;
//     }
//     cout << n << " is fd" << endl;
// }

//  Enter a number
// 64131894
// 4 is ld
//  Enter a number
// 54644
// 5 is fd

// also we find ld and fd.

// #include <iostream>
// using namespace std;
// int main()
// {
//       // last digit(ld)
//     {
//         int m;
//           cout << " Enter a number "<<endl;
//         cin>>m;
//         int i = m % 10;
//         cout << i << " is ld"<<endl;

//       // first digit(fd)
//     while (m > 9)
//     {
//         m = m / 10;
//     }
//     cout << m << " is fd" << endl;
// }}

// WA fun to find the first and last digit of a no. without returning anything.
// without returning anything -> means void (null)

// write -> function

// #include <iostream>
// using namespace std;
// void finded(int n, int *ptr1, int *ptr2)
// {
//     *ptr2 = n % 10;
//     while (n > 9)
//     {
//         n /= 10;
//     }
//     *ptr1 = n;
//     return;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int firstdigit, lastdigit;
//     int *ptr1 = &firstdigit;
//     int *ptr2 = &lastdigit;
//    finded( n,ptr1, ptr2);

//     cout <<firstdigit << " " << lastdigit;
// }




// double pointer 


#include <iostream>
using namespace std;
int main()
{
    int x=4;
    int* y = &x;
    int** z= &y;
    cout<<x<<" "<<y<<" "<<&x<<" "<<z<<" "<<&y<<" "<<endl;

}
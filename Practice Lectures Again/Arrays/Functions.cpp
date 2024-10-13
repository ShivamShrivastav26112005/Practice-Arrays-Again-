// our first function
// function name greeting
// #include<iostream>
// using namespace std;
// void greeting ()
// {
//     cout<<"hi"<<endl;
//     cout<<"hello";
// }
// int main()
// {
//     greeting();

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n" << endl;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }
// }

// upper code write using function
// #include <iostream>
// using namespace std;
// void star(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     star(3);
// }

// sum of two number using function

// #include<iostream>
// using namespace std;
// int sum(int a, int b)
// {
//     return a+b;
// }
// int main()
// {
//     cout<<sum(3,4);
// }

// #include<iostream>
// using namespace std;

// int multi(int x, int y)
// {

//     return x*y;

// }
//  int main()
//  {
//     int a;
//     int b;
//     cin>>a>>b;
//     cout<<multi(a,b);
//  }

// find the minimum value

// #include<iostream>
// using namespace std;
// int minimum(int a, int b)
// {
//     int x;
//     if(a<b)  x=a;
//     else
//      x=b;
//     return x;

// }
//     int main(){
//     cout<<"Enter  the  number ";
//     int a,b;
//     cin>>a>>b;
//     cout<< minimum(a,b);
// }

// find the maximum
// #include<iostream>
// using namespace std;
// int maximum(int x, int y)
// {
//     int a;
//     if(x>y) a=x;
//     else
//     a=y;
//     return a;

// }
// int main()
// {
//     int a, b;
//     cin>>a>>b;
//     cout<<maximum(a,b);
// }

// maximum and minimum

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     // cout<<max(a,b);
//     cout<<min(a,b);
// }

// find the square root
//  #include<iostream>
//  #include<cmath>
//  using namespace std;
//  int main()
//  {
//      cout<<"Enter a ";
//      int a;
//      cin>>a;
//      cout<<sqrt(a);

//  }

// find the factorial
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int fact=1;
//     for(int i=1; i<=n ; i++)
//     { fact*=i; }
//     cout<<fact;
// }





// find the factorial  using function
  // for (int i = 2; i <= a; i++){
  //   fact=fact* i;}



// #include <iostream>
// using namespace std;
// int fact(int a)
// {
//   int fact = 1;
//   for (int i = 2; i <= a; i++){
//     fact=fact* i;}
//    return fact;
//   }
  
// int main()
// {
//   int r;
//   cin>>r;
//   int t=fact(r);
//   cout<<t;
// }



// find the combination ncr and npr permutation

// 3
// 2
// 6 is a factorial 
// 3 is a combination 
// 6 is a permutation


#include<iostream>
using namespace std;
int fact(int a)
{
  int fact=1;
  for(int i=2; i<=a; i++)
  {
    fact*=i;
  }
  return fact;
}

  int combination(int n, int r)
  
   { 
    int ncr = fact(n)/(fact(r)*fact(n-r));
   
  return ncr;
   }

   int permutation(int n, int r)
   {
    int npr= fact(n)/fact(n-r);
    return npr;
   }
int main()
{
  int n;
  cin>>n;
   int r;
  cin>>r;
  int z=fact(n);
  cout<<z<<" is a factorial "<<endl;

  int ncr=combination(n,r);
  cout<<ncr<<" is a combination "<<endl;

  int npr=permutation(n,r);
  cout<<npr<<" is a permutation ";
}






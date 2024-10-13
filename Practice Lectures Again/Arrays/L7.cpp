// pattern printing
// *****
// *****
// *****

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the rows ";
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//         cout<<"*****"<<endl;
//     }
// }

// print using (NESTED LOOPS)

// pattern printing
// AND TAKE INPUT FR0M THE USER
// print this pattern
// ****
// ****
// ****
// ****

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter a rows";
//     cin>>n;
//     int m;
//     cout<<"Enter a columns";
//     cin>>m;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=m; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// print side of square
// means user -> input 2
// then square of the number is star(*)print 4 times.
//**
//** this is print

// #include<iostream>
// using namespace std;
// int main()
// {
//      int n;
//      cout<<"Enter a number";
//      cin>>n;

//     for(int i=1; i<=n; i++)  // outside loop
//     {
//         for(int j=1; j<=n; j++)   // inside loop
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// print this direct
// 1234
// 1234
// 1234
// 1234

// this is a code
// #include<iostream>
//  using namespace std;
//  int main()
// {
//    for(int i=1; i<=4; i++)  // outside loop
//     {
//          for(int j=1; j<=4; j++)   // inside loop
//          {
//              cout<<j;
//          }
//          cout<<endl;
//      }
//  }

// print this pattern take user input if user give 5
// then print (no of rows = no of columns (square))
// 12345
// 12345
// 12345
// 12345  like this

// // only direct print 1234
// #include<iostream>
//  using namespace std;
//  int main()
// {
//    for(int i=1; i<=4; i++)  // outside loop
//     {
//         cout<<i;}}

//  OR the same code is written as ----

// only direct print 1234
// #include<iostream>
//  using namespace std;
//  int main()
// {
//     int n;
//     cout<<"Enter the number ";
//     cin>>n;
//    for(int i=1; i<=n; i++)  // outside loop
//     {
//         cout<<i;
//     }
// }

/*

#include<iostream>
 using namespace std;
 int main()
{
    int n;
      cout<<"Enter a number ";
      cin>>n;
   for(int i=1; i<=n; i++)  // outside loop
    {
         for(int j=1; j<=n; j++)   // inside loop
         {
             cout<<j;
         }
         cout<<endl;
     }
 }
// upper this code is great best of luck






// print this pattern
//take input from the user ex input rows=4, column=4
// ****
// ****
// ****
// ****


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a row number ";
    cin>>n;
    int m;
    cout<<"Enter the column number ";
    cin>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


// *
// **
// ***
// ****


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a row number ";
    cin>>n;
    // int m;
    // cout<<"Enter the column number ";
    // cin>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}





//print this
// ****
// ***
// **
// *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a row number ";
    cin>>n;
  // no of stars = n+1-i
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n+1-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

// print the given pattern
// 1234
// 123
// 12
// 1

// in reverse triangle we use algoriths (i=1 t0 n and j=1 to n+1-i).

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a row number ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n+1-i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}



// print
// 1
// 12
// 123
// 1234
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a row number ";
    cin>>n;
    // int m;
    // cout<<"Enter the column number ";
    // cin>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}


// //print
// 1
// 22
// 333
// 4444




#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a row number ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}



//print this
// 1
// 13
// 135
// 1357

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a row number ";
    cin>>n;
    // here we print only 1357 by two methods
    // for(int i=1; i<=2*n-1; i+=2)

    // Or


    //     int a=1;
    //    for(int i=1; i<=n; i++)
    //    {
    //     cout<<a;
    //     a+=2;
    // }

// this is the real code of the problems

//       for(int i=1; i<=n; i++)
//      {
//         // this only print first "i" odd number
//         for(int j=1; j<=2*i-1; j+=2)
//       { cout<<j;
//      }
//      cout<<endl;
// }


   //Or



      for(int i=1; i<=n; i++)
     {
        int a =1;
        // this only print first "i" odd number
        for(int j=1; j<=i; j++)
      { cout<<a;
      a+=2;
     }
     cout<<endl;
}
}


// print the given pattern
// 1234
// 1234
// 1234
// 1234
#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    cout << "Enter a number ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

// print this 
// ABCD
// ABCD
// ABCD
// ABCD


#include <iostream>
using namespace std;
int main()
{
    int n;
  //  char ch;
    cout << "Enter a number ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout <<(char)(j+64)<<" ";
        }
        cout << endl;
    }
}

//print 
// *****
// *****
// *****

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n ; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<"*";
        }
    
    cout<<endl;
}
}
//print
//    *
//    *
//  * * *
//    * 
//    * 


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int mid = n/2+1;  // for odd 
    for(int i=1; i<=n ; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==mid || j==mid)
            cout<<"*";
            else
            cout<<" ";
        }
    
    cout<<endl;
}


//print 
// *     *
//  *   *
//    *
//  *   *
// *      *

//then we first print
//*
//  *
//    *
//      *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n ; i++)
    {
        for(int j=1; j<=n; j++)
        {
           if (i==j)
           cout<<"*";
           else cout<<" ";
     
        }
    
    cout<<endl;
}
}

//then we first print

// *     *
//  *   *
//    *
//  *   *
// *      *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n ; i++)
    {
        for(int j=1; j<=n+1; j++)
        {
           if (i==j || i+j==n+1)
           cout<< "*";
           else cout<<" ";
     
        }
    
    cout<<endl;
}
}



//print 
// 1
// 23
// 456
// 78910

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a rows ";
    cin>>n;
   // we use extra *(k)variable 
    // here we can't use i, j, we use extra *(k) variable 
    // here i and j mentained only structure 
    int k=1; 
    for(int i=1; i<=n; i++)
    {
      // for(int j=1; j<=n; j++) // print square becoz here use n 
        
        for(int j=1; j<=i; j++)
        {
            cout<<k<<" ";
            k++;
        
    }cout<<endl;
}
}


//print 
// 1
// 0 0
// 1 1 1
// 0 0 0 0

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int a=5;
    for(int i=1; i<=n ; i++){
    if(i%2!=0) a=1;  // row no odd
    else a=0; // row no even 
        for(int j=1; j<=i; j++)
        {
          cout<<a;}
    
    cout<<endl;
}
}


//print 
// 1
// 0 1
// 1 0 1
// 0 1 0 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int a=5;
    for(int i=1; i<=n ; i++){
    if(i%2!=0) a=1;
    else a=0;
        for(int j=1; j<=i; j++)
        {
          cout<<a;
          // flipping
          if(a==1) a=0;
          else a=1;
          
          }
    
    cout<<endl;
}
}


// 2nd methods 



#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int a=5;
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=i; j++)
        {
          if ( (i+j)%2==0) cout<<1;
          else cout<<0;
          }
    
    cout<<endl;
}
}



//print 
// 1
// 12
// 123
// 1234
// 12345


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=i; j++)
        {
          cout<<j;
          }
    
    cout<<endl;
}
}



// the questions is (MAIN QUESTION)
//     *
//    **
//   ***
//  **** 
// ***** 

 // so we first print this 
// *
// **
// ***
// ****
// *****
// code is j<=i

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=i; j++)
        {        
          cout<<"*";      
          }
    
    cout<<endl;
}
}

// THEN WE PRINT THIS 

// ###
// ##
// #
// code is only j<=n+1-i;
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=n+1-i; j++)
        {        
          cout<<"#"; 
          }
    
    cout<<endl;
}
}


// here we take input n=4
//  ###
//  ##
//  #
//
// code is only j<=n+1-i;
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n ; i++)
    { // this loop is for hashes when input is n=4
        for(int j=1; j<=n+1-i-1; j++) // j<=n-i
        {        
          cout<<"#"; 
          
          }
    
    cout<<endl;
}
}




// the questions is (MAIN QUESTION)
// #####*
// ###**
// ##***
// #**** 
// *****



#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n ; i++)
    { // this loop is for hashes 
        for(int j=1; j<=n-i; j++) 
        {        
          cout<<"#";     
          }
          for(int k=1; k<=i; k++)
          {
            cout<<"*";
        }
    cout<<endl;
}
}



// the questions is (MAIN QUESTION)
//     *
//    **
//   ***
//  **** 
// *****


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n ; i++)
    { // this loop is for space  
        for(int j=1; j<=n-i; j++) 
        {        
          cout<<" ";     
          }
          // this loop is for stars 
          for(int k=1; k<=i; k++)
          {
            cout<<"*";
        }
    cout<<endl;
}
}

*/

// 2nd methods use in spacial conditions 
//     *
//    **
//   ***
//  **** 
// *****

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=n; j++) 
        {        
          if((i+j)>=n+1)
          cout<<"*";
          else cout<<" ";
        }
              cout<<endl;
}
}



// print the given pattern 
//    1
//   12
//  123
// 1234
/*

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n ; i++)
    { // this loop is for space  
        for(int j=1; j<=n-i; j++) 
        {        
          cout<<" ";     
          }
          // this loop is for stars 
          for(int k=1; k<=i; k++)
          {
            cout<<k;
        }
    cout<<endl;
}
}

*/



















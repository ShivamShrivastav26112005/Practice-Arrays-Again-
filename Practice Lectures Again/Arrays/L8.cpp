/*


// print the given pattern input n=4.
//    *
//   **
//  ***
// ****

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n+1-i; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<"*";
        }

    cout<<endl;
}
}



// *
//  **
//   ***
//    ****


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n ; i++)
    { // this loop is for space
        for(int j=1; j<=n+i; j++)
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

// print rhombus n=4
//    ****
//   **** 
//  ****
// ****



// so we first print -->  this star which likes a space 
// because when we print space then space can not visible 
// ****
// ***
// **
// *


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1 ; j++)
     { 
          cout<<"*";
     }
        cout << endl;
    }
}


// then second we print this star which 
//which we already print 
// ****
// ****
// ****
// ****

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

// print rhombus n=4
//    ****
//   **** 
//  ****
// ****


#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        // for space 
        for(int j=1; j<=n-i; j++){  // n-i use ulta loop chalane ke liye 
        cout<<" ";
    }
    // this loop only reponsible for printing the stars
    for(int k=1; k<=n; k++){
    cout<<"*";
}
cout<<endl;
}
}



//print this star pyramid
    
//    *
//   ***
//  *****
// *******


// so we first print and then 2nd 
 //   *
//   **
//  ***
// ****

#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"no. of lines ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
  
        for(int j=1; j<=n-i; j++){ 
        cout<<" ";
        }
    for(int k=1; k<=i; k++){
    cout<<"*";
}
cout<<endl;
}
}



// odd star triangle
//    *
//    ***
//    *****

#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n; i++)    // here i means row number , j = column no.
{
    for(int k=1; k<=n-i; k++){
       cout<<" ";
        }
       for(int j=1; j<=2*i-1; j++){
       cout<<"*";
        }
       cout<<endl;
}
}


//  this pattern is also print in this (METHODS)


//    *
//   ***
//  *****
// *******

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the row ";
    cin>>n;
    int nsp=n-1;
    int nst=1;
    for(int i=1; i<=n; i++)
    {
        // spaces
        for(int j=1; j<=nsp; j++)
        {
            cout<<" ";
        }
        nsp--;
        for(int k=1; k<=nst; k++)
        {
            cout<<"*";
        }
        nst+=2; 
        cout<<endl;

    }
}





// print 
//     1
//    333
//   55555
//  7777777
// 999999999

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the row ";
    cin>>n;
    int nsp=n-1;
    int nst=1;
    for(int i=1; i<=n; i++)
    {
        // spaces
        for(int j=1; j<=nsp; j++)
        {
            cout<<" ";
        }
        nsp--;
        for(int k=1; k<=nst; k++)
        {
            cout<<nst;
        }
        nst+=2; 
        cout<<endl;

    }
}





// odd number triangle
//  1234
//  123
//  12
//  1 
#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n; i++)   
{
       for(int j=1; j<=n-i; j++){
       cout<<j;
        }
       cout<<endl;
}
}


// it helps in next program
//     1
//    12
//   123
//  1234
// 12345



#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter of lines ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<k;
        }
    
        cout<<endl;

    }
}


it is used in next problems 
1
21
321

#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n; i++)   
{
       for(int j=i; j>=1; j--){
       cout<<j;
        }
       cout<<endl;
}
}

// this is the main question .
//     1
//    121
//   12321
//  1234321
// 123454321


#include<iostream>
using namespace std;
int main()
{
    int n;
     cout<<"Enter the lines ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<k;
        }    
        for(int l=i-1; l>=1; l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
}



// print
//     *
//    ***
//   *****
//  *******

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        cout<<" ";
    
    for(int k=1; k<=i; k++)
    {
        cout<<"*";
    }
    for(int l=i-1; l>=1; l--)
    {
        cout<<"*";
    }
    cout<<endl;
}
}



//     *
//    ***
//   *****
//  *******
//   *****
//    ***
//     *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"No. of lines ";
    cin>>n;
    int nsp=n-1;   // a new variable
    int nst=1;
    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=1; j<=nsp; j++){
        cout<<" ";
    }
    if(i<=n-1) nsp--;
    else nsp++;
  
    for(int k=1; k<=nst; k++)
    {
        cout<<"*";
    }
    if(i<=n-1) nst+=2;
    else nst-=2;
   cout<<endl;
}
}


// *******
// *******
// *******
// *******
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter he number ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        // this loop is for stars 
        for(int j=1; j<=n+3; j++){
            cout<<"*";     
    }cout<<endl;
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
    cout<<"Enter he number ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        // this loop is for stars 
        for(int j=1; j<=i; j++){
            cout<<"*";     
    }cout<<endl;
}
}



//print the star bridge
// *******
// *** ***
// **   **
// *     *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter he number ";
    cin>>n;
    int m=n-1;  // new lines 
    int nsp=1;
    for(int i=1; i<=2*n-1; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i=1; i<=m; i++)
    {
        // this loop is for stars 
        for(int j=1; j<=m+1-i; j++){
            cout<<"*";     
    }
    // spaces
    for(int k=1; k<=nsp; k++)
    {
        cout<<" ";
    }
    nsp+=2;
    
      {
        // this loop is also for stars 
        for(int j=1; j<=m+1-i; j++){
            cout<<"*";     
    }
cout<<endl;
}
}}



//print the star bridge
// *******
// *** ***
// **   **
// *     *
// first we print this 
// *** ***
// **   **
// *     *


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int m=n-1; //for new line
    int nsp=1; 
    for(int i=1; i<=2*n-1; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m+1-i; j++)
        {
            cout<<"*";

    }
    for(int k=1;k<=nsp; k++)
    {
        cout<<" ";
    }
    nsp+=2;
    for(int j=1; j<=m+1-i; j++)
        {
            cout<<"*";

    }
    cout<<endl;
}
}


// print the given number bridge pattern n=4(input)
// 1234567
// 123 123
// 12   12
// 1     1
  

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int m=n-1;//extra variable becoz when we take input n=4 then loop run only 3 times
    int nsp=1;  // no of space initially initialise 1 
    for(int i=1; i<=2*n-1; i++)
    {
        cout<<i;
    }
    cout<<endl;
        for(int i=1; i<=n ;i++)
    {
        for(int j=1; j<=m+1-i; j++)
        {
            cout<<j;
        }
        for(int k=1; k<=nsp; k++)
        {// for spaces which is increase by 2 in tnext line
            cout<<" ";}
            nsp+=2;
    {
         for(int j=1; j<=m+1-i; j++)
        {
            cout<<j;
        }
 cout<<endl; 
  }
    }}

    

   // print the given number bridge pattern n=4(input)
// 1234567
// 123 567
// 12   67
// 1     7
  //when we print 567 67 7 then we use a extra variable 

  #include<iostream>
  using namespace std;
  int main()
  {
    int n; 
    cout<<"Enter the number ";
    cin>>n;
    int m=n-1;
    int nsp=1; // no of space 
    // for print 1 to n or 7 when input is n=4
     for(int i=1; i<=2*n-1; i++)
    {
        cout<<i;
    }
    cout<<endl;
    for(int i=1; i<=m; i++)
    {
        int a=1;
        for(int j=1; j<=m+1-i; j++)
        {
           cout<<a;
            a++;
        }
        //space 
        for(int k=1; k<=nsp; k++)
        {
            cout<<" ";
              a++;
    }
      nsp+=2;
            //numbers
          for(int j=1; j<=m+1-i; j++)
        {
            cout<<a;
            a++;
        }
        cout<<endl;
    }
  }
  */

//first print 
// 4444444
// 4444444
// 4444444
// 4444444
// 4444444
// 4444444
// 4444444
// input n=4 then print upper value

//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     int n; 
//     cout<<"Enter the number ";
//     cin>>n;
//     for(int i=1; i<=2*n-1; i++){
//         for(int j=1; j<=2*n-1; j++){
//         cout<<n;
//     }
//     cout<<endl;
//  }}




// print number spiral n=4
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

 #include<iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
       int a=i; 
       int b=j;
       if(a>n) a=2*n-i;
       if(b>n) b=2*n-j;
       int x=min(a,b);
       cout<<n-x+1;

 }
  cout<<endl;
  }}
/*
// print the AP -> 1 2 4 8 16 32 using for loop 

#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the number ";
   cin>>n;
  // use separate variables
    int a=1;
   for(int i=0 ; i<=n ; i++)
   {
    cout<<a<<endl;
    a=a*2;
   }
}

// display this AP->100 97 94 .. upto terms which are positive


#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the number ";
   cin>>n;
  // use separate variables
    int a=100;
   for(int i=0 ; i<=n ; i++)
   {
    if(a>0)
    cout<<a<<endl;
    a=a-3;
   }
}


// drecrement operator program 
#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the number ";
   cin>>n;
   for(int i=n; i>=1; i--)
   {
    cout<<i<<endl;
   }
}



#include<iostream>
using namespace std;
int main()
{
    int a=100;
   for(int i=1 ; i<=34 ; i++)
   {
    cout<<a<<endl;
    a=a-3;
   }
}



#include<iostream>
using namespace std;
int main()
{
    int a=100;
   for(int i=1 ;a>0 ; i++)
   {
    cout<<a<<endl;
    a=a-3;
   }
}



#include<iostream>
using namespace std;
int main()
{
    int a=100;
   for( ;a>0;)
   {
    cout<<a<<endl;
    a=a-3;
   }
}



// easy 
#include<iostream>
using namespace std;
int main()
{
   for( int a=100; a>0; a=a-3)
   {
    cout<<a<<endl;
   }
}



// easy 
#include<iostream>
using namespace std;
int main()
{
   for( int i=100; i>0; i=i-3)
   {
    cout<<i<<endl;
   }
} 
// print 1 to 10 using for loops 
#include<iostream>
using namespace std;
int main()
{ 
    for(int i=1; i<=10; i++)
   {
    cout<<i<<endl;
   }
}


// print 1 to 10 using for loops 
// also write in this manner 
#include<iostream>
using namespace std;
int main()
{ 
    int i=1;
    for(;i<=10;)
   {
    cout<<i<<endl;
    i++;
   }
}


// while loops 

// print 1 to 10 using while loops 
#include<iostream>
using namespace std;
int main()
{ 
    int i=1;
   while(i<=10)
   {
    cout<<i<<endl;
    i++;
   }
}
 

// code is write but mistake some points please check again 
#include<iostream>
using namespace std;
int main()
{
     int i=64;
    do
    {
        cout<<i<<endl;
        i++;
        cout<<(char)i;
    }
    while(i<=90);
    
}
*/

#include<iostream>
using namespace std;
int main()
{
    for(int i=65; i<=90; i++)
    {
        cout<<i<<" "<<(char)i<<endl;

    }
}
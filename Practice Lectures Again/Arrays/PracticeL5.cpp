/*   // this is for loops

// print 10 times good morning using loops 
#include<iostream>
using namespace std;
int main()
{
   for(int i=1;i<=10; i++)
    cout<<"good Morning"<<endl;
}


// user input 
#include<iostream>
using namespace std;
int main()
{
    int n;
cout<<"Enter a number ";
cin>>n;
   for(int i=1;i<=n; i++)
    cout<<"good Morning"<<endl;
}

//print number from 1 to 100 using for loops
#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=100; i++)
    {
        cout<<i<<endl;
    }
}




// print all the even number from 1 to 100.
#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=100; i++)
    {
        if(i%2==0)
        cout<<i<<endl;
    }
}



// print all the odd number from 1 to 100.
#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=100; i++)
    {
        if(i%2!=0)
        cout<<i<<endl;
    }
}



//print the table of 10.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    for(int i=1; i<=10; i++)
    {
        cout<<i*n<<endl;
    
    }
}

//or



//print the table of 19.
#include<iostream>
using namespace std;
int main()
{
    for(int i=19; i<=190; i++)
    {
        if(i%19==0)
        cout<<i<<endl;
    
    }
}



// display this AP -> 1,3,5,7,9.....upto 'n' terms.
// nth term is an=a+(n-1)d.
//calculate an=2n-1, and next term add i=i+2.
#include<iostream>
using namespace std;
int main()
{
    int n;
       cout<<"Enter n";
    cin>>n;
  for(int i=1; i<=2*n-1; i+=2)
  cout<<i<<endl;
}


// print 4,7,10,13,16...


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n ";
    cin>>n;
    for(int i=4; i<=3*n-1; i+=3){
        cout<<i;
    }
}

//or

#include<iostream>
using namespace std;
int main()
{
      int n;
    cout<<"Enter n ";
    cin>>n;
    int a=4;  // new variable initilize
    for(int i=1; i<=n; i++)
    {
        cout<<a<<endl;
        a=a+3;
    }
}


// display this GP 1,2,4,8,16,32...upto 'n' terms.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    int a=1;
    for(int i=1; i<=n; i++)
    {
        cout<<a<<",";
        a=a*2;
    }
}


// display 2 6 18 54 
#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter n";
    cin>>n;
    int a=2; // new variable initialize 
    for(int i=1; i<=n; i++)
    {
        cout<<a<<endl;
        a=a*3;
    }
     
}

//display this AP -> 100, 97, 94, ... upto all terms which are poitive.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    int a=100;
    for(int i=1; i<=n ; i++)
    {
        if(a>=1)
        cout<<a<<endl;
        a=a-3;
    }
}

//or

#include<iostream>
using namespace std;
int main()
{ 
    for(int i=100; i>0 ; i=i-3)
    {
        cout<<i<<endl;   
}
}


// While loop .

//syntax.
// int i=1; 
// while(i<5)
// {
//     //code
// }

// print 1 to 10 using while loop 
// print 1 to 10
#include<iostream>
using namespace std;
int main()
{
    int i=1; 
    while(i<=10)
    {
        cout<<i<<endl;
        i++; // i=i+1;
    } 
}


//2 to 11 print 
#include<iostream>
using namespace std;
int main()
{
    int i=1; 
    while(i<=10)
    {
        i++;
        cout<<i<<endl;
       
    } 
}


// give garbage value error becoz here value of i is not assign
#include<iostream>
using namespace std;
int main()
{
    int i; 
    while(i<=10)
    {
     
        cout<<i<<endl;
        i++;
    } 
}


//4200987 garbage value
#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<i;
}


//4200987  garbage value
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    cout<<k;
}




// print 1 using while loop 
// run -> 1 output
#include<iostream>
using namespace std;
int main()
{
    int i=1; 
    while(i==1)
    {
        cout<<i<<endl;
        i++;
    }
}



*
// print zero using while loop 
// output 0.
#include<iostream>
using namespace std;
int main()
{
    int i=1; 
    while(i==1)
    {
        // cout<<i<<endl;
        i=i-1;;
        cout<<i;
    }
}




// do while lops -> this loops runs once always 
syntax
do
{
    //code
}
while (condition);



//print 1 to 100 using do while loop
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    do
     {
        cout<<i<<endl;
        i++;
     }
     while (i<=10);
    
}
   


// print 1 to 100 using do while loop 
#include<iostream>
using namespace std;
int main()
{
    int a=1;
    do
    {
        cout<<a;
        a++;
    }
    while(a<=100);
}


//print given number is even using do while loop.
#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cout<<"Enter n";
    cin>>n;
      int i=1;
    do
     {
        if(i%2==0)
        cout<<i<<endl;
        i++;
     }
     while(i<=n);
 }
    


*

   //print given number is odd using do while loop.
#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cout<<"Enter n";
    cin>>n;
      int i=1;
    do
     {
        if(i%2!=0)
        cout<<i<<endl;
        i++;
     }
     while(i<=n);
 }
   
     */


  // print all alphabets ( uppercase )  with thier ASCII value using do while loop.
  // 65A to 90Z

#include<iostream>
using namespace std;
 int main()
 {
    int i=1;
    do
     {
        if(i>=65 && i<=90)
        cout<<i<<char(i)<<endl;
        i++;
     }
     while(i>0);
 }



















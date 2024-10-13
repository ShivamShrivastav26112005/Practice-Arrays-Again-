/*
#include<iostream>
using namespace std;
void greetting()  //void is return type and greetting is fun name
{
  cout<<"hi"<<endl;
  cout<<"hello"<<endl;
}
int main()
{
    greetting(); ;// function calling 
    greetting();
    greetting();
}



#include<iostream>
using namespace std;
void starTriangle(int x){
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=i; j++)
       { cout<<"*";
    }
    cout<<endl;
}
}
int main()
{
    starTriangle(3); // fun calling and 3 is the argument 
    // x ki value 3 h 
    
    starTriangle(4); 
    starTriangle(5); 

}




//also write this 
#include<iostream>
using namespace std;
void starTriangle(int x){
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=i; j++)
       { cout<<"*";
    }
    cout<<endl;
}
}
int main()
{
    starTriangle(3); // fun calling and 3 is the argument 
    // x ki value 3 h 
    cout<<"hi";
    
    starTriangle(4); 
    cout<<"hello";
    starTriangle(5); 
    cout<<"bye";

}

#include<iostream>
using namespace std;
int sum(int x, int y)
{
    return x+y;
}
int main()
{
    cout<<sum(4,4);
}



//print mininum of the given two number using if else 
#include<iostream>
using namespace std;
int main()
{
   int x, y;
   cin>>x>>y;
   if(x>y)  cout<<y;
   else cout<<x;
}

  // this is the inbuilt functins 
#include<iostream>
using namespace std;
int main()
{
   int x, y;
   cin>>x>>y;
cout<<min(x,y);
}



// we built our own min function 
#include<iostream>
using namespace std;
int minimum(int x, int y)
{
    int a;
    if(x<y) a=x;
    else a=y;
     return a;
}
int main()
{
    int x,y;
    cin>>x>>y;
   cout<<minimum(x,y);
}

// permutation and Combination 
//solve using for loop



// find n factorial.
#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter n ";
   cin>>n;
   int nfact = 1;  // new variable make 
   for(int i=2; i<=n; i++)
   {
    nfact*=i;
   }
   cout<<nfact<<endl;
}



// first Combination 

#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter n ";
   cin>>n;
   int r;
   cout<<"Enter r ";
   cin>>r;
   // find first n!
   int nfact = 1;  // new variable make 
   for(int i=2; i<=n; i++)
   {
    nfact*=i;
   }
      cout<<nfact<<endl;

   // sceond find r!
   int rfact = 1;  
   for(int i=2; i<=r; i++)
   {
    rfact*=i;
   }
   cout<<rfact<<endl;

   // (n-r)!
     int nrfact = 1;  
   for(int i=2; i<=n-r; i++)
   {
    nrfact*=i;
   }
  

  int ncr; // new variable always use new variable 
  ncr= nfact/(rfact*nrfact);
  cout<<ncr;


}



// first Combination 
// solve using function

#include<iostream>
using namespace std;
int fact(int x)
{
    int f=1; 
    for(int i=2; i<=x; i++){
    f*=i;}
    return f;
}
int main()
{
   int n;
   cout<<"Enter n ";
   cin>>n;
   int r; 
   cout<<"Enter r";
   cin>>r;
   int nfact=fact(n);
   int rfact=fact(r);
   int nrfact= fact(n-r);
   int ncr= nfact/(rfact*nrfact);
   cout<<ncr;
}


//or



#include<iostream>
using namespace std;
int fact(int x)  // one function 
{
    int f=1; 
    for(int i=2; i<=x; i++){
    f*=i;}
    return f;
}
int combination(int n, int r)  // another one function 
// es combination ke ander dusri call lag rhi h
{
    int ncr= fact(n)/(fact(r)*fact(n-r)); // 3 fact ko call lag rha h 222
    return ncr;
}
int main()
{
   int n;
   cout<<"Enter n ";
   cin>>n;
   int r; 
   cout<<"Enter r";
   cin>>r;
   int ncr=combination(n,r);  // first calling 229 
   cout<<ncr;
}



// find combination and also permutation 
#include<iostream>
using namespace std;
int fact(int x)  // one function 
{
    int f=1; 
    for(int i=2; i<=x; i++){
    f*=i;}
    return f;
}
int combination(int n, int r)  // second another function 
// es combination ke ander dusri call lag rhi h
{
    int ncr= fact(n)/(fact(r)*fact(n-r)); 
    return ncr;
}
int permutation(int n, int r)  //  third another function 
{
    int npr= fact(n)/fact(n-r);
    return npr;
}
int main()
{
   int n;
   cout<<"Enter n ";
   cin>>n;
   int r; 
   cout<<"Enter r";
   cin>>r;
   int ncr=combination(n,r); 
   int npr=permutation(n,r); 
   cout<<ncr<<endl;
   cout<<npr;
}



// pascal triangle


#include<iostream>
using namespace std;
int fact(int x) 
{
    int f=1; 
    for(int i=2; i<=x; i++){
    f *= i;
    }
    return f;
}
int combination(int n, int r)  
 
{
    int ncr= fact(n)/(fact(r)*fact(n-r)); 
    return ncr;
}
int main()
{
   int n;
   cout<<"Enter n ";
   cin>>n;
      for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++){
            cout<<combination(i,j)<<" ";  //icj
        }
        cout<<endl;
    }

    }
 




// optimised to solve 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n ";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        int curr=1;
        for(int j=0; j<=i; j++)
        {
            cout<<curr<<" ";
            curr=curr*(i-j)/(j+1);
        }
     cout<<endl;
}
}






// sum of the two number using functions
#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int c=a+b;
    return c;
}
int main(){
    int a;
    cout<<"Enter a";
    cin>>a;
    int b;
    cout<<"Enter b";
    cin>>b;

    cout<<sum(a,b);
}




// default values of arguments
#include<iostream>
using namespace std;
void fun(int x, int y)
{
    cout<<x<<" "<<y;
    }
int main()
{
    int x=2;  
    int y=2;
    fun(x,y);
}
// run 2 2

#include<iostream>
using namespace std;
void fun(int x, int y)
{
    cout<<x<<" "<<y;
    }
int main()
{
    int x=2;  
    int y=2;
    fun(3,3);
}


//run 3 3
#include<iostream>
using namespace std;
void fun(int x, int y)
{
    cout<<x<<" "<<y;
    }
int main()
{
    int x=2;  
    int y=2;
    fun();
}


//error becoz no arguments is passed





#include<iostream>
using namespace std;
void fun(int x=3, int y=4)
{
    cout<<x<<" "<<y;
    }
int main()
{
    int x=2;  
    int y=2;
    fun();
}


// run default value x->3, y->4
*
#include<iostream>
using namespace std;
void fun(int x=3, int y=4)  ///default value
{
    cout<<x<<" "<<y;
    }
int main()
{
    int x=2;  
    int y=2;
    fun(x,y);
}




// find gcd(greatest common divisor) of the two numbers
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    int hcf=1;
    for(int i=1; i<=min(a,b); i++)
    {
        if (a%i==0 && b%i==0)
        {  
            hcf=i;  }}
        return hcf;
  
}
int main()
{
    int a; 
    cout<<"Enter 1st number"<<endl;
    cin>>a;
    int b;
    cout<<"Enter second number"<<endl;
    cin>>b;
   cout<<gcd(a,b);
}




// factorial of the n numbers
// half true 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }
    cout<<fact;
}



#include<iostream>
using namespace std;
int fact(int n)
{
    int fact=1;
    for(int i=1; i<=n ;i++)
    {
        fact*=i;
}
return fact;
    }
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;

    for(int i=1; i<=n; i++)
    {    int fact=1;
        for(int j=2; j<=i; j++){
           fact*=j;
    }
    cout<<fact<<endl;
}


}







//swap of two number using extra variable
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter a and b ";
    cin>>a>>b;
    int temp =a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
}


//swap of two number without  using extra variable
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter a nad b ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
}

*/


//swap of two number using functions
// swap nhi hua 
#include<iostream>
using namespace std;
void swap(int a, int b)
{
  int temp=a;
  a=b;
  b=temp;
  return ;
}
int main()
{
    int a, b;
    cout<<"Enter a and b ";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}
// 3 4
//3  4 same print hua h









   



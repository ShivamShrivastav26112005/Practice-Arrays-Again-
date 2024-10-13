 /*
  // Write a program(WAP) to check if a number is prime or not.
 // break; -> loops -> end.
// this is 1st methods.


 #include<iostream>
 using namespace std;
  int main()
  {
    int n,i;
    bool isprime= true;
    cout<<"Enter a positive integer";
    cin>>n; 
    for(int i=2; i<n/2; ++i)
    {
        if(n%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime)
    cout<<"prime";
    else
    cout<<"not a prime";
    return 0;
  }
  
      

// take input from the user and say that it is prime or not. 


//this is 2nd methods and easy to understand.
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter n ";
  cin>>n;
  bool flag= true; // true means prime
  for(int i=2; i<=n-1; i++)
  {
     if (n%i==0)
     flag=false; // not a prime means composite
     break;
  }
  if(flag==true) // after running loop if flag==true means it is a prime  
  cout<<"Prime";
  else
  cout<<"Composite";
  return 0;

}




//take input from the user and say that it is prime or not.

#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter n ";
  cin>>n;
  bool flag= true; // true means prime
  for(int i=2; i<=n-1; i++)
  {
     if (n%i==0)
     flag=false; // not a prime means composite
     break;
  }
  // in case of 1 
  if (n==1)  cout<<"1 is either prime nor composite";// when it is true then further loop not run
  else if(flag==true) // after running loop if flag==true means it is a prime  
  cout<<"Prime";
  else
  cout<<"Composite";
  return 0;

// }


 // continue statements 
 #include<iostream>
 using namespace std;
  int main()
  {
    int x=4, y=0, z;
    while(x>=0)
    {
        x--;
        y++;
        if(x==y)
        continue;
        else
        cout<<x <<y<<endl;
        }    }
  

  */























 
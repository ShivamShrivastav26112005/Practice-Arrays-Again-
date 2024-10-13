/*


// take positive integer input and tell if it is even or odd

#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<"Enter the number "<<endl;
   cin>>a;
   if (a%2==0)
   {
    cout<<"This is even number "<<endl;
   }
   //else (we also write else)
   if (a%2!=0)
  // cout<<"This is odd number "<<endl;  right 
   {
    cout<<"This is odd number "<<endl;
   }

}


 //take positive integer input and tell if it is divisible by 5 or not 
#include<iostream>
using namespace std;
int main()
{
  
   int a;
   cout<<"Enter the number "<<endl;
   cin>>a;
   if (a%5==0)
   {
    cout<<"yes"<<endl;
   }
    else 
    {
    cout<<"no"<<endl;
   }
}


#include<iostream>
using namespace std;
int main()
{
      int a;
   cout<<"Enter the number "<<endl;
   cin>>a;
   if (a>0)
   {
    cout<<a;
   }
   else  // else means a<=0
   {
    cout<<-a;
   }


} 

// important 
#include<iostream>
using namespace std;
int main()
{
int a;
   cout<<"Enter the number "<<endl;
   cin>>a;
   if(a<0)
{
    a=-a;
}
cout<<a;
}


#include<iostream>
using namespace std;
int main()
{
int cost, selling;
cout<<"Enter the cost eand selling price "<<endl;
cin>>cost>>selling;
if (cost>selling)
{
    cout<<"Loss"<<endl;
    cout<<(cost-selling);
}
else
{
    cout<<"Profit"<<endl;
  cout<<(selling-cost);
}
}


#include<iostream>
using namespace std;
int main()
{
    int cp;
    cout<<"Enter the cost price : "<<endl;
    cin>>cp;

      int sp;
    cout<<"Enter the selling price : "<<endl;
    cin>>sp;
    if (sp>cp)
    {
        cout<<"Profit"<<endl<<sp-cp;
    }
  if(sp<cp) 
   {
    cout<<"Loss"<<endl<<cp-sp;
   }
   if(sp==cp)
   {
    cout<<"No Profit, No loss !";
   }
}


// three digit number h ya nhi 
#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<"Enter a number ";
   cin>>a;
   if (a>=100 && a<=999)
   {
      cout<<"yes";
   }
   else 
   {
      cout<<"no";
   }
   return 0;

}

// take positive integer input and tell if it is divisible by 5 and 3.


#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<"Enter a number ";
   cin>>a;
   if (a%5==0 && a%3==0)
   {
      cout<<"Yes";
   }
   else 
   {
      cout<<"No";
   }
}

// take positive integer input and tell if it is divisible by 5 or 3.


#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<"Enter a number ";
   cin>>a;
   if (a%5==0 || a%3==0)
   {
      cout<<"Yes";
   }
   else 
   {
      cout<<"No";
   }
}
// take 3 positive integers input and print the greatest of them 


#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   // cout<<"Enter 1st number : "
   // cin>>a;
   // cout<<"Enter 2st number : "
   // cin>>b;
   // cout<<"Enter 3st number : "
   // cin>>c;
   cout<<"Enter a number ";
   cin>>a>>b>>c;
   if ( a>b && a>c)
   {
      cout<<"a is greater";
   }
   if ( b>a && b>c)
    {
      cout<<"b is greater";
    }
    if ( c>a && c>b)
    {
      cout<<"c is greater";
    }
  
}
*/

// calculate the ascii value 
#include<iostream>
using namespace std;
int main()
{
   char ch;
   cout<<"Enter the character "<<endl;// character is like ! @ # $ % ^ ABC abc () 123
   cin>>ch;
   cout<<ch<<endl;
   // ascii value of num1 which is integer
   cout<<(int)ch;

}

// write a program to check whether a character is an alphabet or not.



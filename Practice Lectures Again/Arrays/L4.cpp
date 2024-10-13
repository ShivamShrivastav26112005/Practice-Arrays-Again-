/*

#include<iostream>
using namespace std;
int main()
{
   int x=10 , y=20;
   if(x==y);  //this line is a only instruction 
   // here semi colon show if statements end then run cout 
   cout<<x<<" "<<y; // different instruction and print 
   return 0;
}




#include<iostream>
using namespace std;
int main()
{
    int x=5, y=6;
    if(x==5)
    {
        cout<<x<<endl;
    }
    else;  // only a block
    cout<<y;  // this will print 
    return 0;
}


// ternary operator problems 
// syntax 
// condition 1 ? true : false ; 

#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter the marks ";
    cin>>marks;
    marks>33 ? cout<<"Pass" : cout<<"Fail";
    
}


// Write a program to input week number (1-7)
// and print day of week name using switch case.

#include<iostream>
using namespace std;
int main()
{
    int week;
    cout<<"Enter the week number "<<endl;
    cin>>week;
    switch(week){
    case 1:
    cout<<"Monday";
    break;
    case 2:
    cout<<"Tuesday";
       break;
    case 7:
    cout<<"Saturday";
       break;
    default:
    cout<<"Invalid";
    return 0;
}
}


// write a program to input month number and print number of days month using 
// switch case.
#include<iostream>
using namespace std;
int main()
{
    int month;
    cout<<"Enter the month number "<<endl;
    cin>>month;
    switch(month)
    {
        case 1: // Jan
            cout<<"31";
            break;
         case 2:
            cout<<"28";
            break;
        case 3:
            cout<<"31";
            break;
         case 4:
            cout<<"30";
            break;
        case 5:
            cout<<"31";
            break;
        case 6:
            cout<<"30";
            break;
        case 7:
            cout<<"31";
            break;
         case 8:
            cout<<"31";
            break;
        case 9:
            cout<<"30";
            break;
        case 10:
            cout<<"31";
            break;
        case 11:
            cout<<"30";
            break;
        case 12:
            cout<<"31";
            break;

    }
}
   
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the month number "<<endl;
    cin>>x;
    // 1 3 5 7 8 10 12 -> 31 days 
    // 4 6 9 11 -> 30 days 
    // 2 -> 28 days 
switch(x<=7 && x%2!=0)
    {
      case 1:
      cout<<"31";
    }
    switch(x>=8 && x%2==0)
    {
        case 1: 
        cout<<"31";
    }
    switch(x==4 || x==6 || x==9 || x==11)
    {
        case 1: 
        cout<<"30";
    }
    switch(x)
    {
        case 2:
        cout<<"28";
    }
}


#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the month number "<<endl;
    cin>>x;
    // 1 3 5 7 8 10 12 -> 31 days 
    // 4 6 9 11 -> 30 days 
    // 2 -> 28 days 
switch((x<=7 && x%2!=0) || (x>=8 && x%2==0))
    {
      case 1:
      cout<<"31";
    }
    switch(x==4 || x==6 || x==9 || x==11)
    {
        case 1: 
        cout<<"30";
    }
    switch(x)
    {
        case 2:
        cout<<"28";
    }
}


// program to make a calculator using switch case and function 
// take two numbers and operator from the user 
#include<iostream>
using namespace std;
int main()
{
    int a, b ;
    char op;
    cout<<"Enter the number to calculate ";
    cin>>a>>op>>b;
    if (op=='+') cout<<a+b;
       if (op=='-') cout<<a-b;
          if (op=='*') cout<<a*b;
             if (op=='/') cout<<a/b;
}
*/

#include<iostream>
using namespace std;
int main()
{
    int a, b ;
    char o;
    cout<<"Enter the number to calculate ";
    cin>>a>>o>>b;
    switch(o)
    {
           case '+':
        cout<<a+b;
        break;
           case '-':
        cout<<a-b;
        break;
           case '*':
        cout<<a*b;
        break;
           case '/':
        cout<<a/b;
        break;
    }

}



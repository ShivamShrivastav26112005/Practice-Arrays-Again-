/*
// ternary operator 
// syntax condition ? true : false
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the marks ";
    cin>>n;
    n>33 ? cout<<"pass" : cout<<"fail";


}






#include<iostream>
using namespace std;
int main()
{
char c;
int a=2;
c=(a>0) ? 'a' :  'S';
cout<<c<<endl;
cout<<a;
}



// switch case
// this is the alternative of if else statements
// syntax
// switch(integer expression)
// {
//     case constant 1;
//     // code 
//     break;
//      case constant 2;
//     // code 
//     break;
//      case constant 3;
//     // code 
//     break;
// }






#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the marks ";
    cin>>n;
    switch(n)
    {
       case 1:
       cout<<"hi";
       break;

        case 2:
       cout<<"hii";
       break;
       
        case 3:
       cout<<"hiii";
       break;
       
        case 4:
       cout<<"hiiii";
       break;
       
        case 5:
       cout<<"hiiiii";
       break;
           
    }      
}



// make a calculator using switch case
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter a and b";
    cin>>a>>b;

    char op;
    cout<<"Enter the operator";
    cin>>op;
    switch(op)
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

        case '%':
        cout<<a%b;
        break;
    }
}



// input week number print day of week number using switch case.
#include<iostream>
using namespace std;
 int main()
{
    int week ;
    cout<<"Enter week number";
    cin>>week;
    switch(week)
    {
    case 1:
    cout<<"Sunday";
    break;
      case 2:
    cout<<"Monday";
    break;
      case 3:
    cout<<"Tuesday";
    break;
      case 4:
    cout<<"Wednesday";
    break;
      case 5:
    cout<<"Thursday";
    break;
      case 6:
    cout<<"Friday";
    break;
      case 7:
    cout<<"Saturday";
    break;
      default:
    cout<<"Invalid";
    break;

    }
}



// write a program to input month number and print total number of days in month using switch case.
#include<iostream>
using namespace std;
int main()
{
    int month;
    cout<<"Enter a month number";
    cin>>month;
    switch(month)
    {
        case 1:
        cout<<31;
        break;
          case 2:
        cout<<28;
        break;
          case 3:
        cout<<31;
        break;
          case 4:
        cout<<30;
        break;
          case 5:
        cout<<31;
        break;
          case 6:
        cout<<30;
        break;
          case 7:
        cout<<31;
        break;
          case 8:
        cout<<31;
        break;
          case 9:
        cout<<30;
        break;
          case 10:
        cout<<31;
        break;
          case 11:
        cout<<30;
        break;
          case 12:
        cout<<31;
        break;

    }
}



//    Also wrrite in this methods


#include<iostream>
using namespace std;
int main()
{
    int month;
    cout<<"Enter a month number";
    cin>>month;
    switch((month<=7 && month%2!=0) || (month>=8 && month%2==0))
    {
        case 1:
        cout<<"31";
    }
    switch((month==4 || month==6 || month==9 || month==11))
    {
        case 1:
        cout<<"30";
    }
    switch(month)
    {
        case 2:
        cout<<"28";
    }
    
}
      
*/

































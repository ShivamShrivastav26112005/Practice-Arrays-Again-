/*
// take positive integer input and tell if is even or odd
 #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the positive integer "<<endl;
    cin>>n;
    if(n%2==0)
    {
        cout<<"even";}
        else
        cout<<"odd";

    return 0;

}

// take positive integer input and tell if is divisible by 5 or not

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the positive integer ";
    cin>>n;
    if (n%5==0)
    {
        cout<<"YES";}
        else
        cout<<"nO";
    }


//Given an integer and print the absolute value of that integer.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the integer ";
    cin>>n;
    if(n>0)
    {
        cout<<n;
    }
    else
    cout<<-n;
}


// if cost price and selling price of an items as input through the keyboard. write a program
// to dertermine whether the seller has made profit or incurrent loss.
// Also dertermine how much profit he made or loss he incurrent

#include <iostream>
using namespace std;
int main()
{
    int cp, sp;
    cout << "Enter cost price and selling price ";
    cin >> cp >> sp;
    if (sp > cp)
    {
        cout << "profit"<<endl;
        int profit = sp - cp;
    cout <<" profit"<<profit<<endl;
    }
    else
        cout << "loss"<<endl;
    int loss = cp - sp;
    cout <<"loss"<<loss<<endl;

}




// take positive number input and tell if it is a three digit number or not.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the positive integer ";
    cin>>n;
    if(n>=100 && n<=999)
    cout<<"yes it is a three digit number ";
    else
    cout<<"no";
    return 0;

}



// take positive integer input and tell if it is divisible by 5 and 3.
// in this question we have given divisible by 5 and 3. not 5 or 3.
// so here we use logical and operator (&&).
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter positive integer input ";
    cin>>n;
    if(n%5==0 && n%3==0)
    {
        cout<<"Yes";}
        else
        cout<<"no";
        return 0;




// take positive integer input and tell if it is divisible by 5 or 3.
// in this question we have given divisible by 5 or 3. not 5 and 3.
// so here we use logical or operator (||).
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter positive integer input ";
    cin>>n;
    if(n%5==0 || n%3==0)
    {
        cout<<"Yes";}
        else
        cout<<"no";
        return 0;

 }



// take three positive integers input and print the greatest of them.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three positive integers input ";
    cin>>a>>b>>c;
    if(a>b && b>c)
    {
        cout<<a<<" is greatest";
    }
     if(b>a && b>c)
    {
        cout<<b<<" is greatest";
    }
     if(c>a && c>b)
    {
        cout<<c<<" is greatest";
    }

}




// write a program to check whether a character is an alphabet or not.
ascii value of small a to z is 97-122 and A-Z is 65-90.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter character ";
    cin>>ch;
    int ascii= (int)ch;
    if(ascii>=97 && ascii<=122)
    {
        cout<<" yes lower case";
    }
   else if(ascii>=65 && ascii<=90)
    {
        cout<<"yes upper case ";
    }
    else
    cout<<"no";

}


// take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter positive integer ";
    cin >> n;
    if ((n % 5 == 0 || n % 3 == 0) && (n%15!=0))
    {

           cout << "it is divisible by 5 or 3 but not divisible by 15";

    }
    else
        {
          cout <<"it is not divisible by 5 or 3 also not divisible by 15";
       return 0;
    }

}


// take positive integer input and tel if it is divisible by 5 and 3
// using nested if-else
// means ek if else ke andar ek aur if else statements
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the positive integer";
    cin >> n;
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            cout << "Yes it is divisible by 5 and 3";
        }
        else
        {
            cout << " no it is not divisible by 3";
        }
    }
    else
    {
        cout << " no it is not divisible by 5 and 3";
    }
}





// this question is important solve another times 

// take three positive integers input and print the greatest of them.
// using nested if-else statements
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a ,b ,c";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is greatest";
        }
        else
        {
            cout << c << " is greatest";
        }
    }
        else
        {
            if (b > c)
            {
                cout << b << " is greatest";
            }
            else{
                cout << c << " is greatest";
        }
    }

}



//  take input marks and print grade a/t marks 
//1st methods 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter marks ";
    cin>>n;
    if(n>=91 && n<=100)
    {
        cout<<"Excellent";
    }
    if(n>=81 && n<=90)
    {
        cout<<"very good";
    }
    if(n>=71 && n<=80)
    {
        cout<<"good";
    }
    if(n>=61 && n<=70)
    {
        cout<<"can do better";
    }
    if(n>=51 && n<=60)
    {
        cout<<"average";
    }
    if(n>=40 && n<=50)
    {
        cout<<"below average";
    }
    if(n<40)
    {
        cout<<"fail";
    }
}

// 
// 2nd methods 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter marks ";
    cin>>n;
    if(n>=91)
    {
        cout<<"excellent";
    }
    else
    {
        if(n>=81)
        {
            cout<<"very good";
        }
        else{
            if(n>=71)
            {
                cout<<"good";
            }
            else
            {
                if(n>=61)
                {
                    cout<<"can do better";
                }
                else
                {
                    if(n>=51)
                    {
                        cout<<"average";
                    }
                    else
                    {
                        if(n>=40)
                        {
                            cout<<"below average";
                        }
                        else
                        {
                            if(n<40)
                            {
                                cout<<"fail";
                            }
                        }


                    }
                }
            }
        }
    }
}

// 3rd methods
// check again these questions becoz it shows some error 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter marks ";
    cin>>n;
    if(n>=91)
    {
        cout<<"excellent";
    }
    else if (n>=81)
    {
        cout<<"Very good ";
    }
    else if ( n>=71)
    {
        cout<<" good";
    }
      else if ( n>=61)
    {
        cout<<"do better ";
    }
}


// Write a program to check whether a given character is a vowel or a consonant.
// only for small character (a e i o u)
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter character ";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"vowel";
    }
    else
    cout<<"consonant";
}


// take three numbers input and tell if they can be the sides of a triangle.

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter no.";
    cin>>a>>b>>c;
    if((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        cout<<"yes";
    }
    else
    cout<<" no";
}
// done lecture no. 3. practices
// thank you
*/


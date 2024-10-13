/* 
#include<iostream>
using namespace std;
int main()
{
  cout<<min(5,7)<<endl;
  cout<<max(5,6);
}






#include<iostream>
using namespace std;
int main()
{
    int k=35;
   // cout<<(k==35)<<endl<<(k=50)<<endl<<(k>50);
    // k ki value pahle 35 se 50 karo and then k ko print bhi karo
//     // when is is run then c=answer is given is wrong and ans is
// 0
// 50
// 0

    cout<<(k==35)<<endl;
    cout<<(k=50)<<endl;
    cout<<(k>35);
    //this is right
}


// print a=3, b=4, c=5

// *
// **
// ***
// *
// **
// ***
// ****
// *
// **
// ***
// ****
// *****

#include<iostream>
using namespace std;
int main()
{
    int n=3;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++){
        cout<<"*";
        }
    cout<<endl;}
     for(int i=1; i<=4; i++)
      {
        for(int k=1; k<=i; k++){
        cout<<"*";
    }
    cout<<endl;
}
  for(int i=1; i<=5; i++)
      {
        for(int k=1; k<=i; k++){
        cout<<"*";
    }
    cout<<endl;
}
}



#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter the value of a,b,c : ";
  cin>>a>>b>>c;
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=i; j++){
        cout<<"*";
        }
    cout<<endl;}
     for(int i=1; i<=b; i++)
      {
        for(int k=1; k<=i; k++){
        cout<<"*";
    }
    cout<<endl;
}
  for(int i=1; i<=c; i++)
      {
        for(int k=1; k<=i; k++){
        cout<<"*";
    }
    cout<<endl;
}
}

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value of a : ";
    for (int i = 1; i <= 3; i++) // i<=3 means loops run only 3 times
    {
        cin >> a;
        for (int j = 1; j <= a; j++)
        {
            for (int k = 1; k <= j; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}
*/
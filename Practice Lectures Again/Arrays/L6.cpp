/*
// print given number is composite
#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    for(int i=2; i<=n-1; i++)
    {
        if(n%i==0){
        cout<<"Composite no";
        break;
    }
    }
}

// print given number is composite or not
#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    for(int i=2; i<=n-1; i++)
    {
        if(n%i==0){
        cout<<"Composite no";}
        else
      {  cout<<"Not Composite no";
      }
        break;
    }
    }



// print the given number is composite or not

// this is incorrect for the value is 1 nso next code is right
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % 2 == 0)
        {
            cout << "Composite number";
        }
        else if (n % 2 != 0)
        {
            cout << "Prime no";
        }
        break;
    }
}

*/
// using boolean    store the two state when anytime needs 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    bool flag = true ;  // true means prime 
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i== 0)  // 1 is a factor of n 
        {
            flag = false; // false means composite 
            break;
        }}
        if(n==1) cout<<" 1 is neither prime nor composite ";
        else if (flag== true) cout<<"Prime";
        else cout<<"Composite";
}
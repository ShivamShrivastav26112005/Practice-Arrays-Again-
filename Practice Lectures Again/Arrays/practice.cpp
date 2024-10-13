/*

#include<iostream>
using namespace std;
int main()
{
    float x;
    cin>>x;
    int y=(int)x;
    if(y<0) { y=y-1;}
    float z= (float)y;
    x=x-z;
    cout<<x;
}

*/
// Pointers first program
#include<iostream>
using namespace std;
int main()
{
   int a=1;
   int* ptr=&a;  // 0x61ff08 address
   cout<<ptr;
}
// pass by value 
// #include <iostream>
// using namespace std;
// void swap(int a, int b)
// {
//     int temp = a;
//     a=b;
//     b = temp;
//     return ;

// }
// int main()
// {
//     int a, b;
//     cout << "Enter a and b";
//     cin >> a >> b;
//     swap(a, b);
//     cout<<a<<" "<<b;
// }



// show error 


// #include<iostream>
// using namespace std;
// void swap(int &a, int &b)
// {
//     int temp=a; 
//     a=b;
//     b=temp;
//     //   cout<<a<<" "<<b<<endl;
//     return ;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
 
//     swap(a,b);
//     cout<<a<<" "<<b;
// }


// #include<iostream>
// using namespace std;
// void swap(int* a, int*  b)
// {
//     int temp= *a; 
//     *a=*b;
//     *b=temp;
//     //   cout<<a<<" "<<b<<endl;
//     return ;
// }
// int main()
// {
//    int a=9;
//    int b=8;
 
//     swap(&a,&b);
//     cout<<a<<" "<<b;
// }

//swap function
#include<iostream>
using namespace std;
void swap(int a,int b)  // no swap nhi hoga 
//void swap(int &a,int &b) // yes swap hoga becoz we give address of a,b.
{
    int temp=a;
    a=b;
    b=temp;
    return ;
}
int main()
{
    int a,b;
    cout<<"Enter a and b";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}
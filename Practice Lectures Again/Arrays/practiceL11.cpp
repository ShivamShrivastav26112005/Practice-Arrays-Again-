// // make swap function
// #include <iostream>
// using namespace std;
// int swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     cout<<a<<" "<<b;

// }
// int main()
// {
//     int a, b;
//     cout << "Enter a and b";
//     cin >> a >> b;
//     {
//         swap(a, b);
//     }

// }

// make swap function
// not swap
#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return ;

}
int main()
{
    int a, b;
    cout << "Enter a and b";
    cin >> a >> b;
    {
        swap(a, b);
 
     cout<<a<<" "<<b;
}
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5];  // 5 is the size of array
//     arr[0]=1; // index of array starts from 0
//     arr[1]=2;  // index =s ize - 1
//     arr[2]=3;
//     arr[3]=4;
//     arr[4]=5;
//      arr[5]=6;
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
//     cout<<arr[4]<<endl;

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//      int arr[5]= { 1,2,3,4,5};
//      //int arr[5]= { 1,2,3,4,5,6};  // eror show

//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
//     cout<<arr[4]<<endl;

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//      int arr[5]= { 1,2,3,4,5};
//      //int arr[5]= { 1,2,3,4,5,6};  // eror show

//     cout<<arr[0]<<endl;

//     cout<<arr[4]<<endl;

// #include<iostream>
// using namespace std;
// int main()
// {
//      int arr[5]= { 1,2,3,4,5};

//     cout<<arr[0]<<endl;
//     arr[0]=3;  // update
//     cout<<arr[0]<<endl;

// }

// Array print -> Methods using for loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     for(int i=0; i<=4;i++)  // i<=4 means i=0(index starts ->0 ) to i=size = index - 1;
//     {
//         cout<<arr[i];
//     }

// }

// array input
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter array";
//     int arr[5];
//     cin >> arr[0];
//     cin >> arr[1];
//     cin >> arr[2];
//     cin >> arr[3];
//     cin >> arr[4];
//     cin >> arr[5];
//     cin >> arr[6];
//     cin >> arr[7]; // input many take
//     cout<<"print array";
//     for (int i = 0; i <= 4; i++) // but output depend upon condition (4(index)-> size 5)
//     {
//         cout << arr[i];
//     }
// }

// input take easy method using for loop.

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<"enter the array";
//     int arr[5];
//     for(int i=0; i<=4; i++) // i is a index 0 to 4 (size=5)
//     {
//         cin>>arr[i];
//     }
//     cout<<"print the array";
//     for (int i = 0; i <= 4; i++) // but output depend upon condition (4(index)-> size 5)
//     {
//         cout << arr[i];
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[6];
//     cout << "enter the students marks";
//     for (int i = 0; i <= 5; i++)
//     {
//     cin >> arr[i];
//     }
//     for (int i = 0; i <= 5; i++)
//     if (arr[i] < 35)
//     cout << i << endl;
// }


// n no. of students.
//marks<35 print its index



#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of students";
    cin>>n;
    cout<<"Enter marks of the students";
    int marks[n];
   
    for(int i=0; i<=n-1; i++)
    {
        cin>>marks[i];
    }
    cout<<"Enter the index whose marks > 35"<<endl;
    for( int i=0; i<=n-1; i++)
    {
        if(marks[i]<35)
        cout<<i<<endl;
    }
}
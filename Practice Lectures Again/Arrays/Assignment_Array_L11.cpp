

// this is only lecture questions which we write in our notebook
// or we can say that theory parts



// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[ 2];
//     arr[0] = 1;
//     arr[1] = 11;
//     arr[2] = 111;
//     arr[3] = 1111;
//     arr[4] = 11111;
//     cout << arr[0] << endl;
//     cout << arr[1] << endl;
//     cout << arr[2] << endl;
//     cout << arr[3] << endl;
//     cout << arr[4] << endl;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     cout<<arr[4]<<endl;//5
//     cout<<arr[6]; //error and garbage value 6422320
// }

// index=size-1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     cout<<arr[5]<<" "; // 5 is a index 
//     arr[5]=89; //updation 
//     cout<<arr[5];
//     // 6 89
// }



// input/output array using for loops
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size ";
//     cin>>n;

//    // print array using for loops
//    int arr[n];
//    for(int i=0; i<n; i++)
//    {
//     cin>>arr[i];
//    }
//    for(int i=0; i<n; i++)
//    {
//     cout<<arr[i];
//    }
// }
// Enter the size 3 // elements = 3 that is 1,2,3
// and index starts from 0,1,2
// 1
// 2
// 3
// 123



// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[7]; //size=7-> means -> elements also = 7, index=size-1, 7-1=6
//     for(int i=0; i<=6;i++) //index i=0 to n-1
//     {
//         // index starts from zero (0)
//         cin>>arr[i];
//     }
//     for(int i=0; i<=6;i++)
//     {
//         cout<<arr[i];
//     }
// }


// Ques.1-> Calculate the sum of all the elements in the given array?
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3]={1,2,3};
//     for(int i=0; i<=2; i++){ // (i) starts from zero which is a index
//     cout<<arr[i]<<" ";//123
//     }
//     cout<<endl;
//     int sum=0;
//        for(int i=0; i<=2; i++){
//     sum=sum+arr[i];}
//     cout<<sum;

// }
//1 2 3 
// 6













// important 

// Ques.2-> print sum of n no.s of the array take user input of no.
// size = no. of elements 
// index= size-1
// size = n;  index= n-1;  i=0 to i=n-1.



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n size ";
//     cin>>n;
//    int arr[n];
   
//    // for input
//    for(int i=0; i<=n-1; i++)
//    {
//     cin>>arr[i];
//    }
//    // for output
//    for(int i=0; i<=n-1; i++)
//    {
//     cout<<arr[i]<<" ";
//    }

//    cout<<endl;

//    int sum=0; 
//    for(int i=0; i<=n-1; i++){
//    sum=sum+arr[i];
//    }
//    cout<<sum<<endl;
// }


/*
// q.5->find the element x in the array. Take array and x as input.


#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cout<<"Enter the array size "<<endl;
    cin>>n;
     int arr[n];

    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    int x;
    cout<<"Enter the x for finding ";
    cin>>x;

//search
   bool flag=false;
    for(int i=0; i<=n-1; i++)
 {
    if(arr[i]==x)
 flag=true;
 }
 if(flag==true)
    cout<<" present ";
else
    cout<<" not present "; 

 }

 */
// Enter the array size 
// 3
// 1
// 2
// 3
// 1 2 3 Enter the x for finding 6
//  not present









// q-> find the maximum value out of all the elements in an array?
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the size of an array ";
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<=n-1; i++){
//     cin>>arr[i];
//     }
//     for(int i=0; i<=n-1; i++){
//     cout<<arr[i]<<" ";
//     }
//     cout<<"max elements is ";
//     int max=0;
//      for(int i=0; i<=n-1; i++)
//     if(max<arr[i]) max=arr[i];
//     cout<<max;

// }
//It takes only 10 elements which is size given by user.And find max for them.
// enter the size of an array 10
// 1 2 5   6  5 6 8 25 3 5 6 6 6 6 5 5 6 6 6 6 66 6 6 6 6 6 6 66 6 6 666 6 46 565 6
// 1 2 5 6 5 6 8 25 3 5 max elements is 25


/*
// ques.6-> count the no. of elements in given array greater than a given no. x.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of an array ";
    cin>>n;

    int arr[n];
    for(int i=0; i<=n-1; i++){
        //input array
    cin>>arr[i];
    }
    for(int i=0; i<=n-1; i++){
        //output array 
    cout<<arr[i]<<" ";
    }
  {
    //input x
     int x;
    cout<<"enter x "<<" ";
    cin>>x;
    //check
      int count=0;
       for(int i=0; i<=n-1; i++)
    if(arr[i]>x) 
    count++;  
    //print 
    cout<<count<<" no. are greater";

}}
// enter the size of an array 5
// 35
// 62
// 58
// 65
// 23
// 35 62 58 65 23 enter x  25
// 4 no. are greater

*/

// this is our assignment questions which is given by PW.
// lecture - 11

// Q.1-> calculate the product of all the elements in the given array.

// #include<iostream>
// using namespace std; 
//  int main()
//  {
//     int n;   
//       cout<<"Enter array size ";
//      cin>>n;

//     int arr[n];
//     // cout<<arr[5]<<" "; // error given garbage value 4200960 
//     for(int i=0; i<=n-1; i++)
//     {
//     cin>>arr[i];
//     }

//     for(int i=0; i<=n-1; i++)
//     {
//     cout<<arr[i]<<"  "<<endl;
//     }



//       int product=1;
//       for(int i=0; i<=n-1; i++)
//     {
//         product*=arr[i];}
//         cout<<product;



//  }
 

//  Q.2-> Find the second largest elements in the given array 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,12,3,24,55};
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     int max=0;
//     for(int i=0; i<5; i++)
//     if(max<arr[i]) max=arr[i];
//     cout<<"This is the maximum no. given all of them "<<endl;
//     cout<<max<<endl;

//     int smax=arr[0];
//     for(int i=0; i<5; i++)
//      if(arr[i]!=max && smax<arr[i]) smax=arr[i];
//     cout<<"This is the second maximum no. given all of them "<<endl;
//     cout<<smax;
// }
// 1 12 3 24 55 This is the maximum no. given all of them 
// 55
// This is the second maximum no. given all of them
// 24




/*
// breafly solve this ques.
// and also step by step

//  Q.2-> Find the second largest elements in the given array?

// find max elements and sencond maximum elements take input from the user.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the elements size ";
    cin>>n;

    int  arr[n];
    // input
   cout<<"Enter the inputs "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
     // output 
      cout<<"Display the inputs "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }

     cout<<endl;

    int max=0;
    for(int i=0; i<=n-1; i++)
    {
        if(max<arr[i]) max=arr[i];
    }
    cout<<"Maximum elements is "<<endl;
    cout<<max<<endl;

    int smax=0;
    for(int i=0;i<= n-1; i++)
    {
        if(arr[i]!=max && smax<arr[i])  smax=arr[i];
    }
        cout<<"Second maximum elements is "<<endl;
        
    cout<<smax<<endl;


}


// Enter the elements size 5
// Enter the inputs 
// 36
// 32
// 65
// 23
// 36
// Display the inputs
// 36 32 65 23 36
// Maximum elements is
// 65
// Second maximum elements is
// 36
*/




/*
// assig.ques.2-> Find the second largest elemenets in the array in one pass?







#include<iostream>
using namespace std;
int main()
{



    int n;
    cout<<"Enter the elements size ";
    cin>>n;

    int  arr[n];
    // input
   cout<<"Enter the inputs "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
     // output 
      cout<<"Display the inputs "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }

     cout<<endl;




    int max=0;
    for(int i=0; i<=n-1; i++)
    {
        if(max<arr[i]) max=arr[i];
    }

    int slar=0;
    for(int i=0;i<= n-1; i++)
    {
        if(arr[i]!=max && slar<arr[i])  slar=arr[i];
    }
        cout<<"Second largest element is "<<endl;
        
    cout<<slar<<endl;


}

// Enter the elements size 5
// Enter the inputs 
// 3
// 6
// 5
// 9
// 0
// Display the inputs
// 3 6 5 9 0
// Second largest element is
// 6



*/


// assig.ques.3-> Find the minimum value out of all elements in the array?




#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the elements size ";
    cin>>n;

    int  arr[n];
   cout<<"Enter the inputs "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
      cout<<"Display the inputs "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<endl;


// minimum value

    int min;
    for(int i=0; i<=n-1; i++)
    {
        if(min>arr[i]) min=arr[i];
    }
    cout<<min;


}

// Enter the elements size 5
// Enter the inputs
// 3
// 62
// 35
// 2
// 65
// Display the inputs
// 3 62 35 2 65
// 2



// important ques and good ques also.
// assig.q.4-> Given an array, predict if the array contains duplicates or not?
























/*

// Enter n5
//   *
//   *
// *****
//   *
//   *




#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    int mid=n/2+1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==mid || j==mid)  cout<<"*";

        else
        cout<<" ";
    }
cout<<endl;
}}

*/

/*
// Enter n5
// *****
// *
// *
// *
// *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    int mid=n/2-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==mid || j==mid)  cout<<"*";

        else
        cout<<" ";
    }
cout<<endl;
}}


*/

// Enter n5
// *
//  *
//   *
//    *
//     *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//        for( int j=1; j<=n; j++)
//        {
//         if(i==j) cout<<"*";

//        else
//        cout<<" ";
//     }
//     cout<<endl;
// }
// }

// Enter n5
//     *
//    *
//   *
//  *
// *

/*


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    for(int i=n-0; i>0; i--)
    {
       for( int j=1; j<=n; j++)
       {
        if(i==j) cout<<"*";

       else
       cout<<" ";
    }
    cout<<endl;
}
}




*/

// Enter n
// 5
// *   *
//  * *
//   *
//  * *
// *   *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++)
//     {
//        for( int j=1; j<=n; j++)
//        {
//         if(i==j || i+j==n+1) cout<<"*";

//        else
//        cout<<" ";
//     }
//     cout<<endl;
// }
// }

// Enter n
// 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n"<<endl;
//     cin>>n;
//     int k=1;

//     for(int i=1; i<=n; i++)
//     {
//        for( int j=1; j<=i; j++)
// {
//        cout<<k<<" ";
//        k++;
//     }
//     cout<<endl;
// }
// }

/*


// Enter n
// 4
// 1
// 01
// 101
// 0101

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
       for( int j=1; j<=i; j++)
      if((i+j)%2==0)
      cout<<1;
      else
      cout<<0;
    cout<<endl;
}
}

*/

// Enter n
// 4
// 0
// 10
// 010
// 1010

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n " << endl;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//             if ((i + j) % 2 != 0){
//                 cout << 1;}
//                 else
//                 cout<<0;

//         cout << endl;
//     }
// }

/*




// Enter n
// 4
// 0
// 10
// 010
// 1010

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter n" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++){
            cout << "*";

        }
    cout << endl;
}
}


*/

/*
//  Enter n
// 5
// ****
// ***
// **
// *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter n" << endl;
    cin >> n;
    for (int i =1; i <=n; i++)
    {
        for (int j= n-i; j >0; j--){
            cout << "*";

        }
    cout << endl;
}
}

*/



//  Enter n
// 3
//   *
//  **
// ***

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter n" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) // for row and  cols
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        } // for space
        for (int k = 1; k <= i; k++)
        { // for star
            cout << "*";
        }
    
    cout << endl;
}}


*/

/*

//  Enter n
// 3
//   1
//  12
// 123


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter n" << endl;
    cin >> n;
    int k=1;
    for (int i = 1; i <= n; i++) // for row and  cols
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        } // for space
        for (int k = 1; k <= i; k++)
        { // for star
            cout << k;
        }
    
    cout << endl;
}}

*/
/*

//  Enter n
// 3
//   ***
//  ***
// ***
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter n" << endl;
    cin >> n;
    int k=1;
    for (int i = 1; i <= n; i++) // for row and  cols
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        } // for space
        for (int k = 1; k <= n; k++)
        { // for star
            cout << "*";
        }
    
    cout << endl;
}}


*/

/*
// Enter  n 3
//   *
//  ***
// *****
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter  n ";
    cin>>n;
    
    int nsp=n-1;
    int nst=1;
    //spaces
    for(int i=1; i<=n; i++)
    {
       for(int j=1; j<=nsp; j++)
       {
        cout<<" ";}
        nsp--;
       
    //    cout<<endl;
    
    //stars
        for(int k=1; k<=nst; k++)
       { 
            cout<<"*";}
            nst+=2;
        
        
    cout<<endl;
    }
}
    

    */

   #include<iostream>
   using namespace std; 
   int main()
   {
    int n;
    cout<<"Enter n";
    cin>>n;
   
   int nsp=1;
   int nst=1;
    for(int i=1;i<=n; i++)
    {
         // stars
        for(int k=1; k<=nst ; k++)
        {
            cout<<"*";
        }
            nst++;
    
        //spaces
        for(int j=1; j<=nsp; j++)
        {
            cout<<" ";
        }
            nsp--;
        
       
        cout<<endl;
    
    }

   }
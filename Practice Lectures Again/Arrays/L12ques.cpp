// write a program to copy the contents of one array into another in the reverse order.
// first we make an array

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int>v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(4);
//     v1.push_back(5);
//     v1.push_back(6);
//     v1.push_back(7);
//     // print
//     cout<<"Enter the elements";
//     for(int i=0; i<v1.size();i++)
//     {
//         cout<<v1[i];
//     }
// }

// print 2nd methods we make a function

// #include <iostream>
// #include <vector>
// using namespace std;
// void display(vector<int>& a)
// {
//      for(int i=0; i<a.size();i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }
// int main()
// {
//     vector<int>v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(4);
//     v1.push_back(5);
//     v1.push_back(6);
//     // print
//     display(v1);
//     vector<int>v2(v1.size());
//     for(int i=0; i<v2.size(); i++){
//     int j=v1.  size()-1-i;
//     v2[i]=v1[j];
// }
//   display(v2);
// }



// this is correct reverse -> using extra array
// #include <iostream>
// #include <vector>
// using namespace std;
// void display( vector<int>& a)
//    {
//     for(int i=0; i<a.size(); i++)
//     cout<<a[i]<<" ";
//    }

// int main()
// {
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(4);
//     v1.push_back(5);
//     v1.push_back(6);
  

//     display(v1);
//     vector<int>v2(v1.size());
//     for (int i=0; i<v2.size();i++)
//     {
//         //i+j=size-1
//         //j=size-1-i
//         int j=v1.size()-1-i;
//         v2[i]=v1[j];
        
//     } 
//     display(v2);
//     //      }
// }



// reverse -> without using extra array

#include <iostream>
#include <vector>
using namespace std;
void display( vector<int>& a)
   {
    for(int i=0; i<a.size(); i++)
    cout<<a[i]<<" ";
   }

int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    display(v1);
    
}
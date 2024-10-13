// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     cout<<"f";
// // }

// // sort the array of o's and 1's
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     // value take
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     // print the values
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     sort(v.begin(), v.end());
//     // print
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i];
//     }
//     cout << endl;
// }

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


    // sort(v.begin() , v.end());

     for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
    


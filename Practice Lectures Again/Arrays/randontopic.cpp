//  strings past - 1:

// #include<iostream>
// #include<string>
// using namespace std;
//  int main()
//  {
//     // we make a character
//     // char ch ='e';
//     //  char c ='i';
//     // cout<<ch<<c;

//     // we make a character string
//     char str[]={'a','b','c','d','e'};
//     // size of the string is 5
//     // print 
//     for(int i=0; i<5; i++)
//     {
//         cout<<str[i]<<" ";
//     }
//   //a b c d e 
//  }


// #include<iostream>
// #include<string>
// using namespace std;
//  int main()
//  {
//     cout<<"Shivam Shrivastav is a student";
//     // it is also a string 
//  }


// #include<iostream>
// #include<string>
// using namespace std;
//  int main()
//  {
//     char str[5]="abcd";
//     for(int i=0; i<5; i++)
//     {
//         cout<<str[i]<<" ";
//     }
//     // a b c d  
//  }





// ascii value of the null character 

// #include<iostream>
// #include<string>
// using namespace std;
//  int main()
//  {
//     char ch='\0';
//     cout<<(int)ch; // 0
//      }





// input of the string 
// #include<iostream>
// #include<string>
// using namespace std;
//  int main()
//  {
//     string s;
//     cin>>s;
//     cout<<s;
// // shivam shivastav is a computer science student of galgotias university
// // shivam
// // it does not print all the letter becoz in mid of the two character space is come.
// // getline function solve these problem

//  }






// input of the string 
// #include<iostream>
// #include<string>
// using namespace std;
//  int main()
//  {
//     string s;
//     getline(cin,s);
//     cout<<s;
//     // getline function print also spaces bur only in case of string cin fun can't print 
// // shivam shrivastav is a b tech student of galgotias 
// // university and he is also a compurter science student.
// // shivam shrivastav is a b tech student of galgotias 
// // university and he is also a compurter science student.

//     }





// indexing of the string 



// #include<iostream>
// #include<string>
// using namespace std;
//  int main()
//  {
//     string s={"shivam"};
   
//     cout<<s[0]; //s
//        cout<<s[5]; //m
//           cout<<s[6]; // extra space print means-> not print anything actually me yha '\0' hai.
//       cout<<s[7]; // w or garbage value becoz these index is not exits.
//     }


// question.1-> given two strings s and t, return true if t is an anagram of s and false otherwise.

// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// using namespace std; 
// int main()
// {
//    string s="shivam shri";
//    string t= "shri shivam";
//    sort(s.begin(), s.end());
//    sort(t.begin(), t.end());
//    if(s==t)
//    cout<<true;
//    else
//    cout<<false;
// //    true
// }


// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// using namespace std; 
// int main()
// {
//    string s ="shisssvams";
//    int max=0;
//    for (int i=0; i<s.size(); i++)
//    {
//     char ch = s[i];
//     int count= 1; 
//     for(int j=i+1; j<s.size(); j++)
//     {
//         if(s[j]==s[i]) count++;
//     }
//     if(max<count) max=count;
//    }
//    cout<<max;
//    }


// program for counting 
//    #include<iostream>
//    using namespace std;

//    int main()
//    {


    // int a[]={5,5,5,5,5,5,4,4,6,5,5,4,76,7,4,67,7,4,76,7,6,6,7,6,43,3,43,56,7,8,};
    // int count=0;
    // for(int i=0; i<a.size(); i++)
    // {
    //     cin>>a[i];
    // }
    // for(int i=0; i<a.size(); i++)
    // {
    //     cout<<a[i];
    //     count++;
    // }
    //  cout<<count;
    // cout<<sizeof(a)/sizeof(a[0]);



//   int kitne byte store karta h 
// int a;
// cin>>a;
// cout<<sizeof(a);

// }

// WAP to count the digit of a number


//       #include<iostream>
//    using namespace std;
//    int main()
// {
//   int n;
//   cout<<"Enter the digit";
//   cin>>n;
//   int count=0;
//   while(n>0)

//   {
//     n/=10;
//     count++;
//   }
//   cout<<count;
// }

// WAP to sum of the digit
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     int sum=0;
//     int rem;
//     while(n>0)
//     {
//        rem=n%10;
//        sum+=rem;
//        n/=10;
//     }
//     cout<<sum;
// // enter n123456
// // 21
// }
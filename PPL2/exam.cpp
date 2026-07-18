#include<iostream>
using namespace std;

//Reverse Number

// class Exam{
//     public:
//         void input(int &n)
//         {
//             cout<<"Enter a number::";
//             cin>>n;
//         }

//         int reverseNum(int n)
//         {
//             int ans=0;
//             while(n!=0)
//             {
//                 ans=ans*10+(n%10);
//                 n/=10;
//             }
//             return ans;
//         }
// };

// int main()
// {
//     Exam e;
//     int n;
//     e.input(n);
//     cout<<e.reverseNum(n);
//     return 0;
// }



//Check Palindrome Number

// class Exam
// {
//     public:
//         void input(int &n)
//         {
//             cout<<"Enter a Number::";
//             cin>>n;
//         }

//         bool isPalindrome(int n)
//         {
//             int temp=n;
//             int ans=0;
//             while(n!=0)
//             {
//                 ans=ans*10+n%10;
//                 n/=10;
//             }
//             if(ans==temp)
//                 return true;
//             else
//                 return false;
//         }

// };


// int main()
// {
//     Exam e;
//     int n;
//     e.input(n);
//     if(e.isPalindrome(n))
//         cout<<"Palindrome";
//     else
//         cout<<"Not Palindrome";
//     return 0;
// }


//Check Palindrome string

// class Exam
// {
//     public:
//         void input(string &str)
//         {
//             cout<<"Enter a string::";
//             getline(cin,str);
//         }

//         bool isPalindrome(string str)
//         {
//             int start=0,end=str.size()-1;
//             while(start<end)
//             {
//                 if(str[start]==str[end])
//                 {
//                     start++;
//                     end--;
//                 }
//                 else    
//                     return false;
//             }
//             return true;
//         }
// };

// int main()
// {
//     Exam e;
//     string str;
//     e.input(str);
//     if(e.isPalindrome(str))
//         cout<<"Palindrome";
//     else
//         cout<<"Not Palindrome";
//     return 0;
// }


//Count digits

// class Exam
// {
//     public:
//         void input(int &n)
//         {
//             cout<<"Enter a number::";
//             cin>>n;
//         }

//         int countDigits(int n)
//         {
//             int cnt=0;
//             while(n!=0)
//             {
//                 n/=10;
//                 cnt++;
//             }
//             return cnt;
//         }
// };

// int main()
// {
//     Exam e;
//     int n;
//     e.input(n);
//     cout<<e.countDigits(n);
//     return 0;
// }


//Sum of Digits

// class Exam
// {
//     public:
//         void input(int &n)
//         {
//             cout<<"Enter a number::";
//             cin>>n;
//         }

//         int sumOfDigits(int n)
//         {
//             int sum=0;
//             while(n!=0)
//             {
//                 sum+=n%10;
//                 n/=10;
//             }
//             return sum;
//         }
// };

// int main()
// {
//     Exam e;
//     int n;
//     e.input(n);
//     cout<<e.sumOfDigits(n);
//     return 0;
// }


//Prime Number

// class Exam
// {
//     public:
//         void input(int &n)
//         {
//             cout<<"Enter a number::";
//             cin>>n;
//         }

//         bool isPrime(int n)
//         {
//             if(n<2)
//                 return false;
//             for(int i=2;i*i<=n;i++)
//             {
//                 if(n%i==0)
//                 {
//                     return false;
//                     break;
//                 }
//             }
//             return true;
//         }
// };

// int main()
// {
//     Exam e;
//     int n;
//     e.input(n);
//     if(e.isPrime(n))
//         cout<<"Prime";
//     else
//         cout<<"Not Prime";
// }


//Prime Number in a Range

// class Exam
// {
//     public:
//         void input(int &start,int &end)
//         {
//             cout<<"Enter a Number::";
//             cin>>start >>end;
//         }

//         void prime(int start,int end)
//         {
//             for(int n=start;n<=end;n++)
//             {
//                 if(n<2)
//                     continue;
//                 bool prime=true;
//                 for(int i=2;i*i<=n;i++)
//                 {
//                     if(n%i==0)
//                     {
//                         prime= false;
//                         break;
//                     }
//                 }
//                 if(prime)
//                     cout<<n <<" ";
//             }
            
//         }
// };

// int main()
// {
//     Exam e;
//     int start,end;
//     e.input(start,end);
//     e.prime(start,end);
//     return 0;
// }


//Factorial

// class Exam
// {
//     public:
//         void input(int &n)
//         {
//             cout<<"Enter a number::";
//             cin>>n;
//         }

        // int fact(int n)//long long
        // {
        //     int f=1;//long long
        //     for(int i=1;i<=n;i++)
        //         f=f*i;
        //     return f;
        // }

//         long long fact(long long n)
//         {
//             if(n==0)
//                 return 1;
//             return (n*fact(n-1));
//         }
// };

// int main()
// {
//     Exam e;
//     int n;
//     e.input(n);
//     cout<<e.fact(n);
//     return 0;
// }



//Fibonacci Series

// class Exam
// {
//     public:
//         void input(int &n)
//         {
//             cout<<"Enter a Number::";
//             cin>>n;
//         }

//         int fib(int n)
//         {
//             int fib1=0;
//             int fib2=1;
//             for(int i=1;i<=n;i++)
//             {
//                 cout<<fib1 <<" ";
//                 int fib3=fib1+fib2;
//                 fib1=fib2;
//                 fib2=fib3;
//             }
           
//         }
// };

// int main()
// {
//     Exam e;
//     int n;
//     e.input(n);
//     cout<<e.fib(n);
//     return 0;
// }


//GCD and LCM

// class Exam
// {
//         public:
//                 void input(int &a,int &b)
//                 {
//                         cout<<"Enter a and b::";
//                         cin>>a >>b;
//                 }

//                 int gcd(int a,int b)
//                 {
//                         while(b!=0)
//                         {
//                                 int rem=a%b;
//                                 a=b;
//                                 b=rem;
//                         }
//                         return a;
//                 }

//                 int lcm(int a,int b)
//                 {
//                         return a*b/gcd(a,b);
//                 }
// };

// int main()
// {
//         Exam e;
//         int a,b;
//         e.input(a,b);
//         cout<<e.gcd(a,b) <<endl;
//         cout<<e.lcm(a,b)<<endl;
//         return 0;
// }


//swap two numbers using third and without third

// class Exam
// {
//         public:
//                 void input(int &a,int &b)
//                 {
//                         cout<<"Enter a Number a and b::";
//                         cin>>a >>b;
//                 }

//                 void swap(int a,int b)
//                 {
                        // int temp=a;
                        // a=b;
                        // b=temp;
                        // cout<<"A= " <<a <<endl;
                        // cout<<"B= " <<b;

                        //without third variable

//                         a=a+b;
//                         b=a-b;
//                         a=a-b;
//                         cout<<"A= " <<a <<endl;
//                         cout<<"B= " <<b;
//                 }
// };

// int main()
// {
//         Exam e;
//         int a,b;
//         e.input(a,b);
//         e.swap(a,b);
//         return 0;
// }


//Multiplication table

// class Exam
// {
//         public:
//                 void input(int &n)
//                 {
//                         cout<<"enter a number::";
//                         cin>>n;
//                 }
//                 void table(int n)
//                 {
//                         int ans;
//                         for(int i=1;i<=10;i++)
//                         {
//                                 cout<<n <<"*"<<i<<"= "<< n*i;
//                                 cout<<endl;
//                         }
//                 }

// };

// int main()
// {
//         Exam e;
//         int n;
//         e.input(n);
//         e.table(n);
//         return 0;
// }



//perfect number

// class Exam
// {
//         public:
//                 void input(int &n)
//                 {
//                         cout<<"Enter a Number::";
//                         cin>>n;
//                 }
//                 void perfectNum(int n)
//                 {
//                         int sum=0;
//                         for(int i=1;i<=n/2;i++)
//                         {
//                                 if(n%i==0)
//                                         sum=sum+i;
                                
//                         }
//                         if(sum==n)
//                                 cout<<"Perfect Number";
//                         else
//                                 cout<<"Not";
//                 }
// };

// int main()
// {
//         Exam e;
//         int n;
//         e.input(n);
//         e.perfectNum(n);
//         return 0;
// }


//Reverse String

// class Exam
// {
//         public:
//                 void input(string &str)
//                 {
//                         cout<<"Enter a string::";
//                         getline(cin,str);
//                 }

//                 void reverseStr(string str)
//                 {
//                         int st=0,end=str.size()-1;
//                         while(st<end)
//                         {
//                                 swap(str[st],str[end]);
//                                 st++;
//                                 end--;
//                         }
//                         cout<< str;
//                 }
// };

// int main()
// {
//         Exam e;
//         string str;
//         e.input(str);
//         e.reverseStr(str);
//         return 0;
// }



//Find length of string

// class Exam
// {
//         public:
//                 void input(string &str)
//                 {
//                         cout<<"Enter a string::";
//                         getline(cin,str);
//                 }

//                 int findLen(string str)
//                 {
//                         int cnt=0;
//                         for(int i=0;i<str.length();i++)
//                                 cnt++;
//                         cout<<cnt;
//                 }
// };

// int main()
// {
//         Exam e;
//         string str;
//         e.input(str);
//         e.findLen(str);
//         return 0;
// }


//count vowels and consonent

// class Exam
// {
//         public:
//                 void input(string &str)
//                 {
//                         cout<<"enter a string::";
//                         getline(cin,str);
//                 }
//                 void count(string str)
//                 {
//                         int Vcnt=0,Ccnt=0;
//                         for(char ch:str)
//                         {
//                                 ch=tolower(ch);
//                                 if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
//                                         Vcnt++;
//                                 else
//                                         Ccnt++;    
//                         }
//                         cout<<"Vowels count=" <<Vcnt <<endl;
//                         cout<<"Consonent count=" <<Ccnt ;
//                 }
// };

// int main()
// {
//         Exam e;
//         string str;
//         e.input(str);
//         e.count(str);
//         return 0;
// }



//count words in sentences

// class Exam
// {
//         public:
//                 void input(string &str)
//                 {
//                         cout<<"Enter a string::";
//                         getline(cin,str);
//                 }

//                 void count(string str)
//                 {
//                         int word=1;
//                         for(int i=0;i<str.length();i++)
//                                 if(i==' ')
//                                         word++;
//                         cout<<word;
//                 }
// };

// int main()
// {
//         Exam e;
//         string str;
//         e.input(str);
//         e.count(str);
//         return 0;
// }



//Remove spaces

// class Exam
// {
//         public:
//                 void input(string &str)
//                 {
//                         cout<<"Enter a string::";
//                         getline(cin,str);
//                 }
//                 void removeSpaces(string str)
//                 {
//                         string ans="";
//                         for(char ch:str)
//                                 if(ch!=' ')
//                                         ans+=ch;
//                         cout<<ans;
//                 }
// };

// int main()
// {
//         Exam e;
//         string str;
//         e.input(str);
//         e.removeSpaces(str);
//         return 0;
// }



//convert lowercase to uppercase

// class Exam
// {
//         public:
//         void input(string &str)
//         {
//                 cout<<"Enter a string::";
//                 getline(cin,str);
//         }

//         void LowerToUpper(string str)
//         {
//                 for(char &ch:str)
//                         //ch=toupper(ch);
//                         ch=tolower(ch);
//                 cout<<str;
//         }
// };

// int main()
// {
//         Exam e;
//         string str;
//         e.input(str);
//         e.LowerToUpper(str);
//         return 0;
// }



//Anagram
// #include<algorithm>
// class Exam
// {
//         public:
//         void input(string &s1,string &s2)
//         {
//                 cout<<"Enter a first string::";
//                 getline(cin,s1);
//                 cout<<"Enter a second string::";
//                 getline(cin,s2);
//         }

        // bool isAnagram(string s1,string s2)
        // {
                // if(s1.length()!=s2.length())
                //         return false;
                // if(s1.length()==s2.length())
                // {
                //         sort(s1.begin(),s1.end());
                //         sort(s2.begin(),s2.end());
                // }
                // return s1==s2;
//         }
// };

// int main()
// {
//         Exam e;
//         string s1,s2;
//         e.input(s1,s2);
//         if(e.isAnagram(s1,s2))
//                 cout<<"Anagram";
//         else
//                 cout<<"Not Anagram";
//         return 0;
// }


// Largest and Smallest Number in an Array

// #include<vector>

// class Exam
// {
//         vector<int>arr;
//         public:
//                 void input(int n)
//                 {
//                         cout<<"Enter a number::";
//                         cin>>n;
//                         arr.resize(n);
//                         cout<<"enter array elements::";
//                         for(int i=0;i<n;i++)
//                                 cin>>arr[i];
//                 }

//                 int largestNum()
//                 {
//                         int max=arr[0];
//                         for(int i=0;i<arr.size();i++)
//                         {
//                                 if(arr[i]>max)
//                                         max=arr[i];
//                         }
//                         return max;
//                 }

//                 int smallestNum()
//                 {
//                         int min=arr[0];
//                         for(int i=0;i<arr.size();i++)
//                         {
//                                 if(min>arr[i])
//                                         min=arr[i];
//                         }
//                         return min;
//                 }

// };


// int main()
// {
//         Exam e;
//         int n;
//         e.input(n);
//         cout<<e.largestNum()<<endl;
//         cout<<e.smallestNum(); 
//         return 0;
// }


//Second largest element
// #include<vector>
// #include<climits>
// class Exam
// {
//         vector<int> arr;
//         public:
//         void input(int &n)
//         {
//                 cout<<"Enter a size of array::";
//                 cin>>n;
//                 arr.resize(n);
//                 cout<<"Enter array elements::";
//                 for(int i=0;i<n;i++)
//                         cin>>arr[i];
//         }

//         void secondLargest(int n)
//         {
//                 int largest=INT_MIN;
//                 int SecLargest=INT_MIN;
//                 for(int i=0;i<n;i++)
//                 {
//                         if(arr[i]>largest)
//                         {
//                                 SecLargest=largest;
//                                 largest=arr[i];
//                         }
//                         else if(arr[i]>SecLargest && arr[i]!=largest)
//                                SecLargest=arr[i]; 
//                 }
//                 cout<<SecLargest;
//         }
// };

// int main()
// {
//         Exam e;
//         int n;
//         e.input(n);
//         e.secondLargest(n);
//         return 0;
// }



//reverse array
// #include<vector>
// class Exam
// {
//         vector<int>arr;
//         public:
//                 void input(int n)
//                 {
//                         cout<<"Enter a size of array::";
//                         cin>>n;
//                         arr.resize(n);
//                         cout<<"enter array elements::";
//                         for(int i=0;i<n;i++)
//                                 cin>>arr[i];
//                 }

//                 void reverse()
//                 {
//                         int st=0;
//                         int end=arr.size()-1;
//                         while(st<end)
//                         {
//                                 swap(arr[st],arr[end]);
//                                 st++;
//                                 end--;
//                         }
//                         for(int val:arr)
//                                 cout<<val <<" ";
//                 }
// };

// int main()
// {
//         Exam e;
//         int n;
//         e.input(n);
//         e.reverse();
//         return 0;
// }



//Sum of an array elements
// #include<vector>
// class Exam
// {
//         vector<int>arr;
//         public:
//                 void input(int &n)
//                 {
//                         cout<<"Enter a array size::";
//                         cin>>n;
//                         arr.resize(n);
//                         cout<<"Enter a array elements::";
//                         for(int i=0;i<n;i++)
//                                 cin>>arr[i];
//                 }

//                 void sumOfArr(int n)
//                 {
//                         int sum=0;
//                         for(int i=0;i<n;i++)
//                                 sum+=arr[i];
//                         //return sum;
//                         cout<<sum <<endl;
//                         cout<< (float)sum/arr.size();
//                 }
// };

// int main()
// {
//         Exam e;
//         int n;
//         e.input(n);
//         cout<<"Average of an array::";
//         e.sumOfArr(n);
//         return 0;
// }




//search an elements
// #include<vector>
// class Exam
// {
//         vector<int>arr;
//         public:
//                 void input(int &n,int &key)
//                 {
//                         cout<<"Enter a array size::";
//                         cin>>n;
//                         arr.resize(n);
//                         cout<<"Enter a array elements::";
//                         for(int i=0;i<n;i++)
//                                 cin>>arr[i];
//                         cout<<"Enter a key::";
//                         cin>>key;
//                 }

//                bool search(int n,int key)
//                 {
//                         for(int i=0;i<n;i++)
//                                 if(arr[i]==key)
//                                         return true;
//                         return false;  
//                 }

// };


// int main()
// {
//         Exam e;
//         int n,key;
//         e.input(n,key);
//         if(e.search(n,key))
//                 cout<<"Found";
//         else
//                 cout<<"Not Found";
//         return 0;
// }



//copy one array into another

 #include<vector>
// class Exam
// {
//         vector<int>arr;
//         public:
//                 void input(int &n)
//                 {
//                         cout<<"Enter a array size::";
//                         cin>>n;
//                         arr.resize(n);
//                         cout<<"Enter a array elements::";
//                         for(int i=0;i<n;i++)
//                                 cin>>arr[i];
//                 }

//                 void copy(int n)
//                 {
//                         // vector<int>ans(n);
//                         // for(int i=0;i<n;i++)
//                         //         ans[i]=arr[i];
//                         // for(int i=0;i<n;i++)
//                         //         cout<<ans[i] <<" ";

//                         vector<int>ans;
//                         for(int i=0;i<n;i++)
//                                 ans.push_back(arr[i]);
//                         for(int val:ans)
//                                 cout<<val <<" ";

//                 }
//  };

//  int main()
// {
//         Exam e;
//         int n;
//         e.input(n);
//         e.copy(n);
//         return 0;
// }



//sort an array

// class Exam
// {
//         vector<int>arr;
//         public:
//                 void input(int &n)
//                 {
//                         cout<<"Enter a array size::";
//                         cin>>n;
//                         arr.resize(n);
//                         cout<<"Enter a array elements::";
//                         for(int i=0;i<n;i++)
//                                 cin>>arr[i];
//                 }

//                 void sort(int n)
//                 {
//                         for(int i=0;i<n-1;i++)
//                                 for(int j=i+1;j<n;j++)
//                                         if(arr[i]>arr[j])
//                                                 swap(arr[j],arr[i]);
//                         for(int val:arr)
//                                 cout<<val <<" ";
//                 }
// };

// int main()
// {
//         Exam e;
//         int n;
//         e.input(n);
//         e.sort(n);
//         return 0;
// }



// //Remove duplicate from unsorted array
// #include<unordered_set>
// class Exam
// {
//         vector<int>arr;
//         public:
//         void input(int &n)
//         {
//                 cout<<"enter a size of array::";
//                 cin>>n;
//                 arr.resize(n);
//                 cout<<"Enter a array elements::";
//                 for(int i=0;i<n;i++)
//                         cin>>arr[i];
//         }
//         void removeDuplicate()
//         {
//                 unordered_set<int>st;
//                 for(int i=0;i<arr.size();i++)
//                 {
//                         if(st.find(arr[i])==st.end())
//                         {
//                                 cout<<arr[i]<<" ";
//                                 st.insert(arr[i]);
//                         }
//                 }
//         }
// };

// int main()
// {
//         Exam e;
//         int n;
//         e.input(n);
//         e.removeDuplicate();
//         return 0;
// }


//Remove duplicate from sorted array

// class Exam
// {
//         vector<int>arr;
//         public:
//         void input(int &n)
//         {
//                 cout<<"enter a size of array::";
//                 cin>>n;
//                 arr.resize(n);
//                 cout<<"Enter a array elements::";
//                 for(int i=0;i<n;i++)
//                         cin>>arr[i];
//         }
//         void removeDuplicate()
//         {
//                 int j=0;
//                 for(int i=1;i<arr.size();i++)
//                 {
//                         if(arr[i]!=arr[j])
//                         {
//                                 j++;
//                                 arr[j]=arr[i];
//                         }
//                 }
//                 for(int i=0;i<=j;i++)
//                         cout<<arr[i] <<" ";
//         }
// };

// int main()
// {
//         Exam e;
//         int n;
//         e.input(n);
//         e.removeDuplicate();
//         return 0;
// }




//move all zeroes to end

// class Exam
// {
//         vector <int> arr;
//         public:
//                 void input(int n)
//                 {
//                         cout<<"Enter a size of array";
//                         cin>>n;
//                         arr.resize(n);
//                         cout<<"Enter array elements::";
//                         for(int i=0;i<n;i++)
//                                 cin>>arr[i];
//                 }

//                 void moveZeros()
//                 {
//                         int index=0;       
//                         for(int i=0;i<arr.size();i++)
//                         {
//                                 if(arr[i]!=0)
//                                 {
//                                         swap(arr[index],arr[i]);
//                                         index++;
//                                 }
//                         }
//                         for(int val:arr)
//                                 cout<<val <<" ";
//                 }
// };

// int main()
// {
//         Exam e;
//         int n;
//         e.input(n);
//         e.moveZeros();
//         return 0;
// }


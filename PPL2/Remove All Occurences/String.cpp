#include<iostream>
using namespace std;


class String
{
    public:
        string removeOccurences(string s,string part)
        {
            while(s.length()>0 && s.find(part)<s.length())
                s.erase(s.find(part),part.length());
            return s;
        }
        
};

int main()
{
    string str,part;
    cout<<"enter a string::";
    getline(cin,str);
    cout<<"enter a part::";
    cin>>part;
    String obj;
    cout<<obj.removeOccurences( str, part);
    return 0;
}
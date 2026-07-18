#include<iostream>
#include "String.h"
using namespace std;

int main()
{
    StringAnagrams st;

    st.input();

    vector<vector<string>> result = st.groupAnagrams(st.s);

    cout << "Grouped Anagrams:\n";

    for(const auto &group : result)
    {
        for(const auto &str : group)
        {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}

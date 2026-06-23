#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
#include "String.h"

void StringAnagrams::input()
{
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    s.resize(n);

    cout << "Enter strings:\n";
    for(int i = 0; i < n; i++)
        cin >> s[i];
}

vector<vector<string>> StringAnagrams::groupAnagrams(vector<string>& strs)
{
    vector<vector<string>>ans;
    unordered_map<string, vector<string>>Map;

    for (const string& str : strs) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        Map[sortedStr].push_back(str);
    }

    for (const auto& pair : Map) {
        ans.push_back(pair.second);
    }

    return ans;
}
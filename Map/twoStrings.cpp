#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2)
{
    map<char, int> mp;
    string result;

    for (int i = 0; i < s1.size(); i++)
    {
        mp.insert({s1[i], 1});
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (mp.count(s2[i]))
        {
            mp[s2[i]]--;
        }
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        if (i->second <= 0)
        {
            result = "YES";
            return result;
        }
    }
    result = "NO";
    return result;
}
int main()
{
    int t;
    cin >> t;
    string s1, s2;

    for (int i = 0; i < t; i++)
    {
        cin >> s1;
        cin >> s2;
        cout << twoStrings(s1, s2) << endl;
    }
}
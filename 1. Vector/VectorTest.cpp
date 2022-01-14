#include <bits/stdc++.h>

using namespace std;

int main()
{
    // vector<int> v = {30, 40, 50, 10, 45, 20};

    string s = "53hackerRank";
    auto it = find(s.begin(), s.end(), 'R');

    cout << it - s.begin() << endl;
    for (auto i : s)
    {
        cout << i;
    }
    return 0;
}
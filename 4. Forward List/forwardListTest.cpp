#include <bits/stdc++.h>

using namespace std;

int main()
{
    forward_list<int> fl = {1, 5, 7, 83, 0, 2, 3, 5, 2, 6, 2};

    fl.sort();

    for (auto i : fl)
    {
        cout << i << " ";
    }
}
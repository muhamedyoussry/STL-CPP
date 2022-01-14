#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<char> d = {'a', 'r', 'b', 'c', 'k', 'l'};

    auto it = find(d.begin(), d.end(), 'c');

    cout << it - d.begin() << endl;

    return 0;
}
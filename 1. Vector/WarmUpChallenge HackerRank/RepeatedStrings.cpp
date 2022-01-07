#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n)
{
    long a = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            a++;
        }
    }
    a = (n / s.size()) * a;
    int mod = n % s.size();

    if (mod != 0)
    {
        for (int i = 0; i < mod; i++)
        {
            if (s[i] == 'a')
            {
                a++;
            }
        }
    }

    return a;
}
int main()
{
    string s;
    cin >> s;

    long n;
    cin >> n;

    long result = repeatedString(s, n);
    cout << result;
    return 0;
}
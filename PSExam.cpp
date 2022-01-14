#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'decryptPassword' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

// 51Pa*0Lp*0e = aP1pL5e
// pTo*Ta*O = poTaTO

string decryptPassword(string st)
{
    string s = st;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]) && islower(s[i + 1]))
        {
            char temp = s[i];
            s[i] = s[i + 1];
            s[i + 1] = temp;
            s.erase(i + 2);
        }
        else if (isdigit(s[i]))
        {
            for (int j = s.size() - 1; j >= 0; j--)
            {

                if (s[j] == '0')
                {
                    s[j] = s[i];
                    s.erase(i, i);
                }
            }
        }
        else
        {
            continue;
        }
    }
    return s;
}

int main()
{

    string s;
    cin >> s;

    string result = decryptPassword(s);

    cout << result << "\n";

    return 0;
}

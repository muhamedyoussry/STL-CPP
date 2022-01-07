#include <bits/stdc++.h>

using namespace std;
int jumpingOnClouds(vector<int> c)
{
    int jumps = 0;

    for (int i = 0; i < c.size(); i++)
    {
        if (i == (c.size() - 1))
        {
            return jumps;
        }
        else if (c[i] == c[i + 1])
        {
            if (c[i] == c[i + 2])
            {
                jumps++;
                i++;
            }
            else
            {
                jumps++;
            }
        }
        else
        {
            jumps++;
            i++;
        }
    }

    return jumps;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int curr;

    for (auto i = 0; i < arr.size(); i++)
    {
        cin >> curr;
        arr[i] = curr;
    }

    int result = jumpingOnClouds(arr);
    cout << result;
    return 0;
}
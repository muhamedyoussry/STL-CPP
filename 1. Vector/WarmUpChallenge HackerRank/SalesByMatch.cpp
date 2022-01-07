#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector<int> ar)
{
    int pairs = 0;
    sort(ar.begin(), ar.end());

    for (int i = 0; i < ar.size(); i++)
    {
        if (ar[i] == ar[i + 1])
        {
            pairs++;
            i++;
        }
    }

    return pairs;
}

int main()
{
    int n;
    cin >> n;
    vector<int> socks(n);

    int curr;

    for (auto i = 0; i < socks.size(); i++)
    {
        cin >> curr;
        socks[i] = curr;
    }

    int result = sockMerchant(n, socks);
    cout << result << endl;
    return 0;
}
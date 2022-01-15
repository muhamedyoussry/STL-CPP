#include <bits/stdc++.h>

using namespace std;

vector<int> rotLeft(vector<int> a, int d)
{
    vector<int> z(a.size(), 0);
    int step = a.size() - d;

    for (int i = 0; i < a.size(); i++)
    {
        z[(i + step) % a.size()] = a[i];
    }

    return z;
}

int main()
{
    int n, d;
    cin >> n >> d;

    vector<int> arr(n);

    for (auto i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    arr = rotLeft(arr, d);
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
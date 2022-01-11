#include <bits/stdc++.h>

using namespace std;

int hourglassSum(vector<vector<int>> arr)
{
    vector<int> glassArr;

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            int sum = 0;
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            glassArr.push_back(sum);
        }
    }
    int max = glassArr[0];
    for (int i = 0; i < glassArr.size(); i++)
    {
        if (glassArr[i] > max)
        {
            max = glassArr[i];
        }
    }

    return max;
}

int main()

{
    vector<vector<int>> arr(6);
    int curr;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> curr;
            arr[i].push_back(curr);
        }
    }

    int result = hourglassSum(arr);
    cout << result;
}
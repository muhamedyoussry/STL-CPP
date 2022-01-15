#include <bits/stdc++.h>

using namespace std;

void minimumBribes(vector<int> q)
{
    int counter = 0;

    for (int i = 0; i < q.size(); i++)
    {

        int limitCounter = 0;
        
        for (int j = i + 1; j < q.size(); j++)
        {
            if (q[i] > q[j])
            {
                counter++;
                limitCounter++;
                if (limitCounter >= 3)
                {
                    cout << "Too chaotic" << endl;
                    return;
                }
            }
        }
    }
    cout << counter << endl;
}
int main()
{
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> q(n);
        for (int j = 0; j < q.size(); j++)
        {
            cin >> q[j];
        }
        minimumBribes(q);
        cout << endl;
    }

    return 0;
}
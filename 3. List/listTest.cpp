#include <bits/stdc++.h>

using namespace std;

template <typename T>
int searchList(list<T> sl, T item)
{
    int index = -1;
    int counter = 0;

    for (auto it = sl.begin(); it != sl.end(); it++)
    {
        if (item == *it)
        {
            index = counter;
            return index;
        }
        counter++;
    }

    return index;
}

int main()
{

    list<int> l = {1, 2, 4, 5, 4, 3, 12, 9};

    cout << searchList(l, 4);

    return 0;
}
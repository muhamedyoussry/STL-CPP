#include <iostream>
#include <vector> // incldue the template class

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    for (auto it = v.cbegin(); it != v.cend(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
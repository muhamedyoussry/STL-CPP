#include <iostream>
#include <vector> // incldue the template class

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    v.erase(v.begin(), v.end() - 2);

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "  ";
    }

    return 0;
}
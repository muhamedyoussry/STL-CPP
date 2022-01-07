#include <iostream>
#include <vector> // incldue the template class

using namespace std;

int main()
{
    vector<int> v(5); // the initial value of the vectors are zero
    v.push_back(3);

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}
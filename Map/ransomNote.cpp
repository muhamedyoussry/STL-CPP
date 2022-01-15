#include <bits/stdc++.h>

using namespace std;
void checkMagazine(vector<string> magazine, vector<string> note)
{
    map<string, int> magazineNote;
    for (auto i = 0; i < note.size(); i++)
    {
        if (magazineNote.count(note[i]))
        {
            magazineNote[note[i]]++;
        }
        else
        {
            magazineNote.insert({note[i], 1});
        }
    }
    for (auto i = 0; i < magazine.size(); i++)
    {
        if (magazineNote.count(magazine[i]))
        {
            magazineNote[magazine[i]]--;
        }
    }
    for (auto i = magazineNote.begin(); i != magazineNote.end(); i++)
    {
        if (i->second > 0)
        {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
    return;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> magazine(n);
    vector<string> note(m);

    for (auto i = 0; i < magazine.size(); i++)
    {
        cin >> magazine[i];
    }
    for (auto i = 0; i < note.size(); i++)
    {
        cin >> note[i];
    }
    checkMagazine(magazine, note);
}
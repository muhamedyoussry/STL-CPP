#include <bits/stdc++.h>

using namespace std;

int countingValleys(int steps, string path)
{
    int valleys = 0;
    int preSeaLevel = 0;
    int currSeaLevel = 0;

    for (int i = 0; i < path.size(); i++)
    {
        if (path[i] == 'D')
        {
            currSeaLevel--;
        }
        else if (path[i] == 'U')
        {
            currSeaLevel++;
        }
        if (currSeaLevel == 0 && preSeaLevel == -1)
        {
            valleys++;
        }
        preSeaLevel = currSeaLevel;
    }

    return valleys;
}

int main()
{
    int n;
    cin >> n;

    string steps;
    cin >> steps;

    int result = countingValleys(n, steps);
    return 0;
}

// Below is my old code version from around 6-7 months


/*


int countingValleys(int steps, string path) {
    
    int max_height = 0 ;
    int min_height = 0 ;
    int current_height = 0 ;
    int valleys = 0 ;
    int mountains = 0 ; 
    
    for (int i = 0 ; i < steps ; i++){
        if (path[i] == 'D') {
            current_height -= 1 ;
        }
        else if (path[i] == 'U'){
            current_height += 1 ; 
        }

        if (current_height > max_height ) {
            max_height = current_height ;
        }
        else if (current_height < min_height) {
            min_height = current_height ;
        }
        else if (current_height == 0 ) {
            if (min_height < 0 ) {
                valleys ++ ;
            }
            else if (max_height > 0 ) {
                mountains ++ ;
            }
            min_height = 0 ;
            max_height = 0 ; 

        }
    }
    return valleys ;
}


*/
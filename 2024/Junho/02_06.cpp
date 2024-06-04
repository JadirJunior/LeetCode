#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    vector<char> s = {'a', 'b', 'c', 'd'};
    
    for (int i = 0; i < s.size(); i++) {
        if (i == s.size() / 2) {
            break;
        }
        swap(s[i], s[s.size() - 1 - i]);
        
    }
    for (char c : s) {
        cout << c << endl;
    }

    


    return 0;
}
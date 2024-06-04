#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <sstream>


using namespace std;

int main()
{
    string s =  "Let's take LeetCode contest";
    
    reverse(s.begin(), s.end());
    stringstream ss(s);
    string word;
    string aux = "";

    while (ss >> word) {
        aux += word;

        if (!ss.eof()) {
            aux += " ";
        }
    }

    cout << aux << endl;


    return 0;
}
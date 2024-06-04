#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main(){

    string s; cin >> s;


    unordered_map<char, int> letters;
    unordered_set<char> visited;

    for (int i =0; i<s.length();i++) {
        letters[s[i]] = i;
    }

    int cont = 0;
    string res = "";

    for (char c : s) {

        if (visited.find(c) != visited.end()) {
            cont++;
            continue;
        }

    
        while (!res.empty() && c < res.back() && cont < letters[res.back()]) {
            visited.erase(res.back());
            res.pop_back();
        }

        res.push_back(c);
        visited.insert(c);

        cont++;

    }

    cout << res << endl;


    return 0;
}
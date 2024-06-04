#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

string removeDuplicateLetters(string s) {
    unordered_map<char, int> last_occurrence;
    
    for (int i = 0; i < s.length(); i++) {
        last_occurrence[s[i]] = i;
    }
    
    string stack = "";
    unordered_set<char> visited;
    
    for (int i = 0; i < s.length(); i++) {
        char current_char = s[i];
        
        if (visited.find(current_char) != visited.end()) {
            //Caso o caractere já tenha sido visitado.
            continue;
        }

        while (!stack.empty() && current_char < stack.back() && i < last_occurrence[stack.back()]) {
            visited.erase(stack.back());
            stack.pop_back();
        }

        stack.push_back(current_char);
        visited.insert(current_char);
    }
    
    return stack;
}

int main() {
    string s;
    cin >> s;
    
    string result = removeDuplicateLetters(s);
    cout << result << endl;

    return 0;
}
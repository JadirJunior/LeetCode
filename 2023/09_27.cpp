#include <iostream>
#include <string>

using namespace std;

string decodeAtIndex(string s, int k) {
    long long size = 0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (isdigit(s[i])) { 
            size *= s[i] - '0';
            
        } else {
            size++;
        }
    }
    
    for (int i = n - 1; i >= 0; i--) {
        k =k% size;

        if (k == 0 && isalpha(s[i])) {
            return string(1, s[i]);
        }
        if (isdigit(s[i])) {
            size /= s[i] - '0';
        } else {
            size--;
        }
    }

    return "";
}

int main()
{
    string s = "leet2code3";
    int k = 10;
    cout << decodeAtIndex(s, k) << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string s = "abc", t = "ahcbgdc";
    
    bool ret = false;

    reverse(s.begin(), s.end());

    if (s == t) {
        ret = true;
    } else {

        for (char c : t) {


            if (s.empty()) {
                ret = true;
                break;
            }


            if (c == s.back()) {
                s.pop_back();

                if (s.empty()) {
                    ret = true;
                }
                
            }

        }
    }


    cout << ret << endl;

    return 0;
}
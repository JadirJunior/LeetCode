/*
Given a string array words, return an array of all characters that show up in all 
strings within the words (including duplicates). You may return the answer in any order.


https://leetcode.com/problems/find-common-characters/description/

*/


#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    vector<string> words = {"bella", "label", "roller"};
    
    unordered_map<char, int> map;
    unordered_map<char, int> temp;
    vector<string> resp;
    for (int i = 0; i < words.size(); i++) {
        string s = words[i];


        for (char c : s) {

            if (i == 0) {
                map[c]++;
            } else {
                temp[c]++;
            }
        }


        for (auto it = map.begin(); it != map.end(); it++) {
            if (i > 0) {
                map[it->first] = min(map[it->first], temp[it->first]);
            }
        }
        temp.clear();

    }

    for (auto it = map.begin(); it != map.end(); it++) {
        for (int i = 0; i < it->second; i++) {
            resp.push_back(string(1, it->first));
        }
    }

    for (string s : resp) {
        cout << s << " ";
    }

    return 0;
}
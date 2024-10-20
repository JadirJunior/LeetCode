/*
Alice has some number of cards and she wants to rearrange the cards 
into groups so that each group is of size groupSize, and consists of groupSize consecutive cards.

Given an integer array hand where hand[i] is the value written on the ith card and an 
integer groupSize, return true if she can rearrange the cards, or false otherwise.


https://leetcode.com/problems/hand-of-straights/description/?envType=daily-question&envId=2024-06-06

*/


#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> hand = {1,2,3,4,5};
    int groupSize = 4;

    map<int, int> cards;

    if (hand.size() % groupSize != 0) {
        cout << "false";
        return 0;
    }

    for (int i = 0; i < hand.size(); i++) {
        cards[hand[i]]++;
    }


    int count = 0;
    
    while (cards.size() > 0) {
        int start = cards.begin()->first;
        for (int i = 0; i < groupSize; i++) {
            if (cards[start + i] == 0) {
                cout << "false";
                return 0;
            }
            cards[start + i]--;
            if (cards[start + i] == 0) {
                cards.erase(start + i);
            }
        }
        count++;
    }

    cout << "true" << endl;

    return 0;
}
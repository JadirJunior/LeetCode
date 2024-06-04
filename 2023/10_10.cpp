#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <climits>

using namespace std;



int main()
{

    vector<int> nums = {41,33,29,33,35,26,47,24,18,28};

    sort(nums.begin(), nums.end());

    vector<int> sequence, aux;
    int maxSize = INT_MIN;

    cout << endl;

    for (int i = 0; i < nums.size(); i++) {

        int n = nums[i];
        
        if (aux.empty()) {
            
            aux.push_back(n);

           // cout << "Colocando " << n << " no vetor " << endl;

        } else {

            if (aux.back() == (n-1)) {

                //cout << "Colocando " << n << " no vetor (2)" << endl;
                aux.push_back(n);
                int size = aux.size();
                maxSize = max(maxSize, size);
                
                if (i == nums.size()-1) {
                    sequence = aux;
                }

            } else {

                //cout << "AAA " << aux.size() << " " << sequence.size() << endl;
                
                if (aux.size() > sequence.size()) {
                    sequence = aux;
                    maxSize = aux.size();
                }
                
                aux.clear();
                aux.push_back(n);
            }   
        }
    }


    int pos1 = INT_MAX, pos2 = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == sequence.front()) {
            pos1 = i;
        } 

        if (nums[i] == sequence.back()) {
            pos2 = i;
        }
    }

    int numMin = nums[pos1];
    int correction = 0;
    int n = nums.size();

    int aux1 = pos1, aux2 = pos2;
    pos1--;
    while (pos1 >= 0) {
        if (abs(numMin - nums[pos1]) > (n-1)) {
            correction++;
        }
        pos1--;
    }

    pos2++;
    while (pos2 < nums.size()) {

        if (abs( numMin - nums[pos2] ) > (n-1)) {
            correction++;
        }
        pos2++;
    }

    int resto = aux1 == aux2 ? nums.size()-1 : nums.size() - (sequence + correction);

    cout << resto << endl;


    return 0;
}
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {

    bool crescente = false, dec = false;

    vector<int> nums;

    for (int i=0;i < nums.size()-1;i++) {

        if (nums[i] < nums[i+1]) {
            
            if (!crescente && !dec) {
                crescente = true;
            } else {
                if (dec) {
                    return false;
                }
            }

        } else {

            if (nums[i] > nums[i+1]) {
                if (!crescente && !dec) {
                    dec = true;
                } else {
                    if (crescente) {
                        return false;
                    }
                }
            }

        }


    }
    
    

    return 0;
}
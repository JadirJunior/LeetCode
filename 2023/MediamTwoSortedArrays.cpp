#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){


    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    
    vector<double> newArr;

    int arr1 = 0, arr2 = 0;

    while (arr1 < nums1.size() && arr2 < nums2.size()) {
        
        if (nums1[arr1] < nums2[arr2]) {
            
            newArr.push_back(nums1[arr1]);
            arr1++;

        } else {

            newArr.push_back(nums2[arr2]);
            arr2++;

        }
    }

    while (arr1 < nums1.size()) {
        newArr.push_back(nums1[arr1]);
        arr1++;
    }

    while (arr2 < nums2.size()) {
        newArr.push_back(nums2[arr2]);
        arr2++;
    }

    double medium;

    if (newArr.size() % 2 == 0) {
        //Quantidade par de elementos.
        medium = (newArr[newArr.size()/2] + newArr[(newArr.size()/2) - 1])/2;

    } else {
        
        medium = newArr[newArr.size()/2];

    }

    cout << medium;



    return 0;
}
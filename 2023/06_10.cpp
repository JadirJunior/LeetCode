#include <iostream>
#include <math.h>

using namespace std;

int integerBreak(int n) {
    int val = 1;

    int res = 1;

    if (n == 2) {
        val = 1;
    
    } else if (n == 3) {
        val = 2;

    } else {

        res = n / 3;
            
        val = pow(3, res);

        if (n % 3 == 1) {
            val /= 3;
            val *= 4;
        } else if (n % 3 == 2) {
            val *= 2;
        }
        
    }

    return val;
}


int main()
{
    cout << integerBreak(10) <<endl;
    return 0;
}
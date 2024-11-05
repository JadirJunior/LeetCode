#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0); //n usar printf junto com cout
//^comentar _ para degubar código
#define endl '\n'


/* macro aleatorias
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
*/

/* macro para trabalhar com pair
#define f first
#define s second
*/

/* funcao para debugging
#define dgb(x) cout << #x << " = " << x << endl;
*/

/* define long long como ll
typedef long long ll
*/

/* define constantes infinitas
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
*/

/*
Reverse bits of a given 32 bits unsigned integer.
https://leetcode.com/problems/reverse-bits/description/
*/

int main() { _

    uint32_t n = 00000010100101000001111010011100;

    uint32_t r = 0;

    for (int i = 0; i < 32; i++) {
        r = (r << 1) | (n & 1);
        n = n >> 1;
    }

    cout << r << endl;

	return 0;
}

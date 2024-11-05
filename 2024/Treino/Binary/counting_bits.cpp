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
Given an integer n, return an array ans of length n + 1 
such that for each i (0 <= i <= n), 
ans[i] is the number of 1's in the binary representation of i.
*/

int main() { _

    vector<int> res;
    int n = 2;

    for (int i = 0; i <= n; i++) {
        int count = 0;

        int atual = i;
        while (atual != 0) {
            count += (atual & 1);
            atual = atual >> 1;
        }

        res.push_back(count);
    }


	return 0;
}

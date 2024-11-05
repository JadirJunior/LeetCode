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
Given a positive integer n, write a function that returns the number of 
set bits in its binary representation (also known as the Hamming weight).
https://leetcode.com/problems/number-of-1-bits/description/
*/

int main() { _

    int n = 11;

	int count = 0;

	while (n != 0) {
		count += (n & 1);
		n = n >> 1;
	}

	cout << count << endl;
	return 0;
}

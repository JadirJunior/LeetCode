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
Given two integers a and b, return the sum of the two integers without using the operators + and -.
https://leetcode.com/problems/sum-of-two-integers/description/
*/

int main() { _

    int a = 10, b = 200;
	
	while (b != 0) {
		
		//Carry
		int carry = (a & b) << 1;
		
		//Result
		a = a ^ b;
		
		//Updating the carry
		b = carry;
	}

	cout << a << endl;

	return 0;
}

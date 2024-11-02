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
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in 
the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
*/

int main() { _

    vector<int> prices = {7, 6, 4, 3, 1};

    int profit = 0, actual = 0;

    for (int i = 0; i < prices.size(); i++) {
        if (i == 0) {
            actual = prices[i];
        } else {
            actual = min(actual, prices[i]);
            profit = max(prices[i]-actual, profit);
        }
        
    }

    if (profit < 0) {
        profit = 0;
    }

    cout << profit << endl;
	return 0;
}

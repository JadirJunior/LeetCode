

/*
You are given a string array words, and an array groups, both arrays having length n.

The hamming distance between two strings of equal length is the number of positions at which the corresponding characters are different.

You need to select the longest subsequence from an array of indices [0, 1, ..., n - 1], such that for the subsequence denoted as [i0, i1, ..., ik-1] having length k, the following holds:

For adjacent indices in the subsequence, their corresponding groups are unequal, i.e., groups[ij] != groups[ij+1], for each j where 0 < j + 1 < k.
words[ij] and words[ij+1] are equal in length, and the hamming distance between them is 1, where 0 < j + 1 < k, for all indices in the subsequence.
Return a string array containing the words corresponding to the indices (in order) in the selected subsequence. If there are multiple answers, return any of them.

Note: strings in words may be unequal in length.

https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-ii/description/?envType=daily-question&envId=2025-05-16
*/


#include <bits/stdc++.h>

using namespace std;

int hammingDistance(const string& a, const string& b) {
    int diff = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) diff++;
        if (diff > 1) return diff;
    }
    return diff;
}

int main()
{
  int n = words.size();
  vector<vector<int>> adj(n);
  
  
  for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
          if (groups[i] != groups[j] && 
              words[i].length() == words[j].length() &&
              hammingDistance(words[i], words[j]) == 1) {
              adj[i].push_back(j);
          }
      }
  }
  
  vector<int> dp(n, 1);
  vector<int> parent(n, -1);
  
  for (int i = n - 1; i >= 0; i--) {
      for (int nxt : adj[i]) {
          if (dp[nxt] + 1 > dp[i]) {
              dp[i] = dp[nxt] + 1;
              parent[i] = nxt;
          }
      }
  }
  
  
  int start = 0;
  for (int i = 1; i < n; i++) {
      if (dp[i] > dp[start]) start = i;
  }
  
  
  vector<string> result;
  int cur = start;
  while (cur != -1) {
      result.push_back(words[cur]);
      cur = parent[cur];
  }
  return 0;
}
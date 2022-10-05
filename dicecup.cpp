#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int hp = -1;
  vector<int> res(n + m + 1, 0);
  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < m + 1; j++) {
      res[i + j]++;
      hp = max(hp, res[i + j]);
    }
  }
  for (int i = 0; i < res.size(); i++) {
    if (res[i] == hp) {
      cout << i << endl;
    }
  }
  return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int t, d, I, q, n, p, i1, i2, pre = 0;
  cin >> t;
  for(int r = 0; r < t; r++){
    vector<int> v;
    vector<int> preco_bolo;
    cin >> d >> I >> p;
    for(int j = 0; j < I; j++){
      cin >> n;
      v.push_back(n);
    }
    for(int i = 0; i < p; i++){
      cin >> q;
      pre = 0;
      for(int u = 0; u < q; u++){
        cin >> i1 >> i2;
        pre += v[i1] * i2;
      }
      preco_bolo.push_back(pre);
    }
    sort(preco_bolo.begin(), preco_bolo.end());
    int quantidade_bolo = 0;
    while(d >= preco_bolo[0]){
      quantidade_bolo++;
      d -= preco_bolo[0];
    }
    cout << quantidade_bolo << endl;
  }
}
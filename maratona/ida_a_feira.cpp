#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main() {
  map <string, float> map;
  int c, q;
  float valor, t = 0.0;
  string comp;
  cin >> c;
  for(int i = 0; i < c; i++){
    cin >> q;
    for(int k = 0; k < q ; k++){
      cin >> comp >> valor;
      map.insert({comp, valor});
    }
    cin >> q;
    for(int j = 0; j < q; j++){
      cin >> comp >> valor;
      t += map[comp] * valor;
    }
    cout << fixed << setprecision(2) << "R$ " << t << endl;
    t = 0.0;
    map.clear();
  }
}
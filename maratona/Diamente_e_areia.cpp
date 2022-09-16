#include <iostream>
using namespace std;

int main() {
  int n, t = 0;
  string d;
  char letra;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> d;
    for (int j = 0; j < d.size(); j++){
      letra = d[j];
      if (letra == '<'){
        d[j] = '.';
        for (int k = 0; k < d.size(); k++){
          letra = d[k];
          if((j < k) && (letra == '>')){
            d[k] = '.';
            t++;
            break;
          }
        }
      }
    }
    cout << t << endl;
    t = 0;
  }
}
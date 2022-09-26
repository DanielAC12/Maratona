#include <iostream>
#include <stack>
using namespace std;

bool v(char a, char b) {
  if (a == 'S' && b == 'B' || a == 'B' && b == 'S') {
    return true;
  }
  if (a == 'C' && b == 'F' || a == 'F' && b == 'C') {
    return true;
  }
  return false;
}

int main() {
  
  string p;

  while (cin >> p) {
    stack<char> s;
    int cont = 0;
    int n = 0;
    for (int i = 0; i < p.size(); i++) {
      if (s.empty()) {
        s.push(p[i]);
      } else if(v(p[i], s.top())) {
        n++;
        s.pop();
      } else {
        s.push(p[i]);
      }
    }
    cout << n << endl;
  }
}
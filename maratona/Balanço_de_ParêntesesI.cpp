#include <iostream>
#include <queue>
using namespace std;

int main() {
  int p;
  string d;
  while(cin >> d){
    p = 0;
    queue<char> q;
    for(int i = 0; i < d.size(); i++){
      if(p == 1) break;
      
      if(d[i] == '('){
        q.push('(');
      } 
      else if(d[i] == ')'){
        if(not q.empty()){    
          q.pop();
        } else {
          p++;
          break;
        }
      } 
    }
    if(p == 0  and q.empty()){
      cout << "correct" << endl;
    } else{
      cout << "incorrect" << endl;
    }
  }
}
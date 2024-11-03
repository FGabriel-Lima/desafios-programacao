#include <iostream>
using namespace std;

void hanoi(int n, char a, char b, char c){
  if(n == 0){
    return;
  }
  if (n == 1){
    cout << "Move " << a << " para " << c << endl;
  }
  else{
    hanoi(n-1, a, c, b);
    cout << "Move " << a << " para " << c << endl;
    hanoi(n-1, b, a, c);
  }
  
}

int main(){
  int n = 3;
  char a = 'A', b = 'B', c = 'C';

  hanoi(n, a, b, c);
}
#include <iostream>
#include <string>
using namespace std;

int main(){
  string frase;
  getline(cin, frase);

  for(int i = 0; i < (int) frase.length(); i++){
    if(frase[i] == frase[i + 2] && frase[i + 1] == ' '){
      cout << frase[i];
      i += 2;
      if(frase[i + 2] == frase[i] && frase[i + 1] == ' '){
        i += 2;
      }
    }else if(frase[i] != frase[i + 1]){
      cout << frase[i];
    }else if(frase[i] == frase[i + 1]){
      cout << frase[i];
    }
  }
}
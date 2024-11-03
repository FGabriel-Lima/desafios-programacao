#include <iostream>
using namespace std;

void inverter(int v[], int ini, int fim){
  if(ini < fim){
    int aux = v[ini];
    v[ini] = v[fim];
    v[fim] = aux;
    inverter(v, ini + 1, fim - 1);
  }
}

void print(int v[], int n){
  for(int i = 0; i < n; i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

int main(){
  int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(vet) / sizeof(int);
  print(vet, n);
  inverter(vet, 0, n - 1);
  print(vet, n);
}
#include <iostream>
#include <cmath>
using namespace std;
const char ln = '\n';

int main(){
  int n;
  cin >> n;
  int cantidad_digitos = (int)log10(n)+1;
  //cout << cantidad_digitos << ln;
  
  while(n > 0){
      int potencia = (pow(10, (cantidad_digitos-1)));
      cout << n / potencia << ln;
      cantidad_digitos--;
      n = n % potencia;
  }

  return 0;
}
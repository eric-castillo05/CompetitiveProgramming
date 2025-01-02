#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int n, k, aux = 0;
  cin >> n >> k;
//   int n_digitos = (int)log10(n)+1;
//   while(n > 1){
//     int potencia = pow(10, n_digitos-1);
//     aux += n / potencia;
//     n %= potencia;
//     n_digitos--;
//   }
//   cout << n + k;
  cout << n * 10 + k;
  
  return 0;
}

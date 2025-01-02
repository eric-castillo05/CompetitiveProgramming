/*
 * Calcula si el numero n es primo o no
 * Un numero primo se define como
 * Numero cuyos divisores solo son el mismo y uno
*/

#include <iostream>
#define REP(i, a, b)\
for(int i = a; i * i < b; i++)

using namespace std;

const char ln = '\n';

bool esPrimo(int n){
 REP(i, 1, n){
    if(n % i == 0){
      if(i != 1 && n / i != n){
        return false;
      }
    }
  }
  return true;
}

int main(){
  int n;
  cin >> n;
  cout << esPrimo(n) << ln;
 
  return 0;
}

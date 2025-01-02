/*
* Dado un numero n encontrar todos sus divisores
* Se dice que puedes encontrarlos iterandos hasta la raiz de n
* 
* Porque si n % b es 0, entonces b es divisor 
* pero tambien el cociente de la division es divisor de n
* 
* Por lo que si tenemos 10
* 
* Sabemos que 10 % 1 = 0, por lo tanto 10 / 1 = 10,
* 
* Por lo que 10 y 1 si son dividores de 10 y esto se replica
* para cualquier numero
*
* Podriamos iterar hasta la raiz de n pero si le aplicamos 
* potencia de dos a ambos, nos queda de la siguiente manera
* i < sqrt(n) -> i^2 < sqrt(n)^2
* i^2 = i * i -> i * i < n
*
*/
#include <iostream>
#include <vector>

#define REP(i, a, b)\
for(int i = a; i * i < b; i++)

using namespace std;

const char ln = '\n';

int main(){
  int n;
  cin >> n;
  vector<int> divisores;
  REP(i, 1, n){
    if(n % i == 0){
      divisores.push_back(i);
      divisores.push_back(n / i);
    }
  }
  for(auto it : divisores){
      cout << it << " ";
  }

  return 0;
}

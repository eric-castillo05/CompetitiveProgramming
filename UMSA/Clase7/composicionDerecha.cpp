#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

const char ln = '\n';

int main(){
    int n, k;
    cin >> n >> k;
    int n_digitos = (int)log10(n)+1;
    cout << n + (pow(10, n_digitos) * k) << ln;

    return 0;
}
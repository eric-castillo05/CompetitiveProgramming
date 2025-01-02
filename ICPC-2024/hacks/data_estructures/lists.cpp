#include <bits/stdc++.h>
#define TRarray(arr, N, it)\
    for(float *it = arr, *end = arr + N; it < end; ++it)
using namespace std;
const char ln = '\n';
int main() {
    cout << "Arrays" << ln;
    /*
     * TRaverse a static arrray with
     * an integer index
     */
    cout << "TRaverse a static arrray with\nan integer index" << endl;
    const int N = 10;
    float a[N];
    for(int i = 0; i < N; ++i) {
        // cin >> a[i];
        a[i] = i;
    }

    /*
     * Traverse an array efficiently
     **/
    cout << "Traverse an array efficiently" << '\n';
    float *i = a;
    float *end = a + N;
    while(i < end) {
        cout << *i++ << " ";
    }

    /*
     * Traverse with macros
     * Rarely used
     **/
    cout << ln << "TRaverse with macros; rarely used" << ln;
    TRarray(a, N, i) {
        cout << *i << " ";
    }

    cout << ln;
    cout << "Vectores" << ln;



    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// void rotarMatriz90derecha(vector<vector<int>>& matriz) {
//     int N = matriz.size();
//
//     for (int i = 0; i < N; i++) {
//         for (int j = i; j < N; j++) {
//             swap(matriz[i][j], matriz[j][i]);
//         }
//     }
//
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N / 2; j++) {
//             swap(matriz[i][j], matriz[i][N - j - 1]);
//         }
//     }
// }

bool validarMatriz(const vector<vector<int>>& matriz) {
    int N = matriz.size();
    for (int j = 0; j < N; ++j) {
        for (int i = 1; i < N; ++i) {
            if (matriz[i][j] < matriz[i - 1][j]) {
                return false;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 1; j < N; ++j) {
            if (matriz[i][j] < matriz[i][j - 1]) {
                return false;
            }
        }
    }

    return true;
}

void rotarMatriz90izquierda(vector<vector<int>>& matriz) {
    int N = matriz.size();

    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            swap(matriz[i][j], matriz[j][i]);
        }
    }

    for (int i = 0; i < N / 2; i++) {
        for (int j = 0; j < N; j++) {
            swap(matriz[i][j], matriz[N - i - 1][j]);
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int cont = 0;
    vector<vector<int>> matrizRevuelta(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrizRevuelta[i][j];
        }
    }

    if(validarMatriz(matrizRevuelta)) {
        cout << 0;
    } else {
        int cont = 0;
        while(!(validarMatriz(matrizRevuelta))) {
            rotarMatriz90izquierda(matrizRevuelta);
            cont++;
        }
        cout << cont;
    }





    return 0;
}
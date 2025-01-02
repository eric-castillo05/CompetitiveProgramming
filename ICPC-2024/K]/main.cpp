#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, O;
    cin >> N >> M >> O;

    vector<int> ingredientes(N);
    for (int i = 0; i < N; ++i) {
        cin >> ingredientes[i];
    }

    vector<vector<pair<int, int>>> platos(M); // plato -> {ingrediente, cantidad}
    for (int i = 0; i < M; ++i) {
        int mi;
        cin >> mi; // Número de ingredientes necesarios para este plato
        for (int j = 0; j < mi; ++j) {
            int ingrediente, cantidad;
            cin >> ingrediente >> cantidad;
            platos[i].push_back({ingrediente - 1, cantidad}); // Guardamos ingrediente (0-indexed) y cantidad
        }
    }


    for (int ordenActual = 0; ordenActual < O; ++ordenActual) {
        int oi;
        cin >> oi; // Número de platos en la orden
        vector<int> ingredientesUsados(N, 0); // Para contar cuánto de cada ingrediente usamos en esta orden

        vector<int> orden(oi);
        for (int i = 0; i < oi; ++i) {
            cin >> orden[i];
            orden[i]--; // Convertimos a 0-indexed
        }

        bool sePuedeCumplir = true;
        for (int i = 0; i < oi && sePuedeCumplir; ++i) {
            int plato = orden[i];
            for (auto &req : platos[plato]) {
                int ingrediente = req.first;
                int cantidadNecesaria = req.second;
                ingredientesUsados[ingrediente] += cantidadNecesaria;

                if (ingredientesUsados[ingrediente] > ingredientes[ingrediente]) {
                    sePuedeCumplir = false; // No hay suficientes ingredientes
                    break;
                }
            }
        }

        if (!sePuedeCumplir) {
            cout << ordenActual << endl;
            return 0;
        }

        for (int i = 0; i < N; ++i) {
            ingredientes[i] -= ingredientesUsados[i];
        }
    }

    cout << O << endl;
return 0;
}

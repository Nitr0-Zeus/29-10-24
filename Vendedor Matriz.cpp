#include <iostream>

using namespace std;

int main() {
    const int VENDEDOR = 5; 
    
    const int SEMANAS = 4; 
    double vendas[VENDEDOR][SEMANAS]; 
    double totalVendedor[VENDEDOR] = {0}; 
    double totalSemana[SEMANAS] = {0}; 
    double totalMes = 0; 

    cout << "Digite as vendas semanais dos 5 vendedores (4 semanas):" << endl;
    for (int i = 0; i < VENDEDOR; i++) {
        cout << "Vendedor " << (i + 1) << ":" << endl;
        for (int j = 0; j < SEMANAS; j++) {
            cout << "Semana " << (j + 1) << ": ";
            cin >> vendas[i][j];
        }
    }

    
    for (int i = 0; i < VENDEDOR; i++) {
        for (int j = 0; j < SEMANAS; j++) {
            totalVendedor[i] += vendas[i][j]; 
            totalSemana[j] += vendas[i][j];    
            totalMes += vendas[i][j];          
        }
    }

    cout << "\nTotal de vendas do mês de cada vendedor:" << endl;
    for (int i = 0; i < VENDEDOR; i++) {
        cout << "Vendedor " << (i + 1) << ": " << totalVendedor[i] << endl;
    }

    cout << "\nTotal de vendas de cada semana:" << endl;
    for (int j = 0; j < SEMANAS; j++) {
        cout << "Semana " << (j + 1) << ": " << totalSemana[j] << endl;
    }

    cout << "\nTotal de vendas do mês: " << totalMes << endl;

}

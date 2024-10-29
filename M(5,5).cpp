#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5; 
    int M[SIZE][SIZE]; 
    int somaLinha4 = 0, somaColuna2 = 0, somaDiagonalPrincipal = 0, somaTotal = 0;

    
    cout << "Digite os elementos da matriz 5x5:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << "M[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }

    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            
            if (i == 3) {
                somaLinha4 += M[i][j];
            }
        
            if (j == 1) {
                somaColuna2 += M[i][j];
            }
            
            if (i == j) {
                somaDiagonalPrincipal += M[i][j];
            }
            somaTotal += M[i][j];
        }
    }

    
    cout << "Soma da linha 4: " << somaLinha4 << endl;
    cout << "Soma da coluna 2: " << somaColuna2 << endl;
    cout << "Soma da diagonal principal: " << somaDiagonalPrincipal << endl;
    cout << "Soma de todos os elementos da matriz: " << somaTotal << endl;

}

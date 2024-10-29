#include <iostream>

using namespace std;

int main() {
    const int LINHAS = 4; 
    const int COLUNAS = 3; 
    int mat1[LINHAS][COLUNAS]; 
    int mat2[LINHAS][COLUNAS]; 
    int mat3[LINHAS][COLUNAS]; 

    cout << "Digite os elementos da matriz 1 (4x3):" << endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << "mat1[" << i << "][" << j << "]: ";
            cin >> mat1[i][j];
        }
    }

    cout << "Digite os elementos da matriz 2 (4x3):" << endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << "mat2[" << i << "][" << j << "]: ";
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j]; 
        }
    }

    
    cout << "Matriz soma (mat3):" << endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << mat3[i][j] << " "; 
        }
        cout << endl; 
    }

}

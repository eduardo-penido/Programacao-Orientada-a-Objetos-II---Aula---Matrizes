#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{

    int matriz[4][4], matriz_inv[4][4];

    cout << "Carga da matriz"
         << "\n";
    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            cout << "Informe um numero inteiro: ";
            cin >> matriz[linha][coluna];
        }
    }
    cout << "\n\n";

    cout << "Mostrando o conteudo da primeira matriz"
         << "\n";
    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            cout << matriz[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";

//    cout << "Geracao da matriz inversa"
//          << "\n";
    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            matriz_inv[coluna][linha] = matriz[linha][coluna];
        }
    }
    cout << "\n\n";

    cout << "Mostrando o conteudo matriz inversa"
         << "\n";
    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            cout << matriz_inv[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";
}
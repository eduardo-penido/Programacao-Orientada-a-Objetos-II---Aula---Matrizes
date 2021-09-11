#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{

    int matriz_1[3][3], matriz_2[3][3], matriz_soma[3][3];

    cout << "Carga da primeira matriz"
         << "\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << "Informe um numero inteiro: ";
            cin >> matriz_1[linha][coluna];
        }
    }
    cout << "\n\n";

    cout << "Carga da segunda matriz"
         << "\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << "Informe um numero inteiro: ";
            cin >> matriz_2[linha][coluna];
        }
    }
    cout << "\n\n";

    cout << "Geracao da matriz soma"
         << "\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            matriz_soma[linha][coluna] = matriz_1[linha][coluna] + matriz_2[linha][coluna];
        }
    }
    cout << "\n\n";

    cout << "Mostrando o conteudo da primeira matriz"
         << "\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz_1[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";

    cout << "Mostrando o conteudo da segunda matriz"
         << "\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz_2[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";

    cout << "Mostrando o conteudo da matriz soma"
         << "\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz_soma[linha][coluna] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";
}
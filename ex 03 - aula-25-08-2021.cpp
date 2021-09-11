#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{

    int matriz[4][4], procurado;
    bool encontrado = false;

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

    cout << "Informe o numero que devera ser procurado: ";
    cin >> procurado;
    cout << "\n";

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            if (procurado == matriz[linha][coluna])
            {

                encontrado = true;
            }
        }
    }

    if (encontrado == true)
    {
        cout << "O numero esta na matriz!!!"
             << "\n\n";
        for (int linha = 0; linha < 4; linha++)
        {
            for (int coluna = 0; coluna < 4; coluna++)
            {
                if (procurado == matriz[linha][coluna])
                {
                    cout << "Linha: " << linha + 1 << ", Coluna: " << coluna + 1 << endl;
                }
            }
        }
    }
    else
    {
        cout << "O numero nao esta na matriz!!!"
             << "\n";
    }
    cout << "\n";

    cout << "Mostrando o conteudo da matriz"
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
}
/*Exercício 3: Calculadora simples
Crie um programa que permita ao usuário realizar operações de adição, subtração, multiplicação e divisão em dois números.
O usuário deve escolher a operação e inserir os números.*/

#include <iostream>

using namespace std;

int main()
{

    /*MENU*/

    int a1, b1;

    cout << "Iremos fazer agora uma calculadora, para isso digite dois numeros : " << endl;
    cout << "Digite o primeiro numero : " << endl;
    cin >> a1;

    cout << "Digite o segundo numero : " << endl;
    cin >> b1;

    cout << "Ok, agora com os numero digitados escolha uma das opcoes a seguir : " << endl;
    cout << "*************************" << endl;
    cout << "1 - Somar" << endl;
    cout << "2 - Subtrair" << endl;
    cout << "3 - Multiplicar" << endl;
    cout << "4 - Dividir" << endl;
    cout << "5 - Encerrar" << endl;
    cout << "*************************" << endl;

    int opcao;
    cin >> opcao;

    /*LOOP*/

    do
    {

        if (opcao == 1)
        {
            cout << "Ok você escolheu a opcao de somar" << endl;

            int soma = a1 + b1;

            cout << "O resultado da soma dos dois numeros eh de :  " << soma << endl;
            break;
        }
        if (opcao == 2)
        {
            cout << "Ok você escolheu a opcao de subatrair" << endl;

            int subtrai = a1 - b1;

            cout << "O resultado da subtracao dos dois numeros eh de :  " << subtrai << endl;
            break;
        }
        if (opcao == 3)
        {
            cout << "Ok você escolheu a opcao de multiplicar" << endl;

            int multiplica = a1 * b1;

            cout << "O resultado da multiplicacao dos dois numeros eh de :  " << multiplica << endl;
            break;
        }
        if (opcao == 4)
        {
            cout << "Ok você escolheu a opcao de dividir" << endl;

            int dividir = a1 / b1;

            cout << "O resultado da dividir dos dois numeros eh de :  " << dividir << endl;
            break;
        }

    } while (opcao != 5);

    cout << "O programa foi encerrado com sucesso, volte sempre !!" << endl;

    return 0;
}
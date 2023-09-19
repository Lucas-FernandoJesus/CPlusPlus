/*Exercício 2: Soma de dois números
Crie um programa que solicite ao usuário dois números e depois exiba a soma desses números.*/

#include <iostream>

using namespace std;

int main (){

    int a1, b1;

    cout << "Digite o primeiro numero para a soma : " << endl;
    cin >> a1;

    cout << "Digite o segundo numero para a soma : " << endl;
    cin >> b1;

    int soma = a1+b1;

    cout << "A soma dos dois numeros eh de : " << soma << endl;
}
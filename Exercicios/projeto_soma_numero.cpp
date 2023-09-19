/*Vamos criar um programa que calcula a soma dos números inteiros de 1 a N, onde N é um número fornecido pelo usuário*/

#include <iostream>

using namespace std;

int main (){

    int num1,soma = 0;

    /*MENU*/

    cout << "Vamos agora calcular o numero digitado pelo o usuario !" <<endl;
    cout << "Digite um numero de sua preferencia : " <<endl;
    cin >> num1;

    /*CONDICOES*/

    if(num1 <= 0){
        cout << "Insira um numero positivo para que seja calculado corretamente !" <<endl;
        return 0;
    }
    else{
        for(int i = 1; i <= num1; i++)
        {
            soma += i;
        }
        cout << "A soma dos numeros de 1 a "<< num1 <<" eh de : "<< soma <<endl;
    }

    return 0;
}
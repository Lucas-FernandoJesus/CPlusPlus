/*Vamos criar um programa de calculadora básica que permite ao usuário realizar operações de adição, subtração, multiplicação e divisão.
Este projeto irá ajudá-lo a praticar conceitos de entrada, saída e controle de fluxo em C++*/

#include <iostream>

using namespace std;

int main (){

    /*MENU*/

    int escolha;
    double num1,num2;

    cout << "Calculadora das 4 operacoes : "<<endl;
    cout << "Escolha uma das seguintes opcoes : " << endl;
    cout << "---- 1 - Soma " << endl;
    cout << "---- 2 - Subtracao " << endl;
    cout << "---- 3 - Multiplicacao " << endl;
    cout << "---- 4 - Divisao " << endl;

    cin >> escolha;

    cout << "Escolha o primeiro numero : " << endl;
    cin >> num1;
    cout << "Escolha o segundo numero : " << endl;
    cin >> num2;

    /*RESOLUÇÃO*/

    double mais = num1 + num2;
    double menos = num1 - num2;
    double multiplica = num1 * num2;
    double divide = num1 / num2;

    /*CONDIÇÕES*/

    if(escolha == 1){
        cout << "A opcao que voce escolheu foi : " << escolha << ". E o resultado dessa escolha eh de : " << mais <<endl;
    }
    else if(escolha == 2){
        cout << "A opcao que voce escolheu foi : " << escolha << ". E o resultado dessa escolha eh de : " << menos <<endl;
    }
    else if(escolha == 3){
        cout << "A opcao que voce escolheu foi : " << escolha << ". E o resultado dessa escolha eh de : " << multiplica <<endl;
    }
    else if(escolha == 4){
        if(num2 != 0){
        cout << "A opcao que voce escolheu foi : " << escolha << ". E o resultado dessa escolha eh de : " << divide <<endl;
        }
        else {
            cout << "Erro ! Divisao por zero." << endl;
        }
    }
    else{
        cout << "Escolha invalida !" << endl;
    }

    return 0;

}
/*Vamos criar um projeto simples em C++ que converte graus Celsius para Fahrenheit*/

#include <iostream>

using namespace std;

int main (){


    /*MENU*/

    int escolha;
    double celsius,fahr,temperatura;

    cout << "Conversor de Celsius para Fahrenheit e vice versa !" <<endl;
    cout << "Escolha uma das opcoes de conversoes : " <<endl;
    cout << "--- 1 - Celsius para Fahrenheit" <<endl;
    cout << "--- 2 - Fahrenheit para Celsius" <<endl;
    cin >> escolha;

    if(escolha < 1){
        cout << "Opcao nao reconhecida !!" << endl;
        return 0;
    }

    cout << "Ok, com a escolha de conversao decidida insira a quantia de temperatura que voce quer converter : " << endl;
    cin >> temperatura;

    /*RESOLUÇÃO*/

    celsius = (temperatura * 9 / 5) + 32;
    fahr = (temperatura - 32) / 1.8;

    /*CONDIÇÕES*/

    if(escolha == 1){
        cout << "A temperatura em conversao de Celsius para Fahrenheit fica em : "<<celsius <<"° F"<< endl;
    }
    else if(escolha == 2){
        cout << "A temperatura em conversao de Fahrenheit para Celsius fica em : "<<fahr<<"° C"<< endl;
    }

    return 0;
}
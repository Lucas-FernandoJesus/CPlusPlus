/*Vamos criar um projeto que verifica se um número é primo ou não. Um número primo é aquele que só é divisível por 1 e por ele mesmo. */

#include <iostream>

using namespace std;

int main(){

    int numero;
    bool primo = true;

    cout << "Calculador de numeros primos :" <<endl;
    cout << "Digite o numero que voce deseja verificar se ele eh primo ou nao : " <<endl;
    cin >> numero;

    if(numero <= 1){
        cout << "Numeros menores ou iguais a 1 nao sao primos. " <<endl;
    }
    else{
        for(int i = 2; i <= numero/ 2; i++){
            if(numero % i == 0){
                primo = false;
                break;
            }
        }
    }

    if(primo){
        cout << numero << " Eh um numero primo !" <<endl;
    }
    else{
        cout << numero << " Nao eh um numero primo !" <<endl;
    }


    return 0;
}
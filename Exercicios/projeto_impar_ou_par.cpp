/* Vamos criar um exercício em C++ que verifica se um número é par ou ímpar. O programa solicitará ao usuário um número inteiro e, em seguida, determinará se ele é par ou ímpar*/

#include <iostream>

using namespace std;

int main (){

    int num;

    cout << "Digite o numero que voce desejar e o programa ira dizer se ele eh impar ou par." <<endl;
    cout << "Digite o numero agora : " <<endl;
    cin >> num;

    if(num % 2 == 0){
        cout << "O numero : "<<num <<" Eh par !"<<endl;
    }
    else{
        cout << "O numero : "<<num<<" Eh impar !"<<endl;
    }

    return 0;
}
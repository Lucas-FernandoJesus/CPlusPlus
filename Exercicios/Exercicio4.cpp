/*Exercício 4: Média de três números
Peça ao usuário para inserir três números e calcule a média desses números.*/
#include <iostream>

using namespace std;

int main(){

    /*MENU*/

    int a,b,c;

    cout << "Insira agora tres numeros para que seja feito o calculo da media desse numeros" << endl;
    cout << "Numero 1 : " << endl;
    cin >> a;
    cout << "Numero 2 : " << endl;
    cin >> b;
    cout << "Numero 3 : " << endl;
    cin >> c;

    int media = (a+b+c) / 3 ;

    cout << "O valor da media entre esses 3 numeros eh de : " << media << endl;

    return 0;
}
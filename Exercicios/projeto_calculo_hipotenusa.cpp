/*Vamos criar um exercício em C++ que envolve uma calculadora de hipotenusa. O programa calculará a hipotenusa de um triângulo retângulo com base nos catetos fornecidos pelo usuário.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double cateto1,cateto2,hipotenusa;
    /*MENU*/

    cout << "-------- Calculadora hipoteusa --------"<<endl;
    cout << "---------------------------------------"<<endl;
    cout << "Digite o valor do primeiro cateto : "<<endl;
    cin >> cateto1;

    cout << "Agora digite o valor do segundo cateto para fazermos o calculo : "<<endl;
    cin >> cateto2;

    /*RESOLUÇÃO*/

    // hipotenusa = sqrt(cateto1^2 + cateto2^2);
    hipotenusa = sqrt(cateto1*cateto1 + cateto2 * cateto2);

    cout << "O resultado da hipotenusa eh de : "<<hipotenusa <<endl;

    return 0;
}
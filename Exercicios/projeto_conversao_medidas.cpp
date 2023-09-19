/*Vamos criar um programa para converter unidades de medida entre quilogramas (kg) e libras (lb)*/

#include <iostream>

using namespace std;

int main (){

    int escolha;
    double valor;

    /*MENU*/

    cout << "Conversor de medidas : "<<endl;
    cout << "Ha duas conversoes que podem ser realizadas, sendo elas : " <<endl;
    cout << "---- 1 - kg para lb ." <<endl;
    cout << "---- 2 - lb para kg ." <<endl;
    cout << "Escolha uma delas !" <<endl;
    cin >> escolha;

    cout << "Com a opcao confirmada digite o valor que voce quer converter logo abaixo : " <<endl;
    cin >> valor;

    /*RESOLUÇÃO*/

    double libras = valor * 2.20462;
    double quilos = valor / 2.20462;

    /*CONDICOES*/

    if(escolha == 1){
        cout << "A conversao de " << valor << " kg, para libras eh de : " << libras << endl;
    }
    else if(escolha == 2){
        cout << "A conversao de " << valor << " lb, para quilos eh de : " << quilos << endl;
    }
    else{
        cout << "Opcao invalida !" <<endl;
    }

    return 0;

}
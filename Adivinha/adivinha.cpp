#include <iostream>

using namespace std;

int main (){

    cout << "--------------------------------------" << endl;
    cout << "---BEM VINDO AO JOGO DE ADIVINHACAO---" << endl;
    cout << "--------------------------------------" << endl;

    const int NUM_SECRET = 5;
    int chute;

    cout << "Qual o seu chute  ?" << endl;
    cin >> chute;
    cout << "O valor do seu chute eh : " << chute << endl;

    bool acertou = (chute == NUM_SECRET);
    bool maior = (chute > NUM_SECRET);

    if (acertou){
        cout << "Parabens voce acertou o numero secreto !" << endl;
    }
    else if (maior){
        cout << "O seu chute foi maior que o numero secreto !" << endl;
    }
    else{
        cout << "O seu numero eh menor que o numero secreto !" << endl;
    }
}
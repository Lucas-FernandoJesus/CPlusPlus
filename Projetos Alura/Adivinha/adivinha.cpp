#include <iostream>

using namespace std;

int main (){

    cout << "--------------------------------------" << endl;
    cout << "---BEM VINDO AO JOGO DE ADIVINHACAO---" << endl;
    cout << "--------------------------------------" << endl;

    const int NUM_SECRET = 5;

    bool nao_acertou = true;
    int tentativas = 0;

    double pontos = 1000.0;

    while(nao_acertou){
        tentativas ++;
        int chute;
        cout << "Tentativa : " <<tentativas <<endl;
        cout << "Qual o seu chute  ?" << endl;
        cin >> chute;

        double pontos_perdidos = abs(chute - NUM_SECRET)/2.0;
        pontos = pontos - pontos_perdidos;

        cout << "O valor do seu chute eh : " << chute << endl;

        bool acertou = (chute == NUM_SECRET);
        bool maior = (chute > NUM_SECRET);

        if (acertou){
            cout << "Parabens voce acertou o numero secreto !" << endl;
            nao_acertou = false;
        }
        else if (maior){
            cout << "O seu chute foi maior que o numero secreto !" << endl;
        }
        else{
            cout << "O seu numero eh menor que o numero secreto !" << endl;
        }
    }
    cout << "Fim de Jogo !"<<endl;
    cout << "Voce acertou o numero secreto em : "<<tentativas <<" tentativas."<<endl;
    cout.precision(2);
    cout << fixed;
    cout << "Sua pontuacao foi de : " <<pontos <<endl;
}
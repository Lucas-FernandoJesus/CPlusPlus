#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){

    /*MENU*/

    cout << "--------------------------------------" << endl;
    cout << "---BEM VINDO AO JOGO DE ADIVINHACAO---" << endl;
    cout << "--------------------------------------" << endl;

    cout << "Escolha o seu nivel de dificuldade : " <<endl;
    cout << "As opcoes sao : " <<endl;
    cout << "Facil (F), Medio (M), Dificil (D)" << endl;

    char dificuldade;
    cin >> dificuldade;
    
    int numero_de_tentativas;

    /*CONDICOES*/

    if(dificuldade == 'F'){
        numero_de_tentativas = 15;
    }
    else if(dificuldade == 'M'){
        numero_de_tentativas = 10;
    }
    else if (dificuldade == 'D'){
        numero_de_tentativas = 5;
    }
    else{
        cout << "Entrada invalida, digite uma opcao valida !" <<endl;
        return 0;
    }

    /*NUMERO ALEATORIO*/

    srand(time(0));
    const int NUM_SECRET = rand() % 100;

    bool nao_acertou = true;
    int tentativas = 0;

    /*PONTUACAO*/

    double pontos = 1000.0;

    /*LOOP*/

    for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++){
        int chute;
        cout << "Tentativa : " <<tentativas <<endl;
        cout << "Qual o seu chute  ?" << endl;
        cin >> chute;

        double pontos_perdidos = abs(chute - NUM_SECRET)/2.0;
        pontos = pontos - pontos_perdidos;

        cout << "O valor do seu chute eh : " << chute << endl;

        bool acertou = (chute == NUM_SECRET);
        bool maior = (chute > NUM_SECRET);

        /*CONDICOES*/

        if (acertou){
            cout << "Parabens voce acertou o numero secreto !" << endl;
            nao_acertou = false;
            break;
        }
        else if (maior){
            cout << "O seu chute foi maior que o numero secreto !" << endl;
        }
        else{
            cout << "O seu numero eh menor que o numero secreto !" << endl;
        }
    }
    cout << "Fim de Jogo !"<<endl;
    if (nao_acertou){
        cout << "Voce perdeu tente novamente" <<endl;
    }
    else{
    cout << "Voce acertou o numero secreto em : "<<tentativas-- <<" tentativas."<<endl;
    cout.precision(2);
    cout << fixed;
    cout << "Sua pontuacao foi de : " <<pontos <<endl;
    }

    /*PARA O PROGRAMA NAO PARAR DE RODAR RETIRAR O :
    return 0;
    */
    return 0;
}
#include <iostream>
#include <string>

const string PALAVRA_SECRETA = "MELANCIA";

using namespace std;

bool letra_existe(char chute){
    for (int i = 0; i < PALAVRA_SECRETA.size(); i++){
        if (chute == PALAVRA_SECRETA[i]){
            return true;
        }
    }
    return false;    
}

int main (){


    cout << PALAVRA_SECRETA <<endl;

    bool nao_acertou = true ;
    bool nao_enforcou = true ;

    while (nao_acertou && nao_enforcou){
        char chute;
        cin >> chute;

        if(chute == PALAVRA_SECRETA){
            cout << "Voce acertou ! O seu chute esta na palavra !" <<endl;
        }
        else {
            cout << "Voceerrou ! Seu chute nao esta na palavra !" <<endl;
        }
    }
    

    return 0;
}
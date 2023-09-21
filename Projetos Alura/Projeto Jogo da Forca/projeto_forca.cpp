#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>

using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";
map<char, bool> chutou;
vector<char>chutes_errados;

bool letra_existe(char chute){
    for(char letra : PALAVRA_SECRETA){
        if (chute == letra){
            return true;
        }
    }

    return false;
}

bool nao_acertou(){
    for(char letra : PALAVRA_SECRETA){
        if(!chutou[letra]){
            return true;
        }
    }
    return false;
}

bool nao_enforcou(){
    return chutes_errados.size() < 5;
}

void menu(){
    cout << "-------------------" <<endl;
    cout << "---Jogo da Forca---" <<endl;
    cout << "-------------------" <<endl;
}

void erros (){
    cout << "Chutes errados : ";
    for(char letra : chutes_errados){
        cout << letra <<" ";
    }
    cout <<endl;
}

void imprime_palavra(){
    for(char letra : PALAVRA_SECRETA){
        if(chutou[letra]){
            cout << letra<< " ";
        }
        else{
            cout << "_ ";
        }
    }
    cout << endl;
}

void chuta (){
    cout << "Seu chute : " <<endl;
    char chute;
    cin >> chute;

    chutou[chute] = true;

    if(letra_existe(chute)){
        cout << "Voce acertou ! O seu chute esta na palavra !" <<endl;
    }
    else {
        cout << "Voce errou ! Seu chute nao esta na palavra !" <<endl;
        chutes_errados.push_back(chute);
    }
    cout <<endl;
}

void le_arquivo(){
    ifstream arquivo;
    arquivo.open("palavras.txt");

    int quantidade_palavras;
    arquivo >> quantidade_palavras;

    cout << "O arquivo possui : " <<quantidade_palavras <<" palavras."<<endl;

    for (int i = 0; i < quantidade_palavras; i++){
        string palavra_lida;
        arquivo >> palavra_lida;
        cout << "Na linha " << i << " : " <<palavra_lida <<endl;
    }
    
}

int main (){

    menu();

    while (nao_acertou() && nao_enforcou()){

        erros();

        imprime_palavra();

        chuta();
    }
    cout <<"Fim de Jogo !" <<endl;
    cout <<"A palavra secreta era : " <<PALAVRA_SECRETA <<endl;
    if (nao_acertou()){
        cout << "Tente novamente !" <<endl;
    }
    else{
        cout << "Voce acertou a palavra secreta !" <<endl;
    }
    return 0;
}
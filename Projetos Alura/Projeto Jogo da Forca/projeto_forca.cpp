#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

string palavra_screta = "MELANCIA";
map<char, bool> chutou;
vector<char>chutes_errados;

bool letra_existe(char chute){
    for(char letra : palavra_screta){
        if (chute == letra){
            return true;
        }
    }

    return false;
}

bool nao_acertou(){
    for(char letra : palavra_screta){
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
    for(char letra : palavra_screta){
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

vector<string> le_arquivo(){
    ifstream arquivo;
    arquivo.open("../palavras.txt");

    if(arquivo.is_open()){
        int quantidade_palavras;
        arquivo >> quantidade_palavras;

        vector<string> palavras_do_arquivo;

        for (int i = 0; i < quantidade_palavras; i++){
            string palavra_lida;
            arquivo >> palavra_lida;
            palavras_do_arquivo.push_back(palavra_lida);
        }
        arquivo.close();
        return palavras_do_arquivo;
    }
    else{
        cout << "Arquivo de banco nao encontrado" <<endl;
        exit(0);
    }
}

void sorteia_palavra(){
    vector<string> palavras = le_arquivo();

    srand(time(0));
    int indice_sorteado = rand() % palavras.size();

    palavra_screta = palavras[indice_sorteado];
}

void salva_arquivo(vector<string> nova_lista){
    ofstream arquivo;
    arquivo.open("../palavras.txt");
    if(arquivo.is_open()){
        arquivo << nova_lista.size() <<endl;
        for (string palavra : nova_lista){
            arquivo << palavra <<endl;
        }
        arquivo.close();
    }
    else{
        cout << "Arquivo de banco nao encontrado" <<endl;
        exit(0);
    }

}

void adiciona_palavra(){
    cout << "Digite a nova palavra em letras maiusculas" <<endl;
    string nova_palavra;
    cin >> nova_palavra;
    
    vector<string> lista_palavras = le_arquivo();
    lista_palavras.push_back(nova_palavra);

    salva_arquivo(lista_palavras);
}

int main (){

    menu();

    le_arquivo();
    sorteia_palavra();


    while (nao_acertou() && nao_enforcou()){

        erros();

        imprime_palavra();

        chuta();
    }
    cout <<"Fim de Jogo !" <<endl;
    cout <<"A palavra secreta era : " <<palavra_screta <<endl;
    if (nao_acertou()){
        cout << "Tente novamente !" <<endl;
    }
    else{
        cout << "Voce acertou a palavra secreta !" <<endl;

        cout << "Voce deseja adicionar uma nova palavra ? (S/N)" <<endl;
        char resposta;
        cin >> resposta;
        if(resposta == 'S'){
            adiciona_palavra();
        }
    }
    return 0;
}
/*Vamos criar um exercício que utiliza uma estrutura (struct) para representar informações sobre livros.
O programa permitirá ao usuário inserir detalhes de vários livros, armazená-los em uma lista de livros e, em seguida, exibir os detalhes de todos os livros inseridos. */

#include <iostream>
#include <string>

using namespace std;

struct Livro{

    string titulo;
    string autor;
    int anoPublicacao;
    int qtdPaginas;
};

void quebra_linha(){
    cout << "" <<endl;
};

int main (){

    int numLivros;

    cout << "------Gerenciador de Livros-------" <<endl;
    cout << "----------------------------------" <<endl;
    cout << "Quantos livros voce quer inserir ?" <<endl;
    
    if(numLivros <= 0){
        cout << "Voce deve inserir uma quantidade acima de 0 !" << endl;
        return 0;
    }
    else{
        cin >> numLivros;

        /*PUXANDO A STRUCT (LIVRO) CRIADA E ALOCANDO AS INFORMAÇÕES NO ARRAY : listaLivros : */

        Livro listaLivros [numLivros];

        for(int i = 0; i< numLivros; i++){
            cout << "Livro #" << i+1 <<endl;

            cout << "Titulo : " <<endl;
            cin.ignore();
            getline(cin, listaLivros[i].titulo);

            cout << "Autor : " <<endl;
            getline(cin, listaLivros[i].autor);

            cout << "Ano de Publicacao : " <<endl;
            cin >> listaLivros[i].anoPublicacao;

            cout << "Quantidade de Paginas : " <<endl;
            cin >> listaLivros[i].qtdPaginas;
        }

        quebra_linha();

        cout << "Detalhe dos livros inseridos : " <<endl;
        for(int i = 0; i < numLivros; i++){
            cout << "Livro #" <<i + 1 <<endl;
            cout << "Titulo : " <<listaLivros[i].titulo <<endl;
            cout << "Autor : " <<listaLivros[i].autor <<endl;
            cout << "Ano de Publicacao : " <<listaLivros[i].anoPublicacao <<endl;
            cout << "Quantidade de Paginas : " <<listaLivros[i].qtdPaginas <<endl;

            quebra_linha();

        }
    }

    return 0;
}
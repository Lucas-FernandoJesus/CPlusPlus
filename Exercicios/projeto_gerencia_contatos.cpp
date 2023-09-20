/*Criar um programa simples de gerenciamento de contatos. O programa permite ao usuário adicionar, visualizar e listar os contatos armazenados. */

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

struct Contato{
    string Nome;
    string telefone;
};

void quebra_linha(){
    cout <<""<<endl;
}

int main (){

    /*DEFININDO VETOR DE UMA LISTA DINAMICA : CONTATO*/

    vector <Contato> listaContato;

    while(true){
        cout << "--------------------------------------" <<endl;
        cout << "--------Gerenciador de contatos-------"<<endl;
        cout << "Opcoes :" <<endl;
        cout << "1 - Criar contato." <<endl;
        cout << "2 - Visualizar contato." <<endl;
        cout << "2 - Sair." <<endl;
        cout << "Escolha !" <<endl;

        int opcao;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            /* code */
            break;
        
        default:
            break;
        }
        
    }
}
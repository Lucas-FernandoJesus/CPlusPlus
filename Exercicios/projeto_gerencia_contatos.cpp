/*Criar um programa simples de gerenciamento de contatos. O programa permite ao usuário adicionar, visualizar e listar os contatos armazenados. */

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

struct Contato{
    string Nome;
    string Telefone;
};

void quebra_linha(){
    cout <<""<<endl;
}

int main (){

    /*DEFININDO VETOR DE UMA LISTA DINAMICA : CONTATO*/

    vector <Contato> listaContato;
    
    /*MENU*/
    
    while(true){
        cout << "--------------------------------------" <<endl;
        cout << "--------Gerenciador de contatos-------"<<endl;
        cout << "Opcoes :" <<endl;
        cout << "1 - Criar contato." <<endl;
        cout << "2 - Visualizar contato." <<endl;
        cout << "3 - Editar Contato." <<endl;
        cout << "4 - Sair." <<endl;
        cout << "Escolha !" <<endl;

        /*LOOP*/

        int opcao;
        cin >> opcao;

        switch (opcao) {
            case 1:{
                Contato novoContato;

                cout << "Nome : " <<endl;
                cin.ignore();
                getline(cin, novoContato.Nome);

                cout << "Telefone : " <<endl;
                cin.ignore();
                getline(cin, novoContato.Telefone);
                listaContato.push_back(novoContato);
                quebra_linha();
                
                cout << "Contato adicionado com sucesso !" <<endl;
                quebra_linha();
                
                break;
            }
            case 2:{
                cout << "Lista de Contatos : " <<endl;
                quebra_linha();
                for(const Contato& contato : listaContato){
                    cout << "Nome : " <<contato.Nome <<endl;
                    cout << "Telefone : " <<contato.Telefone <<endl;
                    quebra_linha();
                }
                break;
            }

            /*FEITO ALEM*/

            case 3:
                if(listaContato.empty()){
                    cout << "Nao ha nenhum contato para ser editado, pois a lista esta vazia !" << endl;
                    break;
                }

                cout << "Insira o 'id' que do indice que voce quer editar : " <<endl;

                int indice;
                cin >> indice;

                if(indice >= 1 && indice <= listaContato.size()){
                    cout << "Editar contato #" <<indice <<":" <<endl;

                    cout << "Novo Nome : " <<endl;
                    cin.ignore();
                    getline(cin, listaContato[indice -1].Nome);

                    cout << "Novo Telefone : " <<endl;
                    getline(cin, listaContato[indice - 1].Telefone);

                    quebra_linha();
                    cout << "Contato adicionado com suceso !" <<endl;

                    quebra_linha();
                }

                /*TRATAMENTO*/

                else{
                    cout << "Indice invalido, tente novamente !" <<endl;
                }
                break;

                case 4:
                    cout << "Saindo do programa agora ! Ate mais !" <<endl;
                    return 0;
        }
    }
    return 0;
}
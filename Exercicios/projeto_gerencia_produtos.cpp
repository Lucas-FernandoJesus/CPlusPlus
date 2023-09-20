/*gerenciar uma lista de produtos. Os produtos terão um nome, preço e quantidade em estoque.
O programa permitirá ao usuário adicionar produtos à lista, visualizar a lista de produtos e editar informações sobre os produtos.*/

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

struct Produto{
    string Nome;
    double preco;
    int quantidade;
};

void quebra_linha(){
    cout << endl;
}

int main (){

    vector<Produto> listaProduto;

    while(true){

        cout << "--------------------------------------" <<endl;
        cout << "--------Gerenciador de Produtos-------"<<endl;
        cout << "1 - Inserir Produto :" <<endl;
        cout << "2 - Visualizar Produto :" <<endl;
        cout << "3 - Editar Produto :" <<endl;
        cout << "4 - Sair :" <<endl;
        cout << "Escolha !" <<endl;
    }

    int opcao;
    cin >> opcao;

    switch (opcao){
        case 1: {

            Produto novoProduto;

            cout << "Adicione a descricao do produto que deseja cadastrar : " <<endl;
            cin.ignore();
            getline(cin, novoProduto.Nome);

            cout << "Qual sera o preco desse produto ?" <<endl;
            cin >> novoProduto.preco;

            cout << "Qual sera a quantidade em estoque desse produto ?" <<endl;
            cin >> novoProduto.quantidade;

            listaProduto.push_back(novoProduto);

            quebra_linha();
            cout << "Produto cadastrado com sucesso !" <<endl;
            quebra_linha();

            break;
        }
        case 2:{
            if(listaProduto.empty()){
                cout << "Nao ha nenhum produto cadastrado ainda para que seja possivel visualizar a lista do estoque !" <<endl;
            }
            else{
                quebra_linha();
                for(const Produto& novoProduto : listaProduto){
                    cout << "Descricao : " <<novoProduto.Nome <<endl;
                    cout << "Preco : " <<novoProduto.preco<<endl;
                    cout << "Quantidade em estoque : " <<novoProduto.quantidade << endl;
                    quebra_linha();
                }
                break;
            }
        }
        
        case 3:
            if(listaProduto.empty()){
                cout << "Nao ha nenhum produto cadastrado ainda para que seja possivel editar a lista do estoque !" <<endl;
            }
            cout << "Insira o ID do produto em estoque que voce quer editar : " <<endl;

            int indice;
            cin >>indice;

            if (indice >= 1 && indice <= listaProduto.size()){
                cout << "Editar produto #" <<indice <<endl;

                cout <<"Digite a nova descricao do produto : " <<endl;
                cin.ignore();
                getline(cin, listaProduto[indice -1].Nome);

                cout << "Digite o novo preco do produto : " <<endl;
                cin >> listaProduto[indice -1].preco;

                cout << "Digite a quantidade em estoque real do produto : " <<endl;
                cin >> listaProduto[indice -1].quantidade;
                quebra_linha();

                cout << "Porduto atualizado com sucesso !" <<endl;
            }
            else{
                cout << "ID do indice invalido !" <<endl;
            }
            break;

        case 4:
            cout << "Saindo do programa agora ! Ate mais !" <<endl;
            return 0;
    }
    return 0;
}
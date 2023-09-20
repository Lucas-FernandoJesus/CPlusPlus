/*Usaremos uma struct para representar informações de alunos e permite ao usuário inserir detalhes sobre vários alunos,
armazená-los em uma lista e, em seguida, exibir os detalhes de todos os alunos inseridos.*/

#include <iostream>
#include <string>

using namespace std;

struct Aluno{
    string nome;
    int idade;
    double nota;
};

void quebra_linha(){
    cout << "" <<endl;
};


int main(){

    int numAlunos;

    cout << "--------GERENCIADOR DE ALUNOS--------" <<endl;
    cout << "-------------------------------------" <<endl;
    cout << "Quantos alunos voce quer inserir ?" <<endl;
     if(numAlunos <= 0){
        cout << "Voce deve inserir uma quantidade acima de 0 !" << endl;
        return 0;
    }
    else{
        cin >> numAlunos;

        Aluno listaAlunos[numAlunos];

        for (int i = 0; i < numAlunos; i++){
            quebra_linha();
            cout << "Aluno#" << i+1 <<endl;

            cout << "Digite o nome do aluno : " <<endl;
            cin.ignore();
            getline(cin, listaAlunos[i].nome);

            cout << "Digite a idade desse aluno : " <<endl;
            cin >> listaAlunos[i].idade;

            cout << "Digite a nota desse aluno : " <<endl;
            cin >> listaAlunos[i].nota;
        }
        
        quebra_linha();

        cout << "Informacoes dos cidadaos inseridos : " <<endl;
        for (int i = 0; i < numAlunos; i++){
            cout << "Numero : "<< i+1 <<endl;
            cout << "Nome : "<< listaAlunos[i].nome <<endl;
            cout << "Idade : " <<listaAlunos[i].idade <<endl;
            cout << "Nota : " <<listaAlunos[i].nota <<endl;

            quebra_linha();
        }
    }
    return 0;
}
/*Criar um programa que gerencie as pessoas que estão frequentando uma academia
Campos a criar :

Nome
Idade
Sexo
Quantidade de dias de treino;

Que possa visualizar e editar as informações da pessoa cadastrada;
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Aluno
{
    string Nome;
    int Idade;
    string Sexo;
    int Treino;
};

void quebra_linha()
{
    cout << endl;
}

int main()
{

    vector<Aluno> listaAlunos;

    while (true)
    {
        cout << "---------------------------" << endl;
        cout << "--Gerenciador da academia--" << endl;
        cout << "Escolha uma das seguintes opcoes :" << endl;
        cout << "1 - Cadastrar novo aluno na academia." << endl;
        cout << "2 - Visualizar os alunos ja cadastrados." << endl;
        cout << "3 - Editar os cadastros dos alunos." << endl;
        cout << "4 - Sair." << endl;
    

    int opcao;
    cin >> opcao;

    switch (opcao)
    {

    case 1:
    {

        Aluno novosAlunos;

        cout << "Nome : " << endl;
        cin.ignore();
        getline(cin, novosAlunos.Nome);

        cout << "Idade : " << endl;
        cin >> novosAlunos.Idade;

        cout << "Sexo : " << endl;
        cin.ignore();
        getline(cin, novosAlunos.Sexo);

        cout << "Quantidade de Treinos durante a semana : " << endl;
        cin >> novosAlunos.Treino;
        quebra_linha();

        listaAlunos.push_back(novosAlunos);

        quebra_linha();
        cout << "Aluno cadastrado com sucesso !" << endl;
        quebra_linha();

        break;
    }
    case 2:
    {
        if (listaAlunos.empty())
        {
            cout << "Nao ha nenhum Aluno cadastrado ainda para que seja possivel visualizar a lista !" << endl;
        }
        else
        {
            quebra_linha();
            cout << "---------Lista de alunos---------" << endl;
            for (const Aluno &Alunos : listaAlunos)
            {
                cout << "Nome : " << Alunos.Nome << endl;
                cout << "Idade : " << Alunos.Idade << endl;
                cout << "Sexo : " << Alunos.Sexo << endl;
                cout << "Quantidade de Treinos durante a semana : " << Alunos.Treino << endl;
                quebra_linha();
            }
            break;
        }
    }
    case 3:
        if (listaAlunos.empty())
        {
            cout << "Nao ha nenhum Aluno cadastrado ainda para que seja possivel editar a lista !" << endl;
        }

        cout << "Insira o ID do Cadastro do Aluno que voce quer editar : " << endl;

        int indice;
        cin >> indice;

        if (indice >= 1 && indice <= listaAlunos.size())
        {

            cout << "Digite as informacoes atualizadas : " << endl;
            cout << "Editar Cadastro #" << indice << endl;

            cout << "Nome do Aluno : " << endl;
            cin.ignore();
            getline(cin, listaAlunos[indice - 1].Nome);

            cout << "Idade : " << endl;
            cin >> listaAlunos[indice - 1].Idade;

            cout << "Sexo : " << endl;
            cin.ignore();
            getline(cin, listaAlunos[indice - 1].Sexo);

            cout << "Quantidade de Treinos durante a semana : " << endl;
            cin >> listaAlunos[indice - 1].Treino;

            quebra_linha();

            cout << "Informacoes atualizadas com sucesso !" << endl;
        }
        else
        {
            cout << "ID do indice invalido tente novamente !" << endl;
        }
        break;
    case 4:
        cout << "Saindo do programa agora !" << endl;
        return 0;
        }
    }
    return 0;
}
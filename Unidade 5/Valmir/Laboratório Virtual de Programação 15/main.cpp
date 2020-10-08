#include <iostream>
#include<iomanip>
using namespace std;
//prot�tipo da fun��o principal
int main();
//incluindo lista
#include "./Lista.cpp"
int main() {
    //intanciando objeto lista
    Lista lN;
    //vari�vel auxilar que recebe o nome
    string Nome;
    //vari�vel auxilar que recebe o tamanho da lista
    int sizeL;
    //soliciatndo o tamanho da lista ao usu�rio
    cout<<"Informe a tamanho da lista: ";cin>>sizeL;
    //enviando tamanho da lista para o atributo de destino
    lN.setsizeL(sizeL);
    //loop
    while(true) {
        //vari�vel que recebe a op��o informada na fun��o menu
        int  op = lN.menu();
        switch(op){
            case 1:
                //caso 1 o usu�rio escolhei inserir um nome a lista
                cout.fill('0');
                //solicitandi que o usu�rio informe o nome para efetuar o cadastro
                cin.ignore();
                cout<<"Nome[" <<setw(2)<< Lista::getdNomes() + 1 << "]: ";
                getline(cin,Nome);
                //inserindo nome
                if(not(lN.inserirNome(Nome)))cout<<"Nome nao adicionada a lista"<<endl;
                //ignorando caracter especial \n
                break;
            case 2:
                //caso 2 o usu�rio escolhei imprimindo lista
                lN.imprimirLista();
                break;
            case 3:
                //caso 3 o usu�rio escolhei ordenar lista
                lN.ordenarNomes();
                cout<<"Lista Ordenada"<<endl;
                break;
            case 4:
                //caso 4 o usu�rio escolhei mostrar total de nomes na lista
                cout<<"Total: "<<Lista::getdNomes()<<endl;
                break;
            case 5:
                //caso 5 o usu�rio escolhei limpar a tela
                system("cls");
                break;
            default:
                //caso 6 o usu�rio escolhei fechar
                return 0;
        }
    }
}

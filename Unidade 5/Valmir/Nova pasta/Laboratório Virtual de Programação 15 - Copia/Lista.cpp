//
// Created by valmyr on 01/10/2020.
//
#include "./Lista.h"
Lista::Lista(){
    sizeL = 1;
    qNomesLista = 0;
    listaNomes = (string *)new string[sizeL];
}
Lista::Lista(int sizeL){
    this->sizeL = sizeL;
    qNomesLista = 0;
    //chamando a fun��o para alocar a lista
    alocarLista();
}
void Lista::alocarLista(){
    //alocando a lista de nomes
    listaNomes = (string *) new string[sizeL];
}
//set do atributos sizeL
void Lista::setsizeL(int sizeL) {
    this->sizeL = sizeL;
    //chamando a fun��o para alocar a lista
    alocarLista();
}
//get qNomesLista retorna a quantidade atual de nomes na lista
int Lista::getqNomesLista(){
    return qNomesLista;
}
//adiciona um nome a lista
bool Lista::inserirNome(string Nome) {
    //se qNomesLista == sizeL a lista esta cheia e o nome n�o e  adicionado a lista
    if(qNomesLista >= sizeL){
        cout<<"Lista cheia"<<endl;
        //retornando falso informando que o nome n�o foi adicionando a lista
        return false;
    }
    //caso contr�rio o nome e adicionado
    //vari�vel auxiliar que tem como fun��o preserva o primeiro endere�o
    string *auxTemp = (string *)listaNomes;
    *(auxTemp+qNomesLista) = Nome;
    //convertendo a primeira letra do nome para mai�sculo
    tratamentoNomes();
    //incrementando a quantidade atual de nomes
    qNomesLista++;
    //retornando verdadeiro informando que o nome foi adicionando com sucesso
    return true;
}
//mostra os nomes na tela
void Lista::imprimirLista() const {
    //caracter de preenchimento para a formata��o dos indeces
    cout.fill('0');
    //se qNomesLista for igual a zero isso significa que a lista esta vazia
    if(qNomesLista == 0){
        cout<<"Lista vazia"<<endl;
        //sair da fun��o
        return;
    }
    //caso cont�rio mostra a listaa de nomes
    for(int i = 0; i < qNomesLista; i++)
        cout<<"["<<setw(2)<<i+1<<"] "<< listaNomes[i]<<endl;
}
//fun��o respons�vel pela ordena��o dos nomes
void Lista::ordenarNomes(){

    for(int i = 0; i < qNomesLista; i++){
        for(int j = i+1;j < qNomesLista; j++){
            //aplica��o do algoritmo bubble sort para ordena��o de caracteres.
            if(listaNomes[i][0] > listaNomes[j][0]){
                string tempNome = listaNomes[j];
                listaNomes[j]= listaNomes[i];
                listaNomes[i] = tempNome;
            }
        }
    }
}
void Lista::tratamentoNomes(){
    //converte a primeira letra de cada nome para mai�scula
    listaNomes[qNomesLista][0] = toupper((char)listaNomes[qNomesLista][0]);
}
int Lista::menu(){
    //intera��o com o usu�rio menu
    int op;
    cout.fill('=');
    cout<<setw(40)<<" "<<endl;
    cout.fill(' ');
    cout<<setw(20)<<"DESEJA"<<endl;
    cout.fill('=');
    cout<<setw(40)<<" "<<endl;
    //op��o para adiconar nomes
    cout<<"[1] Adicionar"<<endl;
    //op��o para imprimir nomes
    cout<<"[2] Imprimir"<<endl;
    //op��o para ordena��o nomes
    cout<<"[3] Ordenar"<<endl;
    //op��o para imprimir o total de nomes atualmente na lista
    cout<<"[4] Total"<<endl;
    //op��o para limpar a tela
    cout<<"[5] limpar tela"<<endl;
    //fechar o programa
    cout<<"[6] Sair"<<endl;
    cout<<setw(40)<<" "<<endl;
    cin>>op;
    //valida as resposta dentro do limite de op��es
    validarRespostas(op);
    //limpar a tela
    system("cls");
    //retorna a op��o escolhida
    return op;
}
void Lista::validarRespostas(int &op) {
    //valida as resposta dentro do limite de op��es
    while(op > 6 or op < 1){
        //caso a op��o informanda seja maior que 6 ou menor que um o usu�rio recebe a mensagem que a op��o e invalida
        cout<<"Opcao invalida: ";
        //� ele precisa informa uma nova op��para continuar
        cin>>op;
    }
}
Lista::~Lista(){
    //destruindo objeto lista e desalocando mem�ria da heap
   	delete listaNomes;
}

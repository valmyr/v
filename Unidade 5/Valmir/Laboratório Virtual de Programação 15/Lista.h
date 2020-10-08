//
// Created by valmyr on 01/10/2020.
/*
Importante: Compilador usado Clion, C++17.
Sistema Operacional: Windowns 10
Aluno: Valmir Ferreira da Silva
Matr�cula: 119211110
Professor: Marcus Salerno
    Laborat�rio Virtual de Programa��o 015
        Crie uma classe que possui como atributos uma lista de nomes e uma vari�vel que indica o seu tamanho m�ximo. Crie um m�todo para essa classe que ordena os nomes em ordem alfab�tica, um m�todo que insere um nome na lista e um m�todo que imprime essa lista. N�o esque�a de criar a lista dinamicamente no construtor, a partir do valor do tamanho m�ximo passado por par�metro. N�o esque�a tamb�m de liberar no Destrutor o espa�o de mem�ria utilizado.

        Na main, crie uma aplica��o para inserir alguns nomes na lista e imprimir essa lista ordenada.
*/
#ifndef _LISTA_H
#define _LISTA_H
class Lista{
    //ponteiro do tipo string que receber� lista de nomes
    string *listaNomes;
    //atributo que contar� a quantidade atual de nomes na lista
    static int dNomes;
    //Atributo que receber� o tamanho m�ximo da lista
    int sizeL;
public:
    //construtor default
    Lista();
    //
    Lista(int);
    //set tamanho m�ximo
    void setsizeL(int);
    //get quantidade atual da lista
    static int getdNomes();
    //alocando din�micamente a lista de nomes na mem�ria heap
    void alocarLista(void);
    //ordena em ordem alfab�tica os nomes da lista
    void ordenarNomes();
    //adiciona um nome na lista
    bool inserirNome(string );
    //mostra na tela do usu�rio a lista
    void imprimirLista() const ;
    //converte a primeira letra do nome para mai�scula
    void tratamentoNomes();
    //intera��o com o usu�rio
    int menu();
    //valida a resposta do usu�rio
    void validarRespostas(int&);
    //destrutor
    ~Lista();
};
#endif

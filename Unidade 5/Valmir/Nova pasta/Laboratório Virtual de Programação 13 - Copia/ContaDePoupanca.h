//
// Created by valmyR on 02/10/2020.
//

#ifndef UNTITLED48_CONTADEPOUPACA_H
#define UNTITLED48_CONTADEPOUPACA_H
class ContaDePoupanca{
private:
    //atributos privados
    static float taxaDeJurosAnual;
    float saldoDaPoupanca;
public:
    //atributos publicos

    //construtor
    ContaDePoupanca(float = 0);
    //destrutor
    ~ContaDePoupanca();
    // c�lculo de renda mensal
    float calcularRendaMensal();
    //set do valor da poupan�a
    void setSaldoDaPoupanca(float = 0);
    //get do valor da poupan�a
    float getSaldoDaPoupanca(void) const;
    //retornar a taxa de juros atual
    static float getTaxaDeJuros();
    //modifica a taxa de juros
    static void modificarTaxaDeJuros(float= 0);
    //atualiza o saldo
    void atualizarSaldo();
    //fun��o para um realizar o saque
    bool saque(float = 0);
    //fun��o para um realizar o deposito
    bool deposito(float = 0);
    //intera��o com o usu�rio menu
    int menu();
    //validamento de op��es do menu
    void validarResposta(int &op);
};
#endif //UNTITLED48_CONTADEPOUPACA_H

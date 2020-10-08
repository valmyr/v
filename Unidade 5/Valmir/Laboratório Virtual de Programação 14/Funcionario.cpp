//
// Created by valmyr on 01/10/2020.
//
//
#include "./Funcionario.h"
//construtor default
Funcionario::Funcionario() {
    nome = '\n';
    dataAdmissao = "\n\0";
    salario = 0;
}
//construtor com par�metos
Funcionario::Funcionario(string nome, string dataAdmissao, int departamento, float salario) {
    //iniciando valores dos atributos
    this->nome = nome;
    this->dataAdmissao = dataAdmissao;
    this->salario = salario;
    this->departamento = departamento;
}
//------------------sets------Funcion�rios-------------------------------------
void Funcionario::setSalario(float salario) {
    this->salario = salario;
}
void Funcionario::setDataAdmissao(string dataAdimssao) {
    this->dataAdmissao = dataAdmissao;
}
void Funcionario::setNome(string nome) {
    this->nome = nome;
}
//------------------------gets-Funcion�rios-------------------------------------
string Funcionario::getNome() const{
    return nome;
}
string Funcionario::getDataAdmissao() const{
    return dataAdmissao;
}
float Funcionario::getSalario() const{
    return salario;
}
void Funcionario::setDepartamento(int departamento) {
    this->departamento = departamento;
}
int Funcionario::getDepartamento() const{
    return departamento;
}
//---------------------------------------------------------------------/

#include "Aluno.hpp"
#include <iostream>
#include <iomanip>

// Construtor
Aluno::Aluno(std::string nome, int numero, float nota1, float nota2)
    : nome(nome), numero(numero), nota1(nota1), nota2(nota2) {
}

// Calcula a média das duas notas
float Aluno::calcularMedia() const {
    return (nota1 + nota2) / 2.0f;
}

// Verifica se o aluno está aprovado (média >= 10)
bool Aluno::aprovado() const {
    return calcularMedia() >= 10.0f;
}

// Mostra os dados do aluno
void Aluno::mostrarDados() const {
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Número: " << numero << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Média: " << calcularMedia() << std::endl;
    std::cout << "Estado: " << (aprovado() ? "Aprovado" : "Reprovado") << std::endl;
    std::cout << std::endl;
}

// Getters
std::string Aluno::getNome() const {
    return nome;
}

int Aluno::getNumero() const {
    return numero;
}
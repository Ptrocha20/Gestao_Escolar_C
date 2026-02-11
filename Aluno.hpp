#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <string>

class Aluno {
private:
    std::string nome;
    int numero;
    float nota1;
    float nota2;

public:
    // Construtor
    Aluno(std::string nome, int numero, float nota1, float nota2);
    
    // Métodos públicos
    float calcularMedia() const;
    bool aprovado() const;
    void mostrarDados() const;
    
    // Getters (úteis para a classe Turma)
    std::string getNome() const;
    int getNumero() const;
};

#endif
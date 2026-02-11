#include "Turma.hpp"
#include <iostream>
#include <iomanip>

// Construtor
Turma::Turma() {
    // Vector inicializa vazio automaticamente
}

// Adiciona um aluno à turma
void Turma::adicionarAluno(const Aluno& aluno) {
    alunos.push_back(aluno);
}

// Lista todos os alunos da turma
void Turma::listarAlunos() const {
    std::cout << "--- LISTA DE ALUNOS ---" << std::endl;
    
    for (const auto& aluno : alunos) {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << aluno.getNome() << " - Média: " << aluno.calcularMedia() 
                  << " - " << (aluno.aprovado() ? "Aprovado" : "Reprovado") 
                  << std::endl;
    }
    std::cout << std::endl;
}

// Calcula a média geral da turma
float Turma::mediaTurma() const {
    if (alunos.empty()) {
        return 0.0f;
    }
    
    float somaMedias = 0.0f;
    for (const auto& aluno : alunos) {
        somaMedias += aluno.calcularMedia();
    }
    
    return somaMedias / alunos.size();
}

// Retorna o total de alunos
int Turma::totalAlunos() const {
    return alunos.size();
}
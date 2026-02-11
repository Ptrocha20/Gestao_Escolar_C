#ifndef TURMA_HPP
#define TURMA_HPP

#include "Aluno.hpp"
#include <vector>

class Turma {
private:
    std::vector<Aluno> alunos;

public:
    // Construtor
    Turma();
    
    // Métodos públicos
    void adicionarAluno(const Aluno& aluno);
    void listarAlunos() const;
    float mediaTurma() const;
    int totalAlunos() const;
};

#endif
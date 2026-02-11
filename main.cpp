#include "Turma.hpp"
#include "Aluno.hpp"
#include <iostream>
#include <iomanip>

int main() {
    // Criar uma turma
    Turma turma;
    
    // Adicionar alunos
    Aluno aluno1("João", 123, 14.0f, 15.0f);
    Aluno aluno2("Ana", 124, 9.0f, 9.4f);
    Aluno aluno3("Carlos", 125, 16.5f, 15.5f);
    Aluno aluno4("Maria", 126, 12.0f, 13.5f);
    
    turma.adicionarAluno(aluno1);
    turma.adicionarAluno(aluno2);
    turma.adicionarAluno(aluno3);
    turma.adicionarAluno(aluno4);
    
    // Listar os alunos
    turma.listarAlunos();
    
    // Mostrar a média da turma
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Média geral da turma: " << turma.mediaTurma() << std::endl;
    std::cout << "Total de alunos: " << turma.totalAlunos() << std::endl;
    
    std::cout << "\n--- DETALHES INDIVIDUAIS ---" << std::endl;
    aluno1.mostrarDados();
    aluno2.mostrarDados();
    aluno3.mostrarDados();
    
    return 0;
}
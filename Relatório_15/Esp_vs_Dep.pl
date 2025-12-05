especialista_comp(Aluno) :-
    concluiu(Aluno, D1),
    disciplina(D1, _, computacao),
    concluiu(Aluno, D2),
    disciplina(D2, _, computacao),
    D1 \= D2.

deficiencia_mat(Aluno) :-
    concluiu(Aluno, _), 
    \+ (concluiu(Aluno, D), disciplina(D, _, matematica)).


?- especialista_comp(Aluno), deficiencia_mat(Aluno).
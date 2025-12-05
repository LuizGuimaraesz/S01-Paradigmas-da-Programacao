falta_concluir(Aluno, Disciplina) :-
    prerequisito(_, Disciplina),
    \+ concluiu(Aluno, Disciplina).

aluno_apto(Aluno, Disciplina) :-
    disciplina(Disciplina, _, Area),
    Area \= fundamental,
    \+ concluiu(Aluno, Disciplina), 
    \+ (prerequisito(Disciplina, P), \+ concluiu(Aluno, P)).

?- aluno_apto(joao, D).
?- aluno_apto(maria, inteligencia_artificial).

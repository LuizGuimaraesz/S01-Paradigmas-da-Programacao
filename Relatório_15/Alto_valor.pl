alto_impacto(D) :-
    disciplina(D, Creditos, _),
    Creditos > 5,
    prerequisito(A, D),
    prerequisito(B, D),
    A \= B.


?- disciplina(D, 4, matematica), \+ prerequisito(_, D).
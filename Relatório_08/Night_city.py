from abc import ABC, abstractmethod

class Cibernetico(ABC):
    @abstractmethod
    def realizar_hack(self):
        pass


class Implante:
    def __init__(self, custo, funcao):
        self.custo = custo
        self.funcao = funcao


class NetRunner(Cibernetico):
    def __init__(self, nome, custo_implante, funcao_implante):
        self.nome = nome
        self.implante = Implante(custo_implante, funcao_implante)

    def realizar_hack(self):
        print(f"{self.nome} está hackeando usando implante de {self.implante.funcao} (Custo: {self.implante.custo})")


class Faccao:
    def __init__(self, membros):
        self.membros = membros

    def executar_hacks(self):
        for membro in self.membros:
            membro.realizar_hack()


n1 = NetRunner("Kiwi", 8500, "infiltração remota")
n2 = NetRunner("Sasha", 6500, "roubo de dados corporativos")
n3 = NetRunner("T-Bug", 10000, "controle de sistemas de segurança")


faccao = Faccao([n1, n2, n3])
faccao.executar_hacks()

class ArmaCorpoACorpo:
    def __init__(self, nome):
        self.nome = nome

    def __str__(self):
        return f"Arma: {self.nome}"


class PhantomThieves:
    def __init__(self, nome, arma):
        self.nome = nome
        self.arma = arma

    def __str__(self):
        return f"Membro: {self.nome}, Arma: {self.arma}"


class Joker:
    def __init__(self, equipe=None):
        self.arma = ArmaCorpoACorpo("Faca")
        self.equipe = equipe if equipe is not None else []

    def mostrar_equipe(self):
        print(f"Joker possui {self.arma}")
        print("\n=== Equipe Phantom Thieves ===")
        if not self.equipe:
            print("Nenhum membro na equipe.")
        else:
            for membro in self.equipe:
                print(membro)


morgana = PhantomThieves("Morgana", "Espada curta")
ryuji = PhantomThieves("Ryuji", "Porrete")
ann = PhantomThieves("Ann", "Chicote")

joker = Joker([morgana, ryuji, ann])
joker.mostrar_equipe()

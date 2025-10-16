class Heroi:
    def __init__(self, nome, funcao):
        self.nome = nome
        self.funcao = funcao

    def usar_ultimate(self):
        return f"{self.nome} usou sua ultimate!"

class Tanque(Heroi):
    def __init__(self, nome):
        super().__init__(nome, "Tanque")
    
    def usar_ultimate(self):
        super().usar_ultimate()
        return f"{self.nome} ativou sua habilidade de proteção!"
    

class Dano(Heroi):
    def __init__(self, nome):
        super().__init__(nome, "Dano")

    def usar_ultimate(self):
        super().usar_ultimate()
        return f"{self.nome} causou muito dano!"
    

herois = []

h_tanque = Tanque("Reinhardt")
h_dano = Dano("Hanzo")

herois.append([h_tanque, h_dano])

for heroi in herois[0]:
    print(heroi.usar_ultimate())





        


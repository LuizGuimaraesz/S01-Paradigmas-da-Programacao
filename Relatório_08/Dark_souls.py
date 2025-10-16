class Personagem:
    def __init__(self, vida, resistencia):
        self._vida = vida
        self._resistencia = resistencia

        
    
    def __str__(self):
        return f'Vida: {self._vida}, Resistência: {self._resistencia}'

    def get_vida(self):
        return self._vida

    
    def set_vida(self, valor):
        if valor >= 0:
            self._vida = valor
        else:
            self._vida = 0


class Cavaleiro(Personagem):
    def __init__(self, vida, resistencia, armadura_pesada):
        super().__init__(vida, resistencia)
        self.armadura_pesada = armadura_pesada


    def __str__(self):
        if self.armadura_pesada:
            return super().__str__() + ', Armadura Pesada: Sim'
        else:
            return super().__str__() + ', Armadura Pesada: Não'


personagem = Personagem(100, 50)
cavaleiro = Cavaleiro(150, 80, True)

print(personagem.__str__())
print(cavaleiro.__str__())


    





    
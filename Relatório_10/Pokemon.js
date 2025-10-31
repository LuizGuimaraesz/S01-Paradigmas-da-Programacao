class Pokemon {
  #vida
  constructor(nome, tipo, vida) {
    this.nome = nome
    this.tipo = tipo
    this.#vida = vida
  }

  get vida() {
    return this.#vida
  }

  receberDano(dano) {
    this.#vida -= dano
    if (this.#vida < 0) {
      this.#vida = 0
    }
  }

  atacar(alvo) {
    console.log(`${this.nome} ataca ${alvo.nome}!`)
  }
}

class Pikachu extends Pokemon {
  atacar(alvo) {
    console.log(`${this.nome} usa Choque do Trovão!`)
    alvo.receberDano(20)
  }
}

class Charmander extends Pokemon {
  atacar(alvo) {
    console.log(`${this.nome} usa Brasa!`)
    alvo.receberDano(25)
  }
}

class Squirtle extends Pokemon {
  atacar(alvo) {
    console.log(`${this.nome} usa Jato d'Água!`)
    alvo.receberDano(15)
  }
}

const pikachu = new Pikachu("Pikachu", "Elétrico", 100)
const charmander = new Charmander("Charmander", "Fogo", 100)
const squirtle = new Squirtle("Squirtle", "Água", 100)

pikachu.atacar(charmander)
console.log(`Vida do Charmander: ${charmander.vida}`)

charmander.atacar(squirtle)
console.log(`Vida do Squirtle: ${squirtle.vida}`)

squirtle.atacar(pikachu)
console.log(`Vida do Pikachu: ${pikachu.vida}`)

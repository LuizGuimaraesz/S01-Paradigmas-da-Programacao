class Diario {
  #autorSecreto
  constructor(autorSecreto) {
    this.#autorSecreto = autorSecreto
    this.enigmas = new Map()
  }

  adicionarEnigma(chave, valor) {
    this.enigmas.set(chave, valor)
  }

  decodificar(chave, num) {
    if (num !== this.#autorSecreto || !this.enigmas.has(chave)) return "Acesso negado"
    return this.enigmas.get(chave)
  }
}

class Personagem {
  constructor(nome, funcao) {
    this.nome = nome
    this.funcao = funcao
  }
}

class CabanaMisterio {
  constructor() {
    this.funcionarios = []
  }

  adicionarFuncionario(personagem) {
    this.funcionarios.push(personagem)
  }

  listarFuncionarios() {
    return this.funcionarios
  }
}

class Dipper {
  constructor(nome, diario) {
    this.nome = nome
    this.diario = diario
  }
}

const diario = new Diario(42)
diario.adicionarEnigma("gnomo", "Pequeno ser que vive na floresta")

const dipper = new Dipper("Dipper Pines", diario)

const cabana = new CabanaMisterio()
cabana.adicionarFuncionario(new Personagem("Soos", "Zelador"))
cabana.adicionarFuncionario(new Personagem("Wendy", "Atendente"))

console.log(dipper.diario.decodificar("gnomo", 42))
console.log(cabana.listarFuncionarios())

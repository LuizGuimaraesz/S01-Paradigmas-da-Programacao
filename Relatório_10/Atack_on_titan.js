class ODM_Gear {
  usar() {
    console.log("Usando o ODM Gear para se mover rapidamente!")
  }
}

class IExplorador {
  explorar() {
    throw new Error("Método explorar() deve ser implementado.")
  }
}

class Soldado extends IExplorador {
  constructor(nome) {
    super()
    this.nome = nome
    this.odm = new ODM_Gear()
  }

  explorar() {
    console.log(`${this.nome} está explorando a área!`)
  }

  usarODM() {
    this.odm.usar()
  }
}

class Esquadrao {
  constructor(nome) {
    this.nome = nome
    this.soldados = []
  }

  adicionarSoldado(soldado) {
    if (soldado instanceof IExplorador) {
      this.soldados.push(soldado)
    } else {
      console.log("O soldado precisa implementar IExplorador.")
    }
  }

  listarSoldados() {
    this.soldados.forEach(s => console.log(s.nome))
  }
}

const leviEsquadrao = new Esquadrao("Esquadrão do Capitão Levi")
const soldado1 = new Soldado("Mikasa")
const soldado2 = new Soldado("Armin")

leviEsquadrao.adicionarSoldado(soldado1)
leviEsquadrao.adicionarSoldado(soldado2)

soldado1.usarODM()
soldado2.explorar()

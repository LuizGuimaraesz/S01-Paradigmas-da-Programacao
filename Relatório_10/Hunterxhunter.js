class Hunter {
  constructor(nome) {
    this.nome = nome;
  }

  rastrearLocal() {}
}

class Especialista extends Hunter {
  constructor(nome, habilidade) {
    super(nome);
    this.habilidade = habilidade;
  }

  rastrearLocal() {
    console.log(`${this.nome} usa sua habilidade ${this.habilidade} para rastrear.`);
  }
}

class Manipulador extends Hunter {
  constructor(nome, alvo) {
    super(nome);
    this.alvo = alvo;
  }

  rastrearLocal() {
    console.log(`${this.nome} manipula ${this.alvo} para rastrear a localização.`);
  }
}

class Batalhao {
  constructor() {
    this.hunters = new Set();
  }

  adicionarHunter(hunter) {
    for (let h of this.hunters) {
      if (h.nome === hunter.nome) return;
    }
    this.hunters.add(hunter);
  }

  rastrearTodos() {
    for (let h of this.hunters) {
      h.rastrearLocal();
    }
  }
}

const b = new Batalhao();
b.adicionarHunter(new Especialista("Kurapika", "Correntes de Nen"));
b.adicionarHunter(new Manipulador("Illumi", "Agulhas"));
b.rastrearTodos();

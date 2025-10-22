class Musico
  attr_reader :nome, :instrumento

  def initialize(nome, instrumento)
    @nome = nome
    @instrumento = instrumento
  end

  def tocar_partitura(peca)
    raise NotImplementedError, "Este método deve ser implementado nas subclasses"
  end
end

class Pianista < Musico
  def tocar_partitura(peca)
    "#{@nome} toca a peça #{peca} no piano com emoção!"
  end
end

class Violinista < Musico
  def tocar_partitura(peca)
    "#{@nome} executa a peça #{peca} com seu violino suavemente!"
  end
end

class Maestro
  def initialize(musicos)
    @musicos = musicos
  end

  def iniciar_ensaio(peca)
    @musicos.each { |m| puts m.tocar_partitura(peca) }
  end

  def mudar_foco(estado)
    @musicos.map { |m| "#{m.nome} agora está #{estado}!" }
  end
end

musicos = [
  Pianista.new("Kousei", "Piano"),
  Violinista.new("Kaori", "Violino")
]

maestro = Maestro.new(musicos)

print "Digite o nome da peça: "
peca = gets.chomp
maestro.iniciar_ensaio(peca)

print "Digite o novo estado dos músicos: "
estado = gets.chomp
puts maestro.mudar_foco(estado)

module Rastreavel
  def obter_localizacao(hora)
    "#{@nome} foi visto em #{@localizacao} às #{hora}"
  end
end

module Perigoso
  def calcular_risco
    "#{@nome} apresenta alto risco de ameaça!"
  end
end

class Participante
  attr_accessor :nome, :localizacao

  def initialize(nome, localizacao)
    @nome = nome
    @localizacao = localizacao
  end
end

class Detetive < Participante
  include Rastreavel

  def investigar
    "#{@nome} está investigando pistas em #{@localizacao}"
  end
end

class MestreDoCrime < Participante
  include Rastreavel
  include Perigoso

  def planejar_crime
    "#{@nome} está planejando algo perigoso em #{@localizacao}"
  end
end

class Cenario
  def initialize(participantes)
    @participantes = participantes
  end

  def identificar_ameacas
    @participantes.select { |p| p.respond_to?(:calcular_risco) }
  end
end

print "Digite a localização atual de Sherlock: "
loc_sherlock = gets.chomp
print "Digite a localização atual de Moriarty: "
loc_moriarty = gets.chomp

sherlock = Detetive.new("Sherlock", loc_sherlock)
moriarty = MestreDoCrime.new("Moriarty", loc_moriarty)

cenario = Cenario.new([sherlock, moriarty])

puts sherlock.obter_localizacao("14:00")
puts moriarty.obter_localizacao("14:05")

ameacas = cenario.identificar_ameacas
ameacas.each { |a| puts a.calcular_risco }

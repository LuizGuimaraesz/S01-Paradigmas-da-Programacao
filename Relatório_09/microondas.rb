class MicroondasUnidade
  def aquecer_por(segundos)
    puts "Aquecendo por #{segundos} segundos..."
  end
end

class DMail
  attr_reader :conteudo, :hora_envio

  def initialize(conteudo, hora_envio)
    @conteudo = conteudo
    @hora_envio = hora_envio
  end

  def to_s
    "D-Mail enviado às #{@hora_envio}: #{@conteudo}"
  end
end

class TelefoneDeMicroondas
  def initialize
    @unidade = MicroondasUnidade.new
    @dmails = []
  end

  def enviar_dmail
    print "Digite o conteúdo do D-Mail: "
    conteudo = gets.chomp
    print "Digite a hora de envio (ex: 10:30): "
    hora_envio = gets.chomp
    @unidade.aquecer_por(5)
    dmail = DMail.new(conteudo, hora_envio)
    @dmails << dmail
    puts "D-Mail enviado!"
  end

  def listar_dmails(horario_corte)
    filtrados = @dmails.select { |d| d.hora_envio > horario_corte }
    filtrados.each { |d| puts d }
  end
end

telefone = TelefoneDeMicroondas.new
telefone.enviar_dmail
print "Digite um horário de corte (ex: 09:00): "
horario = gets.chomp
telefone.listar_dmails(horario)

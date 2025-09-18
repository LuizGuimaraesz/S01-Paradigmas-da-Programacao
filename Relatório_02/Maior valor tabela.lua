function maior_valor(tabela)
    local maior = tabela[1]
    for i = 2, #tabela do
        if tabela[i] > maior then
            maior = tabela[i]
        end
    end
    return maior
end

local numeros = {}

print("Quantos números você quer inserir?")
local qtd = tonumber(io.read())

for i = 1, qtd do
    print("Digite o número " .. i .. ":")
    local num = tonumber(io.read())
    table.insert(numeros, num)
end

print("O maior valor é: " .. maior_valor(numeros))

use std::io;

fn main() {
    let mut entrada = String::new();

    println!("Jogador 1, escolha 'par' ou 'impar': ");
    io::stdin().read_line(&mut entrada).unwrap();
    let escolha = entrada.trim().to_string();

    entrada.clear();
    println!("Jogador 1, digite seu número: ");
    io::stdin().read_line(&mut entrada).unwrap();
    let num1: i32 = entrada.trim().parse().unwrap();

    entrada.clear();
    println!("Jogador 2, digite seu número: ");
    io::stdin().read_line(&mut entrada).unwrap();
    let num2: i32 = entrada.trim().parse().unwrap();

    let soma = num1 + num2;
    println!("A soma dos números foi: {}", soma);

    if (soma % 2 == 0 && escolha == "par") || (soma % 2 != 0 && escolha == "impar") {
        println!("Jogador 1 venceu!");
    } else {
        println!("Jogador 2 venceu!");
    }
}

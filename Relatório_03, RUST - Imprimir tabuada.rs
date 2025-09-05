use std::io;

fn imprimir_tabuada(numero: i32, limite_inferior: i32, limite_superior: i32) {
    for i in limite_inferior..=limite_superior {
        println!("{} x {} = {}", numero, i, numero * i);
    }
}

fn main() {
    let mut entrada = String::new();

    println!("Digite o número da tabuada:");
    io::stdin().read_line(&mut entrada).expect("Erro ao ler número");
    let numero: i32 = entrada.trim().parse().expect("Número inválido");
    entrada.clear();

    println!("Digite o limite inferior:");
    io::stdin().read_line(&mut entrada).expect("Erro ao ler limite inferior");
    let limite_inferior: i32 = entrada.trim().parse().expect("Número inválido");
    entrada.clear();

    println!("Digite o limite superior:");
    io::stdin().read_line(&mut entrada).expect("Erro ao ler limite superior");
    let limite_superior: i32 = entrada.trim().parse().expect("Número inválido");

    imprimir_tabuada(numero, limite_inferior, limite_superior);
}

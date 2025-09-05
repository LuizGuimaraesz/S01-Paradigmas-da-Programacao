use std::io;

fn verificar_senha(senha: &str) -> bool {
    if senha.len() < 8 {
        return false;
    }

    let mut tem_numero = false;
    let mut tem_maiuscula = false;

    for char in senha.chars() {
        if char.is_ascii_digit() {
            tem_numero = true;
        }
        if char.is_ascii_uppercase() {
            tem_maiuscula = true;
        }
    }

    tem_numero && tem_maiuscula
}

fn main() {
    loop {
        let mut entrada = String::new();
        println!("Digite uma senha: ");
        io::stdin()
            .read_line(&mut entrada)
            .expect("Erro ao ler entrada");

        let senha = entrada.trim(); // remove \n e espaços extras

        if verificar_senha(senha) {
            println!("Senha válida! Acesso concedido.");
            break;
        } else {
            println!("Senha inválida, tente novamente.");
        }
    }
}

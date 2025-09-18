package main

import "fmt"

func classificar_numero(num int) string {
	if num > 0 {
		return "positivo"
	} else if num < 0 {
		return "negativo"
	} else {
		return "zero"
	}
}

func main() {
	var num int
	fmt.Print("Digite um número: ") 
	fmt.Scan(&num)

	classificacao := classificar_numero(num) 

	if classificacao == "positivo" {
		fmt.Println("Positivo")
	} else if classificacao == "negativo" {
		fmt.Println("Negativo")
	} else {
		fmt.Println("Zero")
	}
}

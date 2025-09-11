package main

import "fmt"

func fibonacci(n int) int{
	if n <= 1 {
		return n
	}

	a, b := 0, 1
	for i := 2; i <= n; i++ {
		a, b = b, a+b
	}
	return b
	
}

func main() {
	var n int
	fmt.Print("Digite o numero: ")
	fmt.Scanln(&n)
	fmt.Println(fibonacci(n))
}

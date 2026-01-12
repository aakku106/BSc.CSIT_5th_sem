package main

import "fmt"

func main() {
	var a, b, temp int
	a, _ = fmt.Scanln()
	b, _ = fmt.Scanln()
	for {
		if b != 0 {
			break
		}
		temp = a % b
		a = b
		b = temp
		fmt.Println("GCD:", a)
	}
}

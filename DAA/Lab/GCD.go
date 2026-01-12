package main

import "fmt"

func main() {
	var a, b, temp int
	fmt.Println("enter 2 nums")
	fmt.Scanln(&a)
	fmt.Scanln(&b)
	for {
		if b == 0 {
			break
		}
		temp = a % b
		a = b
		b = temp
	}
	fmt.Println("GCD from Go: ", a)
}

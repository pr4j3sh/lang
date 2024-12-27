package main

import "fmt"

func add(a int, b int) int {
	return a + b
}

func swap(a, b string) (string, string) {
	return b, a
}

// naked return
func greet(name string) (message string) {
	message = "Hello " + name
	return
}

func main() {
	res := add(2, 3)
	fmt.Println(res)

	a, b := swap("Hello", "Bye")

	fmt.Println(a, b)
	fmt.Println(greet("frames"))
}

package main

import "fmt"

// defer are executed in lifo order

func main() {
	fmt.Println("Hi")
	defer fmt.Println("defer 1")
	defer fmt.Println("defer 2")
	fmt.Println("bye")
	fmt.Println("goodbye")
}

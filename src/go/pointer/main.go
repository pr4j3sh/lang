package main

import "fmt"

func main() {
	i := 1
	var p *int = &i
	fmt.Println(p)
}

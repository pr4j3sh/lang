package main

import "fmt"

func main() {
	var a [10]int
	a[0] = 0
	fmt.Println(a[0], a[1])

	b := []int{1, 2, 3, 4, 5}
	for i := 0; i < 5; i++ {
		fmt.Println(b[i])
	}
}

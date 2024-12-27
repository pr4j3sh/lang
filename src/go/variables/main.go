package main

import "fmt"

// declare - unintialized vars a re given zero values 0, false, ""
// var item1, item2, .., itemn type

var c, python, java bool // defines false for all
// constants
const PI = 3.14

func main() {
	var i int // defines i as 0
	fmt.Println(i, c, python, java)

	// initializing
	// type can be omitted
	a, b, c := 1, 1.1, "1"
	fmt.Println(a, b, c)

	var d int = 4
	// shorthand for upper dec - can only be used inside functions
	e := 4
	fmt.Println(d, e)
}

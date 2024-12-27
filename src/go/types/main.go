package main

import "fmt"

var (
	state bool       = false
	name  string     = "Halo"
	num   int        = 11     // int, int8(byte), int16, int32, int64
	pos   uint       = 4      // uint, uint8, uint16, uint32(rune), uint64, uintptr
	dec   float64    = 11.11  // float32, float64
	comp  complex128 = 5 + 2i // complex64, complex128
)

func main() {
	fmt.Printf("type: %T -> value: %v\n", state, state)
	fmt.Printf("type: %T -> value: %v\n", name, name)
	fmt.Printf("type: %T -> value: %v\n", num, num)
	fmt.Printf("type: %T -> value: %v\n", pos, pos)
	fmt.Printf("type: %T -> value: %v\n", dec, dec)
	fmt.Printf("type: %T -> value: %v\n", comp, comp)

	// type conversion - only explicit
	var d float32 = 11.11
	var i int = int(d)
	println(d, i)
}

package main

import (
	"fmt"
	"math"
	"math/rand"
	"runtime"
	"time"
)

func main() {
	// show current time
	fmt.Println("time: ", time.Now())

	// random number
	fmt.Println("num: ", rand.Intn(10))

	// square root
	fmt.Printf("square root of 4 is %g\n", math.Sqrt(4))
	// pi
	fmt.Println("pi: ", math.Pi)

	fmt.Println("os: ", runtime.GOOS)
}

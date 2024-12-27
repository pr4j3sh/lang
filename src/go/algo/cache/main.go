package main

import "fmt"

func find(data [10]int, element int) (bool, int) {
	for i := 0; i < len(data); i++ {
		if data[i] == element {
			return true, i
		}
	}
	return false, -1
}

func main() {
	data := [10]int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	element := 5

	cache := [10]int{0}
	found, _ := find(cache, element)

	if found {
		fmt.Println("found")
	} else {
		found, i := find(data, element)
		if found {
			cache[i] = element
			fmt.Println("found")
		} else {
			fmt.Println("not found")
		}
	}
}

package main

import "fmt"

func main() {
	var fruits [4]string

	// horizontal
	fruits  = [4]string{"apple", "grape", "banana", "melon"}

	// vertikal
	fruits  = [4]string{
	"apple",
	"grape",
	"banana",
	"melon",
	}
	fmt.Println("Fruits:", fruits)

	// Multidimensional array is an array of arrays, for example, a 2D array can be thought of as a table with rows and columns.
	// In Go, multidimensional arrays are defined by specifying the size of each dimension.
	var numbers1 = [2][3]int{[3]int{3, 2, 3}, [3]int{3, 4, 5}}
	var numbers2 = [2][3]int{{3, 2, 3}, {3, 4, 5}}

	fmt.Println("numbers1", numbers1)
	fmt.Println("numbers2", numbers2)
}

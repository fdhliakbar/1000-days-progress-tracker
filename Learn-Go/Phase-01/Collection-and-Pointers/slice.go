package main

import "fmt"

func main() {
	// Slice is a dynamically-sized, flexible view into the elements of an array.
	// Unlike arrays, slices are not fixed in size and can grow or shrink as needed.
	// Slices are more powerful and flexible than arrays, and they are the preferred way to work with collections of data in Go.
	// A slice is a descriptor of an array segment, which consists of a pointer to the first element of the array, the length of the segment, and its capacity.
	var fruits = []string{"apple", "grape", "banana", "melon"}
	fmt.Println(fruits[0]) // "apple"

	// Different between slice and array:
	// - Slice is a reference type, while array is a value type.
	// - Slice can grow and shrink, while array has a fixed size.
	var fruitsA = []string{"apple", "grape"}      // slice
	var fruitsB = [2]string{"banana", "melon"}    // array
	var fruitsC = [...]string{"papaya", "grape"}  // array
	fmt.Println(fruitsA) // ["apple", "grape"]
	fmt.Println(fruitsB) // ["banana", "melon"]
	fmt.Println(fruitsC) // ["papaya", "grape"]

	// len is the number of elements in the slice, while cap is the number of elements in the underlying array that can be accessed by the slice.
	// cap is the maximum number of elements that can be stored in the slice without reallocating the underlying array.
	// difference between len and cap:
	// - len: the number of elements in the slice.
	// - cap: the number of elements in the underlying array that can be accessed by the slice.
	var animals = []string{"Fish", "Lion", "Butterfly", "Ant"}
	fmt.Println(len(animals))  // len: 4
	fmt.Println(cap(animals))  // cap: 4

	var aAnimals = animals[0:3]
	fmt.Println(len(aAnimals)) // len: 3
	fmt.Println(cap(aAnimals)) // cap: 4

	var bAnimals = animals[1:4]
	fmt.Println(len(bAnimals)) // len: 3
	fmt.Println(cap(bAnimals)) // cap: 3
}

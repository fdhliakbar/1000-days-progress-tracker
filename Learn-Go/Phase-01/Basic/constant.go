package main

import "fmt"

func main() {
	const pi float64 = 3.14
	const greeting string = "Hello, World!"
	const isActive bool = true

	fmt.Println("Nilai dari konstanta pi adalah", pi)
	fmt.Println("Nilai dari konstanta greeting adalah", greeting)
	fmt.Println("Nilai dari konstanta isActive adalah", isActive)

	// multiple constants declaration, can be used to group related constants together
	 const (
		square string = "kotak"
		isToday bool = true
		rechtangle string = "persegi panjang"
	 )
	fmt.Println("Output multiple konstanta:", square, isToday, rechtangle)


}

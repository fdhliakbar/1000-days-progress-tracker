package main

import "fmt"

func main() {
	var rangeUpTo255 uint8 = 80
	var rangeUpTo65535 uint16 = 1000

	fmt.Println("Nilai dari tipe data uint8 adalah", rangeUpTo255)
	fmt.Println("Nilai dari tipe data uint16 adalah", rangeUpTo65535)

	var decimalNumber float32 = 21.2
	fmt.Println("Nilai dari tipe data float32 adalah", decimalNumber)

	var isExist bool = true
	fmt.Println("Nilai dari tipe data boolean adalah", isExist)

	// nil is not a data type, but a value that can be assigned to any pointer, interface, map, slice, channel, or function type.
	var myPointer *int = nil
	fmt.Println("Nilai dari pointer adalah", myPointer)
}

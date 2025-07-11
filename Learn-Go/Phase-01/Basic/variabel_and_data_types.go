package main

import "fmt"

func main() {
	// Schema variabel
	// var <nama_variabel> <tipe_data> = <nilai_awal>
	var firstName string = "Muhamad Fadhli"
	var lastName string
	lastName = "Akbar"

	fmt.Printf("Nama saya adalah %s %s\n", firstName, lastName)
	fmt.Println("Nama saya adalah", firstName, lastName)

	var firstNumber,secondNumber,thirdNumber uint8
	firstNumber,secondNumber,thirdNumber = 10,20,30
	fmt.Println("Cetak angka: ", firstNumber, secondNumber, thirdNumber)

	// Pointer
	test := new(string)

	fmt.Println(test)
}

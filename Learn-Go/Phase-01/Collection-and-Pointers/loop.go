package main

import "fmt"

func main() {
	// Cara pertama
	for i := 0; i < 5; i++ {
		fmt.Println("Perulangan ke-", i+1)
		if i == 4{
			fmt.Println("Perulangan selesai")
			break
		}
	}

	// Cara kedua, menggunakan for dengan kondisi
	var j uint8 = 0
	for j < 5 {
		fmt.Println("Perulangan ke-", j+1)
		j++
	}

	// Cara ketiga, menggunakan for tanpa kondisi, ini akan terus berjalan sampai ada perintah break
	var k uint8 = 0
	for {
		fmt.Println("Perulangan ke-", k+1)
		k++
		if k == 5 {
			fmt.Println("Perulangan selesai")
			break
		}
	}

	// Cara keempat, menggunakan for range untuk iterasi slice, array, map, string
	var names = []string{"Muhamad Fadhli", "Akbar", "Fadhli Akbar"}
	for index, name := range names {
		fmt.Printf("Nama ke-%d adalah %s\n", index+1, name)
	}
}

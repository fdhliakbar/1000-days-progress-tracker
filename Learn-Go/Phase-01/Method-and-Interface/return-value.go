package main

import (
	"fmt"
	"math/rand"
	"time"
)

var randomizer = rand.New(rand.NewSource(time.Now().Unix()))

func main() {
	var randomValue int
	randomValue = randomWithRange(2, 10)
	fmt.Println("random number:", randomValue)

	randomValue = randomWithRange(2, 10)
    	fmt.Println("random number:", randomValue)

    	randomValue = randomWithRange(2, 10)
    	fmt.Println("random number:", randomValue)

	var isEven bool
	isEven = checkIsEven(8)
	fmt.Println("isEven =", isEven)
}

func randomWithRange(min, max int) int {
	var value = randomizer.Int()%(max-min+1) + min
	return value
}

func checkIsEven(value int) bool {
	if value%2 == 0 {
		return true
	}
	return false
}

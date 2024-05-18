package main

import (
	"fmt"
	"math"
)

func main(){
	indexes := []int{5,6,2,9,20,3}

	length := len(indexes);
	items := make([]int, length)
	copy(items,indexes)


	max := math.MinInt32
	min := math.MaxInt32

	for _,ch := range items{
		if ch > max{
			max = ch
		}
		if ch < min{
			min = ch
		}
	}

	count := make([]int, max-min + 1)

	fmt.Println(count)

	for _,ch := range items{
		count[ch-min]++
	}

	total := 0

	for i:=0; i<len(count); i++{
		subTotal := count[i]
		count[i] = total
		total = subTotal + total
	}

	for _,ch := range indexes{
		items[count[ch-min]] = ch
		count[ch-min]++
	}

	fmt.Println(items)
}
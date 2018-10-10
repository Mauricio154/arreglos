package main

import (
	"fmt"
)

func main() {
	ListaDesordenada := [3]int{12, 78, 50} 
	

 for i := 0; i < len(ListaDesordenada); i++ {

  for j := 0; j < len(ListaDesordenada); j++ {

   if ListaDesordenada[i] > ListaDesordenada[j] {

    var auxiliar = ListaDesordenada[i]

    ListaDesordenada[i] = ListaDesordenada[j]

    ListaDesordenada[j] = auxiliar

   }
 
  }
}
fmt.Println(ListaDesordenada)
}
// =================================================================
//
// File: activity.h
// Author: Santiago Reynaldo Aguilar Vega
// Matricula: A01709030
// Date: 24/08/2022
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int i;
int sumatotal;

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// =================================================================

// Complejidad: Este metodo iterativo tiene una complejidad de O(n) ya que lo que se reliza, una suma de 1 en 1
// quiere decir que vamos a usar las mismas iteracciones(operaciones) que la cantidad de n ingresada.

unsigned int sumaIterativa(unsigned int n) {
	i = 1;
	sumatotal = 0;
	while(i <= n){
		sumatotal = sumatotal + i;
		i = i + 1;
	}
	cout << "El resultado de la suma iterativa es: " << sumatotal << endl;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// =================================================================

// Complegidad: Este metodo o funcion tiene un orden O(n), esto porque solo se llama una vez a la funcion original
// asi como tambien la operacion que se realiza dentro de donde se llama a la funcion sobre n es una resta 

unsigned int sumaRecursiva(unsigned int n) {
	sumatotal = 0;
	if(n == 1)
		 return sumatotal = sumatotal + n;
	else 
		return sumatotal = n + sumaRecursiva(n-1);
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// =================================================================

// Complejidad: Su complejidad tambien es O(n), porque como se menciono antes se hacen el numero n de operaciones y n 
// permanece constante, si  fuera 1, solo se ejecutaria una operacion por eso es de orden O(n).

unsigned int sumaDirecta(unsigned int n) {   
	int a, b, c;
	a = 0;
	b = 0;
	c = 1;
	while(b < n){
		a = a + (b + c);
		b = b + c;
	}
	cout << "El resultado de la suma directa es: " << a << endl;
}
#endif /* ACTIVITY_H */
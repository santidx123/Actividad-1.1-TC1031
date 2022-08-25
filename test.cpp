#define CATCH_CONFIG_MAIN 
#include <iostream>
#include <string>
#include <sstream>
#include "ACTIVITY.h"

using namespace std;
int main(){
	cout << "Pruebas de Suma Iterativa" << endl;
	sumaIterativa(1);
	sumaIterativa(10);
	sumaIterativa(50);
	sumaIterativa(100);
	sumaIterativa(500);
	cout << endl << endl;

/*
TEST_CASE( "Testing sumaIterativa", "[sumaIterativa]" ) {
	REQUIRE(sumaIterativa(1) == 1);
	REQUIRE(sumaIterativa(10) == 55);
	REQUIRE(sumaIterativa(50) == 1275);
	REQUIRE(sumaIterativa(100) == 5050);
	REQUIRE(sumaIterativa(500) == 125250);
}
*/

	cout << "Pruebas de Suma Recursiva" << endl;
	cout << "El resultado de la suma recursiva es: " << sumaRecursiva(1) << endl;
	cout << "El resultado de la suma recursiva es: " << sumaRecursiva(10) << endl;
	cout << "El resultado de la suma recursiva es: " << sumaRecursiva(50) << endl;
	cout << "El resultado de la suma recursiva es: " << sumaRecursiva(100) << endl;
	cout << "El resultado de la suma recursiva es: " << sumaRecursiva(500) << endl;
	cout << endl << endl;

/*
TEST_CASE( "Testing sumaRecursiva", "[sumaRecursiva]" ) {
	REQUIRE(sumaRecursiva(1) == 1);
	REQUIRE(sumaRecursiva(10) == 55);
	REQUIRE(sumaRecursiva(50) == 1275);
	REQUIRE(sumaRecursiva(100) == 5050);
	REQUIRE(sumaRecursiva(500) == 125250);
}
*/

	cout << "Pruebas de Suma directa" << endl;
	sumaDirecta(1);
	sumaDirecta(10);
	sumaDirecta(50);
	sumaDirecta(100);
	sumaDirecta(500);
/*
TEST_CASE( "Testing sumaDirecta", "[sumaDirecta]" ) {
	REQUIRE(sumaDirecta(1) == 1);
	REQUIRE(sumaDirecta(10) == 55);
	REQUIRE(sumaDirecta(50) == 1275);
	REQUIRE(sumaDirecta(100) == 5050);
	REQUIRE(sumaDirecta(500) == 125250);
}
*/
}
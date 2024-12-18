// funciones.cpp
#include <iostream>
#include "funciones.h"  // Incluir el archivo de cabecera

using namespace std;

// Definición de la función saludar
void saludar() {
    cout << "¡Hola desde el archivo funciones.cpp!" << endl;
}

// Definición de la función sumar
float multi(int a, int b,int c) {
    return (a * b)/c;
}


// funciones.h
#ifndef FUNCIONES_H  // Directiva de inclusión múltiple
#define FUNCIONES_H

// Declaraciones de funciones
void saludar();        // Función que imprime un saludo
float multi(int a, int b, int c); // Función que suma dos números y retorna el resultado

#endif // FUNCIONES_H






#include <iostream>
#include "funciones.h"  // Incluir el archivo de cabecera

using  namespace std;

int main() {
    // Llamar a las funciones definidas en funciones.cpp
    saludar();  // Llama a la función saludar

    float resultado = multi(5, 3, 3);  // Llama a la función sumar
    cout << "El resultado de la multiplicacion es: " << resultado << endl;

    return 0;
}

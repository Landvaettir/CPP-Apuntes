//OPERADORES ARITMÉTICOS BÁSICOS

#include <iostream>

int main(){
    int a = 5, b = 3;
    
    //Adición (+)
    int suma = a + b;
    std::cout << "Suma: " << suma << std::endl;
    
    //Sustracción (-)
    int resta = a - b;
    std::cout << "Resta: " << resta << std::endl;

    //Multiplicación (*)
    int multiplicacion = a * b;
    std::cout << "Multiplicación: " << multiplicacion << std::endl;

    //División (/)
    int division = a / b;
    std::cout << "División: " << division << std::endl;

    //Módulo (%)
    int modulo = a % b;
    std::cout << "Módulo: " << modulo << std::endl;

    //Incremento (++)
    std::cout << "a= " << a << std::endl;
    // a++ = Incremento postfijo -> devuelve el valor antes de incrementar
    std::cout << "Incremento posfijo de a: " << a++ << std::endl;

    std::cout << "a= " << a << std::endl;
    //++a = Incremento prefijo -> incrementa antes de devolver el valor
    std::cout << "Incremento prefijo de a: " << ++a << std::endl;

    //Decremento (--)
    std::cout << "a= " << a << std::endl;
    // a-- = Decremento postfijo -> devuelve el valor antes de decrementar
    std::cout << "Decremento posfijo de a: " << a-- << std::endl;

    std::cout << "a= " << a << std::endl;
    //--a = Decremento prefijo -> decrementa antes de devolver el valor
    std::cout << "Decremento prefijo de a: " << --a << std::endl;
    return 0;
}
#include <iostream>


int main(){
    char name[15]; //Aceptará solo un texto de largo 15
    std::cout << "Escribe tu nombre: ";
    std::cin >> name;
    std::cout << "Hola " << name << std::endl;
    return 0;
}
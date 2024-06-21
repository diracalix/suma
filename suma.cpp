#include <iostream>

// Función para sumar dos números
int sumaRecursiva(int a, int b) {
    if (b == 0) {
        return a;
    }
    return sumaRecursiva(a ^ b, (a & b) << 1);
}

int main() {
    int n1, n2;
    std::cout << "Introduzca el primer número (entero): ";
    std::cin >> n1;
    std::cout << "Introduzca el segundo número (entero): ";
    std::cin >> n2;

    int resultado = sumaRecursiva(n1, n2);
    std::cout << "La suma es: " << resultado;

    return 0;
}

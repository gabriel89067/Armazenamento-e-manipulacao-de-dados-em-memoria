#include <iostream>
#include <iomanip>
int valor_global = 100;//variavel global

double dobrar_valor(double input) {//funçao que recebe um double com parametro
double dobro = input * 2.0;
return dobro;
}

int main() {

int idade = 30;//alocado estaticamente

double salario = 12345.67;//alocado estaticamente


double lista[3] = {1.2, 2.3, 3.4};//alocado estaticamente

std::cout << std::fixed << std::setprecision(2) << dobrar_valor(salario);

return 0;
}

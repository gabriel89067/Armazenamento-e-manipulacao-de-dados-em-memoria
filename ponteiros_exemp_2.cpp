#include <iostream>

int main(){

int *a = nullptr;//inicializo uma variavel de ponteiro nulo

int b = 10;//inicializo uma variavel estaticamente como 10

a = new int;//fa�o a aloca�ao dinamicamente

*a = 20;//atribuo ao valor no espa�o alocado de a

delete a;//desaloco o a

a = &b;//aponto o ponteiro a para o endere�o de b

*a = 30;//atribuo o valor ao espa�o apontado

return 0;
}

#include <iostream>

int main(){

int *a = nullptr;//inicializo uma variavel de ponteiro nulo

int b = 10;//inicializo uma variavel estaticamente como 10

a = new int;//faço a alocaçao dinamicamente

*a = 20;//atribuo ao valor no espaço alocado de a

delete a;//desaloco o a

a = &b;//aponto o ponteiro a para o endereço de b

*a = 30;//atribuo o valor ao espaço apontado

return 0;
}

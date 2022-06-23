#include <iostream>

int fatorial(int n) {//funçao que recebe um int como parametro

if (n > 1){

return n*fatorial(n-1);

}else{ return 1;}

}

int main() {

int fat1 = fatorial(3);//chamo a funçao fatorial e passo o 3 como parametro

std::cout << fat1 << std::endl;

int fat2 = fatorial(10);//chamo a funçao fatorial e passo o 10 como parametro

std::cout << fat2 << std::endl;

return 0;

}

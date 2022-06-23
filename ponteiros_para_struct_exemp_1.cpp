struct data {int dia; int mes; int ano;};

int main() {

    struct data d1;
    struct data *ptr = &d1;
    int i = 0;

    d1.dia = 8;
    d1.mes = 3;
    d1.ano = 2012;

    ptr->dia = 7;
    ptr->mes = 11;
    ptr->ano = 2020;

    return 0;
}

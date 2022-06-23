int main(){

  int *p = new int[10];//aloco um vetor dinamicamente

  p[0] = 99;//atribuo ao primeiro

  delete[] p;//apago o vetor

  return 0;
}

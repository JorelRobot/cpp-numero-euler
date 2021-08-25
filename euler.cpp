#include <iostream>
using namespace std;

double euler(int n, int cont){
    int a;
    int contD3 = (cont + 1) / 3;

    if (n == 0) return 1;
    if (cont > 0){
        if ((cont + 1) % 3 == 0) a = 2 * (contD3);
        if ((cont + 1) % 3 != 0) a = 1;
    }
    if (cont == 0) a = 2;

    return a + 1 / euler (n - 1, cont + 1);
}

int main(){
    int n;
    int cont = 0;

    cout<<"Introduzca el numero de iteraciones en la recurcividad para calcular el numero de Euler: ";
    cin>>n;

    double e = euler(n, cont);

    cout<<"e = "<<e<< endl;

    return 0;
}

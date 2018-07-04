#include "funcoes.h"

int factorial (int n)
{
    return (n==0)?1:n*factorial(n-1);
}

float expo (float x, int n)
{
    return (n==0)?1:x*expo(x,n-1);
}

int PA_TotalTermos ( int inicial, int final, int razao )
{
    if (razao == 0 || (inicial<final&&razao<0) || (inicial>final&&razao>0) ){
        return 0;
    } else {
    return ( final-inicial+razao) / razao;}
}

void ImprimePares ( int inicial , int final ){}
double DobraValor ( int ultimo_dia ) {}
double DobraValor_for ( int ultimo_dia ) {}
double TotalCombinacoes ( int conjunto, int escolhas ) {}
'

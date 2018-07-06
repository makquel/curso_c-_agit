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

void ImprimePares ( int inicial , int final )
{
    int num_cnt = 0;
    std::vector<int> even_num;
    std::cout << "Lista dos numeros pares entre" << inicial << "e" << final << std::endl;
    for (int i=inicial; i<=final;++i)
    {
      if(i%2==0){
          num_cnt += 1;
          even_num.push_back(i);
      }
    }

    std::cout << "Total de numeros a imprimir: " << even_num.size() << std::endl;
    std::vector<int>::iterator itc = even_num.begin();
    while ( itc!=even_num.end() ){
        std::cout << *itc << ",";
        ++itc;
        if (itc==even_num.end())
            std::cout << "\n";
    }
}
//double DobraValor ( int ultimo_dia ) {}
//double DobraValor_for ( int ultimo_dia ) {}
//double TotalCombinacoes ( int conjunto, int escolhas ) {}

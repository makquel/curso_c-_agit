#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>

//using namespace std;
float *array;
int size;

int minimo (int a, int b)
{
    return (a < b)?a:b;
}
int maximo (int a, int b)
{
    return (a>b)?a:b;
}

int factorial (int n)
{
    return (n==0)?1:n*factorial(n-1);
}
int main()
{
    /*size = 10;
    std::vector<int> vec;
    array = new float [size];
    std::cout << "Testando array" << std::endl;
    std::cout << "..............." << std::endl;
    for(int i=0; i<size; i++){
        array[i] = exp(i);
        vec.push_back(exp (i));
        std::cout << "Array[" << i << "]: " << array[i] << "\n";
    }
    std::cout << "size: " << vec.size() << std::endl;

    long max_int = pow (2.0, 32.0);
    std::cout << "MAX_INT: " << max_int << std::endl;
    delete array;
    int fact;
    std::cout << "try any number less than 2^9" << std::endl;
    std::cin >> fact;
    int c = factorial(fact);
    printf ("%d\n", c);*/
//    std::cout << "informe os numeros inicial, final e a razao -nessa ordem:" << std::endl;
    int inicial;
//    std::cout << "Insira o valor inicial" << std::endl0

    int final;
//    std::cout << "Insira o valor inicial" << std::endl;

    int razao;
//    std::cout << "Insira o valor inicial" << std::endl;
    int prog_flag;
    while(1){
        int somatoria = 0;
        std::cout << "informe os numeros inicial, final e a razao -nessa ordem:" << std::endl;
        std::cin >> inicial;
        std::cin >> final;
        std::cin >> razao;
        if(std::cin.fail ()){
            std::cout << "erro!" << std::endl;
        }
        else {
            for(int k=inicial; k<final+razao; k+=razao){
                somatoria += k;
            }
            std::cout << "resultado da soma:" << somatoria << std::endl;
            std::cout << "deseja realizar novo calculo? \n";
            std::cout << "(0 para encerrar, qualquer outro numero para continuar) \n";

            std::cin >> prog_flag;
            if(prog_flag == 0)
                break;
        }

    }
    std::cout << "fim de procesamento" << std::endl;
    return 0;
}

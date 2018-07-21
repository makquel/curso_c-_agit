#include <iostream>
#include "data.h"
using namespace std;

std::vector<int> solution(std::vector<int> &A, int K);

int main()
{
    Data dt, dt1(1900,2100);

//  Data::Altera(&dt,10,3,2018);
    dt.altera(5,2,2018);
    dt.imprime();

//  Data::Altera(&dt1,10,3,2018);
    dt1.altera(5,3,2019);
//    dt1.imprime();
    std::cout << "dt = " << dt << '\n';
    std::cout << "ano bissexto: " << dt1.anoBissexto() << std::endl;
    std::cout << "Ultimo dia do mês: " << dt1.UltimoDiaMes()<< std::endl;
    std::cout << "Comparação: " << dt.compara(dt1) << std::endl;
    return 0;
}

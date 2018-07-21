#include <iostream>
#include "data.h"
using namespace std;

int main()
{
    Data dt, dt1(1900,2100);

//  Data::Altera(&dt,10,3,2018);
    dt.altera(5,3,2018);
    dt.imprime();

//  Data::Altera(&dt1,10,3,2018);
    dt1.altera(32,3,2018);
    dt1.imprime();

    return 0;
}

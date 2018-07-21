#include <iostream>
#include <iomanip>
#include "data.h"
using namespace std;

void Data::imprime() const
{
    if( m_bOk )
    {
/*
        std::cout.fill('0');
        std::cout.width(2);
        std::cout << (int)m_dia << '/';
        std::cout.width(2);
        std::cout << (int)m_mes
                << '/' << m_ano << '\n';
*/
        std::cout << std::setfill('0')
                <<std::setw(2)
                 << (int)m_dia << '/'
                << std::setw(2)
                << (int)m_mes
                << '/' << m_ano << '\n';
    }
    else
    {
        std::cout << "?\?/?\?/????\n";
    }
}

void Data::altera( /* Data *this , */const char d, char m, short a)
{
    (*this).m_dia = d;
    this->m_mes = m;
    m_ano = a;
    m_bOk = d >= 1 && d <= 31 &&
            m >= 1 && m <= 12 &&
            a >= m_anoMin &&
            a <= m_anoMax;
}


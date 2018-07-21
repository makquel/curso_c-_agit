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
    m_bOk = d >= 1 && d <= UltimoDiaMes() &&
            m >= 1 && m <= 12 &&
            a >= m_anoMin &&
            a <= m_anoMax &&
            d >= 1 && d <= UltimoDiaMes();
}

bool Data::anoBissexto() const
{
    bool bissexto;
    (m_ano%400 == 0)||((m_ano%4==0) && (m_ano%100!=0))?bissexto=true:bissexto= false;
    return bissexto;
}

int Data::UltimoDiaMes() const
{
    if (m_mes<=7){
        if (m_mes == 2){
            if (anoBissexto())
                return 29;
            else
                return 28;
        }
        if (m_mes%2==0){
            return 30;
        }else
            return 31;
    }else{
        if (m_mes%2==0){
            return 31;
        }else
            return 30;

    }
}

int Data::compara(const Data &dt) const
{
    if (dt.m_ano==this->m_ano && dt.m_mes==(*this).m_mes && dt.m_dia==this->m_dia)
        return 0;
    if(dt.m_ano>this->m_ano && dt.m_mes>(*this).m_mes && dt.m_dia>this->m_dia)
        return 2;
    else
        return -2;
}

inline bool Data::operator ==(const Data &dt) const
{
    return compara(dt)==0;
}
inline bool Data::operator <( const Data &dt ) const
{
    return (compara(dt)<0);
}
inline bool Data::operator >( const Data &dt ) const
{
    return (compara(dt)>0);
}

std::ostream &operator << (std::ostream &o, const Data &dt) {
    if( dt.m_bOk )
    {

    std::cout << std::setfill('0')
            << std::setw(2)
            << (int)dt.m_dia << '/'
            << std::setw(2)
            << (int)dt.m_mes
            << '/' << dt.m_ano;
}
else
{
    std::cout << "?\?/?\?/????";
}
}

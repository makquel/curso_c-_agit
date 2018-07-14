//https://medium.freecodecamp.org/code-comments-the-good-the-bad-and-the-ugly-be9cc65fbf83
#include <iostream>
struct Data
{
private:
    char m_dia, m_mes;
    short m_ano;
    short m_anoMin=1900, m_anoMax=2018;
    bool m_bOk=false;
public:
    void Altera(char d, char m, short a);
    bool isOk(void){return m_bOk;}
};

void Data::Altera(/* Data *this, */char d, char m, short a)
{
    (*this).m_dia = d;
    this->m_mes = m;
    m_ano = a;
    m_bOk = d>=1 && d<=31 &&
            m>=1 && m<= 12 &&
            a>= m_anoMin && a<=m_anoMax;
}

int main()
{
    Data dt;
//    std::cout << sizeof(Data) << "\n";
//    dt.m_dia = 10;
//    dt.m_mes = 3;
//    dt.m_ano = 2018;

    dt.Altera(10,3,2018);
    std::cout << "Data status: " << dt.isOk() << "\n";
    return 0;
}

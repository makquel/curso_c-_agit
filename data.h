#ifndef DATA_H
#define DATA_H
#include <iostream>
class Data
{
    friend std::ostream &operator << (std::ostream &o, const Data &dt);
private:
    enum color
    {
        JANEIRO,
        FEVEREIRO,
        MARCO,
        ABRIL,
        MAIO,
        JUNHO,
        JULHO,
        AGOSTO,
        SETEMBRO,
        OUTUBRO,
        NOVEMBRO,
        DEZEMBRO
    };
    char m_dia, m_mes;
    short m_ano;
    short m_anoMin = 0, m_anoMax = 2999;
    bool m_bOk = false;

public:
    Data() = default;
    Data(short aMin, short aMax)
    {
        m_anoMin = aMin;
        m_anoMax = aMax;
    }
    void altera(const char d, char m, short a);
    void imprime() const;
    bool isOk() { return m_bOk; }
    bool anoBissexto() const; // only reading function
    int UltimoDiaMes() const;
    int compara(/*const Data *this,*/ const Data &dt) const;
    inline bool operator == (const Data &dt) const;
    inline bool operator < ( const Data &dt )const;
    inline bool operator > ( const Data &dt )const;

};

#endif // DATA_H

#ifndef DATA_H
#define DATA_H

class Data
{
private:
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
};

#endif // DATA_H

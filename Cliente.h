//
// Created by pippo on 09/07/2021.
//

#ifndef OBSCASSACLIENTE_CLIENTE_H
#define OBSCASSACLIENTE_CLIENTE_H
#include "Observer.h"
#include "string"
#include "iostream"
#include "chrono"
#include "ctime"
using namespace std;

class Cliente{
public:
    Cliente(const string &nomecliente);
    virtual ~Cliente();

    const string &getNome() const;
    int getNumerocliente() const;
    void setNumerocliente(int numerocliente);
    void setCoda(int coda);

    bool isPrenotazione() const;
    void setPrenotazione(bool prenotazione);

    const chrono::time_point<std::chrono::system_clock> &getTempocreazione() const;
    void setTempocreazione();
    const chrono::time_point<std::chrono::system_clock> &getTempochiusura() const;
    void setTempochiusura();

    std::chrono::duration<double> tempoattesa();

    void stampacliente();

private:
    string nome;
    int numero;
    int coda;
    bool prenotazione;
    std::chrono::time_point<std::chrono::system_clock>  tempocreazione;
    std::chrono::time_point<std::chrono::system_clock>  tempochiusura;
};


#endif //OBSCASSACLIENTE_CLIENTE_H

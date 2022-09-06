//
// Created by pippo on 09/07/2021.
//

#ifndef OBSCASSACLIENTE_CASSA_H
#define OBSCASSACLIENTE_CASSA_H
#include "Subject.h"
#include "list"
#include "Cliente.h"
using namespace std;

class Cassa : public Subject {
public:

    int getNumerocliente() const;
    int getNumeroservito() const;

    void clientesuccessivo();

    void subscribe(Observer* o) final;
    void unsubscribe(Observer* o) final;
    void notify() final;

    void createCliente();
    void addCliente(Cliente* c);
    void removeCliente(Cliente* c);
    void stampaCoda();
    void removeclienteservito();
    void setcodacliente();
    int getCodacliente() const;

    const chrono::duration<double> &getServiziomedio() const;
    chrono::duration<double> getServiziomedio(const chrono::duration<double> &serviziomedio);

    string getnomeclienteservito();

    void removepronotazione (Cliente *c);


private:
    list<Observer*> observers;
    list<Cliente*> clienti;
    int numerocliente=0;
    int numeroservito=0;
    int codacliente=0;
    std::chrono::duration<double> serviziomedio;
};


//cose da aggiungere
// tempo medio di servizio -> tempo apertura/clienti serviti * persone davanti a te


#endif //OBSCASSACLIENTE_CASSA_H

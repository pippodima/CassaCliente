//
// Created by pippo on 09/07/2021.
//

#include "Cassa.h"

int Cassa::getNumerocliente() const {
    return numerocliente;
}

void Cassa::subscribe(Observer *o) {
    observers.push_back(o);
    notify();
}

void Cassa::unsubscribe(Observer *o) {
    observers.remove(o);
    notify();
}

void Cassa::notify() {
    for (auto i:observers)
        i->update();
}
void Cassa::stampaCoda() {
    cout<<endl;
    for (auto i:clienti)
            i->stampacliente();
}

void Cassa::addCliente(Cliente *c) {
    numerocliente++;
    c->setNumerocliente(numerocliente);
    c->setCoda(numerocliente-numeroservito-1);
    c->setTempocreazione();
    clienti.push_back(c);
    codacliente++;
    notify();

}

void Cassa::removeCliente(Cliente* c) {
        clienti.remove(c);
        notify();
}

void Cassa::clientesuccessivo() {
    numeroservito++;
    removeclienteservito();
    setcodacliente();
    notify();
}

int Cassa::getNumeroservito() const {
    return numeroservito;
}

void Cassa::removeclienteservito() {
    clienti.front()->setTempochiusura();
    getServiziomedio(clienti.front()->tempoattesa());

    clienti.pop_front();
    codacliente--;
}

void Cassa::createCliente() {
    string nome;
    cout << "inserisci il nome del cliente" << endl;
    cin >> nome;
    Cliente* cliente = new Cliente(nome);
    addCliente(cliente);
}

void Cassa::setcodacliente() {
    for(auto i:clienti)
        i->setCoda(i->getNumerocliente()-numeroservito-1);
}

string Cassa::getnomeclienteservito() {
    auto i = clienti.front();
    return i->getNome();
}

int Cassa::getCodacliente() const {
    return codacliente;
}

void Cassa::removepronotazione(Cliente *c) {
    removeCliente(c);
}

const chrono::duration<double> &Cassa::getServiziomedio() const {
    return serviziomedio;
}

chrono::duration<double> Cassa::getServiziomedio(const chrono::duration<double> &serviziomedio) {

    Cassa::serviziomedio += serviziomedio;
    return Cassa::serviziomedio/numerocliente;
}

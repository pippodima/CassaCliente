//
// Created by pippo on 09/07/2021.
//

#include "Cliente.h"

Cliente::Cliente(const string &nomecliente) : nome(nomecliente) {}

Cliente::~Cliente() {}


void Cliente::stampacliente() {
    cout<<"Il cliente "<<nome<<" ha "<<coda<<" persone davanti. N."<<numero<<" Tempo medio di attesa: "<<tempoattesa().count()<<endl;
}

void Cliente::setNumerocliente(int numerocliente) {
    numero = numerocliente;
}

const string &Cliente::getNome() const {
    return nome;
}

int Cliente::getNumerocliente() const {
    return numero;
}

void Cliente::setCoda(int coda) {
    Cliente::coda = coda;
}

bool Cliente::isPrenotazione() const {
    return prenotazione;
}

void Cliente::setPrenotazione(bool prenotazione) {
    Cliente::prenotazione = prenotazione;
}


const chrono::time_point<std::chrono::system_clock> &Cliente::getTempocreazione() const {
    return tempocreazione;
}

void Cliente::setTempocreazione() {
    Cliente::tempocreazione = std::chrono::system_clock::now();
}

const chrono::time_point<std::chrono::system_clock> &Cliente::getTempochiusura() const {
    return tempochiusura;
}

void Cliente::setTempochiusura() {
    Cliente::tempochiusura = std::chrono::system_clock::now();
}

std::chrono::duration<double> Cliente::tempoattesa() {
    std::chrono::duration<double> tempo = tempochiusura - tempocreazione;
    return tempo;

}


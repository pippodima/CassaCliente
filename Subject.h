//
// Created by pippo on 09/07/2021.
//

#ifndef OBSCASSACLIENTE_SUBJECT_H
#define OBSCASSACLIENTE_SUBJECT_H
#include "Observer.h"

class Subject {
public:
    virtual ~Subject();

    virtual void subscribe(Observer* o)=0;
    virtual void unsubscribe(Observer* o)=0;
    virtual void notify()=0;

};


#endif //OBSCASSACLIENTE_SUBJECT_H

//
// Created by pippo on 09/07/2021.
//

#ifndef OBSCASSACLIENTE_OBSERVER_H
#define OBSCASSACLIENTE_OBSERVER_H


class Observer {
public:
    virtual ~Observer();

    virtual void attach()=0;
    virtual void detach()=0;
    virtual void update()=0;
};


#endif //OBSCASSACLIENTE_OBSERVER_H

//
// Created by pippo on 11/07/2021.
//

#ifndef OBSCASSACLIENTE_CASSAVIEW_H
#define OBSCASSACLIENTE_CASSAVIEW_H
#include "Cassa.h"

class CassaView : public Observer{
public:
    CassaView(Cassa* nomecassa);

    virtual ~CassaView();

    void attach() final;
    void detach() final;
    void update() final;

private:
    Cassa* cassa;
};


#endif //OBSCASSACLIENTE_CASSAVIEW_H

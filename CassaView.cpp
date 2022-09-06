//
// Created by pippo on 11/07/2021.
//

#include "CassaView.h"

CassaView::CassaView(Cassa* nomecassa) : cassa(nomecassa) {
    attach();
}

CassaView::~CassaView() {
    detach();
}

void CassaView::attach() {
    cassa->subscribe(this);
}

void CassaView::detach() {
    cassa->unsubscribe(this);
}

void CassaView::update() {
    if(cassa->getNumerocliente()!=0 && cassa->getCodacliente()!=0) {
        cassa->stampaCoda();
        cout << "\nSto servendo " << cassa->getnomeclienteservito() << endl;
    }else{
        cout<<"\nNessuno e' in coda"<<endl;
    }

}

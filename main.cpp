#include <iostream>
#include "Cliente.h"
#include "Cassa.h"
#include "CassaView.h"
#include "chrono"
#include "ctime"
using namespace std;
int main() {
    /*std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> tempo = end - start;*/

    Cassa* salumi = new Cassa;
    CassaView obs(salumi);
    string nome;
    int r=1;

    while(r!=0) {
        cout << "1.   numero successivo\n2.   aggiungi cliente\n0.   esci" << endl;
        cin >> r;
        switch (r) {
            case 1:
                salumi->clientesuccessivo();
                break;
            case 2:
                salumi->createCliente();
                break;
            default:
                break;
        }
    }




    return 0;
}

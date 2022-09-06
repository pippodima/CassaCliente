cmake_minimum_required(VERSION 3.19)
project(ObsCassaCliente)

set(CMAKE_CXX_STANDARD 14)

add_executable(ObsCassaCliente main.cpp Observer.cpp Observer.h Subject.cpp Subject.h Cliente.cpp Cliente.h Cassa.cpp Cassa.h CassaView.cpp CassaView.h)
cmake_minimum_required(VERSION 3.20.2)
project(TrabalhoPOO)

set(CMAKE_CXX_STANDARD 17)

add_executable(TrabalhoPOO
        main.cpp
        habitacao.h
        habitacao.cpp
        zonas.h
        zonas.cpp
        propriedades.h
        propriedades.cpp
        sensores.h
        sensores.cpp
        regras.h
        regras.cpp
        aparelho.h
        aparelho.cpp
        aparelho.h
        curses.h
        terminal.h
        terminal.cpp
        Interface.cpp
        Interface.h
        processador.cpp
        processador.h
        )


target_link_libraries(${PROJECT_NAME} -lncurses)
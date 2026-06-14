CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

# Core headers
HEADERS = Actuacion.h Anotador.h Jugador.h JugadorAleatorio.h JugadorHumano.h Marcador.h Tournament.h NOMBREDETUJUGADORAQUI.hh

all: cacho

cacho: main.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) main.cpp -o cacho

clean:
	rm -f cacho

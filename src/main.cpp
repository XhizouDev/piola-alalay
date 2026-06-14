#include "JugadorAleatorio.h"
#include "Tournament.h"
#include <iostream>
#include <memory>

#include "NOMBREDETUJUGADORAQUI.hh"

int main() {
  Tournament t;

  t.addPlayer(
      []() { return std::make_shared<JugadorAleatorio>("Bot_Random_1"); });
  t.addPlayer(
      []() { return std::make_shared<JugadorAleatorio>("Bot_Random_2"); });
  t.addPlayer(
      []() { return std::make_shared<NOMBREDETUJUGADORAQUI>("NOMBREDETUJUGADORAQUI"); });

  std::cout << "Comenzando simulación con 2 Jugadores Aleatorios y NOMBREDETUJUGADORAQUI (100 partidas)..."
            << std::endl;

  t.run(100);
  t.displayResults();

  return 0;
}

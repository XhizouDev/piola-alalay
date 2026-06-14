#ifndef NOMBREDETUJUGADORAQUI_HH
#define NOMBREDETUJUGADORAQUI_HH

#include <map>
#include <string>
#include <vector>

#include "Jugador.h"
#include "Marcador.h"
#include "Actuacion.h"

class NOMBREDETUJUGADORAQUI : public Jugador {
    private:
        std::string nombreEstudiante;

    public:
        NOMBREDETUJUGADORAQUI(std::string nom = "NOMBREDETUJUGADORAQUI") : Jugador(nom) {
            nombreEstudiante = "TU NOMBRE AQUI";
        }

        int jugar(const std::map<std::string, Marcador> &marcadores,
                const std::vector<Actuacion> &actuacionesPosibles,
                const std::vector<int> &dados,
                const Anotacion &resultadoPrevio) override {

        // Lógica aquí
        // NO USES IA

        return ACTUACION;
        }

        std::string getNombreEstudiante() const {
            return nombreEstudiante;
        }
};

#endif
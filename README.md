# Piola-Alalay

> [!CAUTION]
> ESTE REPOSITORIO NO ES EL REPOSITORIO OFICIAL PROPORCIONADO POR COORDINACIÓN PARA LA TAREA DE CACHO ALALAY EN C++ !!
> 
> EL TORNEO Y EVALUACIÓN NO SE LLEVARÁ A CABO EN ESTE PROGRAMA. ESTE FORK ES SOLO REFERENCIAL Y UNA GUÍA. ERES RESPONSABLE SI SE TE EVALÚA MAL POR CONFIAR CIEGAMENTE EN ESTE RECURSO. QUEDAS AVISADO.
>
> SIEMPRE CORROBORAR LA INFORMACIÓN EN LOS MEDIOS OFICIALES (AULA Y REPOSITORIO OFICIAL "CACHO-CPP"), ASÍ COMO PREFERIR CONSULTAR A PROFESORES Y AYUDANTES.
>
> PORFAVOR, ASEGURATE DE QUE TU TRABAJO COMPILE Y FUNCIONE CORRECTAMENTE BAJO LAS CONDICIONES OFICIALES (PROGRAMA OFICIAL Y ENTORNO VM LINUX) ANTES DE HACER CUALQUIER ENVÍO. DE NO HACERLO, TE ARRIESGAS A TENER CERO (0/100) COMO NOTA.

---
# Linux con apt

Compilar cacho-cpp en Linux, cualquier distro, pero supongo lo utilizarás para la VM de Lubuntu.
Creo esta branch principalmente para que se pueda tener junto al repositorio, las instrucciones completas de compilación, que fueron enviadas por AULA, en lugar de actualizar el repositorio cacho-cpp.

En la VM, la clave de usuario root es Euldlm20, la necesitarás para utilizar sudo.

---
## 1. Actualizar paquetes

Primero, refresca la lista de paquetes disponibles y actualiza los pendientes:

```bash
sudo apt update
sudo apt upgrade
```

---
## 2. Instalar dependencias

En este paso instalaremos las cosas necesarias para compilar cacho-cpp:
Si estás en la VM, solo debes ejecutar los últimos 2.

```bash
sudo apt install g++
sudo apt install make
sudo apt install libboost-all-dev
sudo apt install libasio-dev
```

---
## 3. Clonar la branch y compilar

Finalmente, vas a clonar este fork para comenzar a trabajar y compilar con `make`:

```bash
git clone -b linux-lubuntu-VM https://github.com/XhizouDev/piola-alalay
cd piola-alalay
make
```

---
# A continuación sigue el README original (traducido!!)
---

# Cacho-CPP

Una implementación en C++ del motor de juego de Cacho (edición Alalay), incluyendo API Web y Cliente Web.

## Estructura del Repositorio

- `src/`: Cabeceras centrales del motor y simulador de juego.
- `api/`: Servidor de la API Web utilizando el framework Crow.
- `web/`: Interfaz y front-end del Cliente Web.

## 🚀 Cómo Empezar

### Prerequisitos

- `g++` (soporte para C++17)
- `make`
- `boost-system`, `boost-thread` (requeridos para la API Web)

### Compilar el Proyecto

Puedes compilar tanto la simulación del juego como la API Web directamente desde el directorio raíz:

```bash
make
```

Alternativamente, puedes compilarlos individualmente:

```bash
# Para compilar solo el simulador
cd src
make

# Para compilar la API Web
cd api
make
```

## 🎲 Ejecutar simulaciones

El ejecutable `src/cacho` corre una partida entre jugadores automatizados (Aleatorios).

```bash
cd src
./cacho
```

## 🌐 Ejecutando la API Web

El ejecutable `api/cacho_api` inicializa un servidor en `http://localhost:8080`.

```bash
cd api
./cacho_api
```

Una vez iniciado, abre [http://localhost:8080](http://localhost:8080) en tu navegador para jugar.

## 🛠 Características

- **Motor Desacoplado**: Implementación en C++ puro sin dependencias externas (excepto por Crow/Boost en la API).
- **Reglamento Alalay**: Soporte completo para las reglas de la edición Alalay.
- **Interfaz Web**: Cliente web moderno para jugadores humanos.
- **Jugador Aleatorio**: Incluido para testeo y simulación.
- **Jugador Humano**: Lógica y clase base para interacción humana.

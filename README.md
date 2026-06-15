# Piola-Alalay
---
# Windows con WSL

En esta branch tambien se compilará cacho-cpp en Windows, sin embargo se utilizará WSL, en lugar de MSYS2.
En la universidad, los ayudantes han enseñado a instalarlo, sin embargo tambien daré una introducción.

---
## ¿Qué es WSL?

WSL (Windows Subsystem for Linux) es una característica de Windows que permite correr un sistema Linux real directamente dentro de Windows, sin necesidad de una VM. 
A diferencia de MSYS2, WSL es un Linux completo, por lo que las instrucciones son prácticamente las mismas que las de Linux.

---
## 1. Instalar WSL

Abre **PowerShell** o el **Símbolo del sistema** como administrador y ejecuta:

```powershell
wsl --install
```

Esto instala WSL con Ubuntu por defecto. Una vez termine, **reinicia tu PC**.

Después del reinicio, Ubuntu se abrirá automáticamente y te pedirá crear un usuario y contraseña. Una vez hecho eso, ya estás dentro de Linux.

---
## 2. Actualizar paquetes

Una vez en la terminal de Ubuntu, al igual que si estuvieras en Linux, refresca la lista de paquetes disponibles y actualiza los pendientes:

```bash
sudo apt update
sudo apt upgrade
```

---
## 3. Instalar dependencias

En este paso instalaremos las cosas necesarias para compilar cacho-cpp:

```bash
sudo apt install g++
sudo apt install make
sudo apt install libboost-all-dev
sudo apt install libasio-dev
```

---
## 4. Clonar la branch y compilar

Finalmente, vas a clonar este fork para comenzar a trabajar y compilar con `make`:

```bash
git clone -b windows-wsl https://github.com/XhizouDev/piola-alalay
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

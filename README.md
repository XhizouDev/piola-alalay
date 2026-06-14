# Piola-Alalay
---
# Windows con MSYS2

Vamos con lo que interesa, compilar cacho-cpp en Windows.

---
## ¿Qué es MSYS2?

MSYS2 es un entorno de desarrollo para Windows que permite usar herramientas Unix (bash, make, gcc) y gestionar paquetes con `pacman`, el mismo gestor de Arch Linux, de manera nativa.

---
## 1. Descargar e instalar MSYS2

Descárgalo desde [https://www.msys2.org](https://www.msys2.org) y sigue el instalador. Una vez instalado, abre la terminal UCRT64.

---
## 2. Actualizar paquetes

Una vez en la terminal UCRT64, para actualizar los paquetes, ejecuta:

```bash
pacman -Syu
```

Si la terminal se cierra, vuelve a abrirla y ejecuta:

```bash
pacman -Su
```

---
## 3. Instalar dependencias

En este paso instalaremos las cosas necesarias para compilar cacho-cpp, compilador, y prerrequisitos:

```bash
pacman -S mingw-w64-ucrt-x86_64-gcc
pacman -S make
pacman -S mingw-w64-ucrt-x86_64-boost
pacman -S mingw-w64-ucrt-x86_64-asio
```

---
## 4. Agregar MSYS2 al PATH de Windows

Esto es una de las cosas que nunca se nos ha explicado bien, ¿qué es el PATH? Pues bien, el PATH le dice a los programas, donde buscar los archivos o programas que se le puedan pedir como dependencias para funcionar.
Al instalar dependencias, compilador aún necesita saber donde se encuentran una vez instalados esos programas/archivos para poder armar el programa deseado, por lo que se refiere al PATH, si en PATH no se encuentra la ruta donde se instalaron las dependencias, el compilador no encontrará las dependencias, arrojando error como si nunca las hubieramos instalado.

Por lo que para evitar errores debes agregar `C:\msys64\ucrt64\bin` y `C:\msys64\usr\bin` a PATH.

1. Busca **"Variables de entorno"** en el menú inicio
2. Click en **"Variables de entorno..."**
3. En **Variables del sistema**, selecciona `Path` bajo **Variables de usuario para [user]** y luego **Editar**
4. Click en **Nuevo** y agrega lo que dije antes, textual.
5. Aceptar en todo

---
## 5. Clonar la branch y compilar

Finalmente, vas a clonar este fork para comenzar a trabajar y compilar con `make`:

```bash
git clone -b MSYS2 https://github.com/XhizouDev/piola-alalay
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

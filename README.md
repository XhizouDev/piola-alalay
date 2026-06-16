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
## Sobre este fork
---
Hola, soy Álvaro aka. XhizouDev, y este es mi humilde intento de hacer más llevadera la Tarea 2 basada en Cacho Alalay para todos, despues de la masacre que volvió a ser el Certamen.

Este repositorio cuenta con múltiples branches según en que plataforma escojas desarrollar la tarea, asegurate de estar en la correcta antes de seguir cualquier instrucción.

> **macOS** no está cubierto en este fork por no tener acceso a un Mac para testearlo. En teoría debería funcionar instalando las dependencias con Homebrew (`brew install boost asio`), siguiendo las mismas instrucciones que en linux, pero no puedo garantizarlo. Si alguien lo prueba y funciona, podemos darle "soporte".

---
### Motivación
---
Mi motivación principal fue que la maquina virtual con lubuntu es ultra lenta cuando tienes firefox y VSCode abiertos al mismo tiempo, y por mi parte prefiero aguantarme las limitaciones de Windows, así que adapté la compilación del repositorio a MSYS2 y decidí compartirlo.

Además muchos compañeros no sabían ni como empezar a hacer la tarea y para peor, nos siguen pasando TODO en inglés, como si tener que entender el código no fuera suficiente. Así que pretendo ademas explicar aquí como funciona realmente la tarea y dar una base que no venía con el repositorio original para que al menos sea mas facil comenzar.

_Quiero condenar aquí mismo tambien el uso de IA, hmno, para que estudias informática si vas a vibecodear._
_Así que espero que si piensas usar este fork como base para tu ejecución de la tarea, no uses IA._

---
### ¿Qué hay que hacer? y cómo
---
Resumidamente tienes que programar un bot que juegue Cacho Alalay.

Tu bot es una clase que hereda de `src/Jugador.h` y debes programar su método int jugar(), en este método debes incluir la lógica para que tu jugador tome decisiones y retornar un número que representa dicha decisión.

El método jugar recibe 4 parámetros:

* std::map<std::string, Marcador> &marcadores : Un diccionario que te dice la puntuación en cada jugada posible de todos los jugadores de la partida (véase `src/Marcador.h`).
  
* std::vector<Actuacion> &actuacionesPosibles : Un vector de Actuaciones (véase `src/Actuacion.h`), que te dice todos los movimientos posibles en algún momento de la partida, todo pre-calculado y listo para usar. Este vector es el "más importante", pues lo que debe retornar el método es el *indice de la actuación que va a tomar tu bot*.
  
* std::vector<int> &dados : Un vector de enteros que representa que dieron los dados. 5 números, 5 dados.
  
* Anotacion &resultadoPrevio : Este es el parametro más confuso de explicar y entender (véase `src/Anotador.h`), pues resulta que tu bot enrealidad es 2 jugadores, contando en total con 4 posibles lanzamientos por turno y pudiendo así anotar 2 jugadas por turno. Cuando juega la primera persona que compone tu bot, puedes tomar la decisión/actuación "sobre", con lo que guardas en lo que te haya salido en un lanzamiento (por ejemplo 24 puntos en senas) buscando que en los lanzamientos de la otra persona que compone tu bot le salga algo mejor, luego puedes decidir si quedarte con lo que guardaste/hiciste sobre o lo que le salió a la segunda persona.

Eso es principalmente lo que debes saber para comenzar, aunque entiendo que leer todo esto en texto plano puede resultar medio confuso igualmente, por lo que puedes encontrar las reglas del juego más a profundidad en [https://es.wikipedia.org](https://es.wikipedia.org/wiki/Cacho_Alalay). Y en AULA hay videos de como es el juego y como se juega. De todas formas recomiendo compilar el programa y mediante la API Web jugarlo tu mismo para familiarizarte con el juego y pensar en que lógica debería seguir tu bot.

En este repositorio te ahorro un poco de trabajo, al proveerte una base de jugador, llamado `NOMBREDETUJUGADORAQUI.hh` donde solo debes programar y no preocuparte demasiado por herencia y la estructura base de la clase. Obviamente recuerda cambiarle el nombre al archivo, clase y en todas partes donde se le referencie.

> [!WARNING]
> Es importante que le cambies el nombre a la clase de tu jugador. Sé creativo al bautizarlo y procura ser respetuoso.
> 
> Ádemas debes poner tu nombre completo en el constructor de la clase, para que se te pueda evaluar.
>
> Como último detalle, tu jugador además de funcionar correctamente, debe compilar sin warnings.

<sub>Hay partes donde se usa el nombre del bot y/o la clase fuera del mismo archivo, por lo que para testearlo, tambien debes cambiarlo en `src/main.cpp` y `src/Makefile`. De lo contrario no podrás compilarlo, esto sin embargo no es estrictamente necesario para la entrega de la tarea, pues solo debes subir el archivo .hh.</sub>

Recordatorio de que el torneo y evaluación se llevarán a cabo en un equipo sin acceso a internet, asi que no te pongas creativo con tu implementación usando APIs de IAs por ejemplo..

Ahora para continuar, puedes seleccionar la branch de este repositorio que corresponda al entorno en el que vas a desarrollar. Éxito!

---
### Extra
---
Quiero hablar un poco más aqui sobre el ramo, por lo que si no te interesa y quieres seguir con la tarea, eres libre de saltarte este punto.

Primero que nada quiero mandar un mensaje a todos mis compañeros, pues trás los certamenes cada vez veo la moral más baja en la universidad. 
Puede que me conozcas como puede que no, puede que te agrade y puede que no. Pero de todas formas quiero aprovechar esta instancia de hablarte y desearte los mejores animos para lo que queda del semestre. Recordatorio de que todo es salvable, aún si estas en la situación de tener un doble 0 en los certamenes aún así hay posibilidades de aprobar, y si no puedes no pasa nada, siempre puedes volver a intentarlo. Es de vital importancia igual que aprendas los contenidos de la asignatura para el resto de la carrera. Si acabas decidiendo que esto no es para tí tambien está bien, pero creo que lo que quiero decir es que nunca te rindas.

Soy alguien que lleva cerca de 8 años programando, y aún para mi el semestre está siendo pesado, por lo que no quiero que nadie se juzgue si siente que está decepcionando por su desempeño, y enserio espero que al crear este recurso pueda ayudar a alguien a estar almenos un poco más tranquilo almenos con esta tarea.

De todas formas quiero aclarar, en caso de que algún profesor esté viendo esto, que si esto resulta problemático para la evaluación, estoy abierto a eliminarlo, pues mi intención no es hacer fraude academico.

Considero que la tarea, si bien apasionante, no está del todo bien ejecutada. Aún veo compañeros sin idea de que es lo que hay que hacer y no es porque no les interese o no inviertan el tiempo suficiente, sino que directamente no hay cómo entender bien que hacer, el siquiera empezar a programar resulta inmensamente hóstil. Comprendo la exigencia del ramo, pues si no se aprende a programar en C/C++ no se podrá aprender nada de lo que sigue en la malla academica, pero siento que más que exigencia se tiene a los alumnos algo dejados de lado, lo que me provoca un inmenso sentimiento de injusticia.

Programación Avanzada es creado a partir de la intención de ayudar a los estudiantes para que no tengan que aprender C/C++ en 2 semanas de Estructuras de Datos, un gran avance, sin embargo la ejecución está dejando mucho que desear. Creo que se debería llevar aún más de la mano a los estudiantes, no tratarlos como tontos, pero si buscar contagiar lo apasionante, por ejemplo, de la programación orientada a objetos. Concepto que muchos aún no han logrado entender pues para enseñarlo se da por asumido que todos entendieron y aprendieron lo enseñado en C, cosa que en la mayoría de los casos no se cumple. Lo que puede apreciarse en los resultados de los certamenes.

Con todo esto, se está notando mucho que es primera vez que se dicta Programación Avanzada, se nos bombardea de información cuando muchos aún no entienden lo básico, y esto es culpa directamente de como está organizado el ramo (sin buscar culpables directos). Y de esto es que nace mi intención de crear este fork, y no espero cambiar el mundo con estas palabras, pero enserio me quedo con el deseo de que el ramo mejore, tanto para los que desgraciadamente tengan que volver a rendirlo, como para los nuevos alumnos que vengan.

Como última cosa aqui, quiero hablar sobre mí. Como mencioné al principio, soy Álvaro o XhizouDev, seudonimo bajo el cual desarrollo videojuegos indie, actualmente estoy desarrollando Cruzaders Madness, un juego de peleas en 2.5D y pretendo comenzar a documentarlo, por lo que si es de tu interés, me haría muy feliz que comenzaras a seguirme en mi [Instagram @xhizoudev](https://www.instagram.com/xhizoudev/), [Twitter @DevXhizou](https://x.com/DevXhizou) y [Youtube @XhizouDev](https://www.youtube.com/@XhizouDev).

Eso es todo, viva el software libre, selecciona una branch para continuar.

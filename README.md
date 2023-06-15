# Proyecto TC1030
# Proyecto presidente Cruz Azul FC
# Diego Quezada Colorado A01710024
# 15/06/2023 
## Contexto:
El equipo mexicano de futbol Cruz Azul FC, después de varias temporadas consecutivas teniendo malos resultados, decide contratarte como su nuevo presidente, y como tal, se te encarga la función de admnistrar las cuestiones económicas que están relacionadas al rendimiento deportivo del equipo, para ello, te facilitan un único sistema para el control de los datos para administrar esta parte. 

Tu objetivo principal, es llevar al Cruz Azul, nuevamente a la gloria de un campeonato de liga, después de varios torneos de decepciones y fracasos rotundos. Para ello comenzarás con la plantilla actual de jugadores y entrenadores del equipo, los cuales tienen un sueldo que aumenta un 8% cada año debido a la inflación. Asímismo se te proporciona un presupuesto con el cual debes saldar los sueldos de los colaboradores del equipo (jugadores y cuerpo técnico). De igual manera tienes la posibilidad de mejorar la plantilla actual y el cuerpo técnico en una ventana de traspasos que se abre cada que concluye una temporada regular, es decir en los periodos de invierno y verano, así como subir jugadores de la cantera (jugadores que se fueron formando en las divisiones inferiores del club). Adicionalmente, así como puedes traer nuevos integrantes, tienes la posibilidad de despedir a aquellos que ya no suman tanto a tu plantilla. Considerando que no puedes tener más de 30 en tu plantilla considerando a jugadores y cuerpo técnico y no puedes tener menos de 20. Para tomar dichas decisiones, tendrás acceso a las estadísticas de cada elemento de la plantilla

La dinámica principal de esta simulación consiste en que todos los jugadores y cuerpo técnico estarán clasificados según su nivel de habilidad en una escala del 1 al 100, donde el 100 es lo mejor posible. De la misma manera que sucede en la vida real, conforme pasan los años, los jugadores mejoran o empeoran sus habilidades. En esta simulación se utilizará la siguiente escala, considerando que la edad más joven que puede tener un futbolista es 16 años y que se retiraría al cumplir los 38.

Si hablamos de un jugador de ataque, es decir delanteros y medios:

-De 16 a 25 años, cada año que pase su nivel de clasificación aumentará 2 puntos.

-De 25 a 30 años, cada año que pase su nivel de clasificación aumentará 1 punto.

-De 30 a 34 años, cada año que pase su nivel de clasificación disminuirá 2 puntos.

-De 35 a 37 años, cada año que pase su nivel de clasificación disminuirá 3 puntos.

Si hablamos de un jugador defensivo, es decir defensas y portero:

-De 16 a 27 años, cada año que pase su nivel de clasificación aumentará 1 puntos.

-De 28 a 33 años, cada año que pase su nivel de clasificación aumentará 2 puntos.

-De 34 a 37 años, cada año que pase su nivel de clasificación disminuirá 1 puntos.

Ahora, cuando el jugador cumpla los 38 años, se dará de baja automáticamente del equipo. Se debe de cuidar el tamaño de la plantilla ya que si se sale de los límites previamente mencionados, automáticamente se te despedirá como presidente.

Recordemos que el objetivo de esta simulación es que el Cruz Azul se consagre como campeón del torneo nacional, así que temporada tras temporada la directiva evaluará los resultados que hayas conseguido, de manera que una temporada no puede ser peor que la pasada, es decir, se debe conseguir una posición en tabla igual o mayor a la que se consiguió en la temporada pasada. Por ejemplo, comenzarás por default en último lugar (18), así que jugarás la siguiente temporada sin problema, sin embargo, suponiendo que en esa segunda temporada quedas en el lugar 10, y en la siguiente (la tercera), quedas en 11. La directiva te comunicará que ya no desean que constinues como presidente del equipo.

Para la obtención de estas posiciones, se hace una comparación de los puntos de todos los equipos de la liga y para los puntos del equipo se toma en cuenta el promedio de nivel de los jugadores y cuerpo técnico y es justo en base a los resultados obtenidos esta tabla de posiciones que se evalúa tu desempeño y también con el que se asigna el presupuesto para la siguiente temporada, este resultado puede variar entre el 1 y el 18.

## Funcionalidad:
-El programa termina de maneras diferentes:
  
  -Cuando se lográ quedar en primer lugar de la tabla de posiciones (caso triunfar)
  
  -Cuando se tiene una temporada peor en comparación con la anterior (caso perder)
  
  -Cuando se sale de los límites de colaboradores en la plantilla (caso perder)
  
  -Cuando ya no puedes pagar los sueldos de la plantilla (caso perder)
  
  -Cuando tienes menos de 1 porteros, 4 defensas, 4 medios , 3 delanteros o 1 entrenador.
  
  -Cuando se insertan datos diferentes a los que se solicitan

-Al principio se cuenta con jugadores que sobrepasan la edad de retiro, como lo es Jesús Corona, el portero, que por el programa se retirará o "despedirá exitosamente" al simular la primera temporada, y así mismo, las edades van aumentando un año con cada temporada, así que poco a poco se irán retirando tus jugadores, toma en cuenta esto para que no pierdas por falta de jugadores.

-El programa cuenta con un menu con las opciones iniciales, mediante el cual se puede:

-1: Mostrar los datos de la plantilla actualizados a contrataciones y despidos, asímismo te muestra el numero total de colaboradores actualizado

-2: Consultar el presupuesto actual actualizado a los sueldos de nuevas contrataciones o a los sueldos de los que se despidieron

-3: Contratar alguno de los colaboradores que se encuntra en la lista de traspasos, para agregarlos a tu plantilla

-4: Despedir alguno de los colaboradores actuales de la plantilla (no muestra mensaje de error en caso de no encontarlo, pero muestra un mensaje de exito en caso de que si)

-5: Mostrar los datos y estadisticas de un jugador en específico de la plantilla (no muestra mensaje de error en caso de no encontarlo, pero muestra un mensaje de exito en caso de que si)

-6: Subir un jugador de la cantera, seleccionando la posicion que el usuario desee y mostrar los datos y estadisticas de este nuevo jugador

-7: Con todos los cambios hechos en la plantilla, simula la temporada y muestra los resultados obtenidos y si la directiva desea seguir contando con sus servicios o no despues de evaluar sus resultados

-8: Salir del programa

Sugerencia: Corrobora el tamaño de la plantilla y el presupuesto antes de pasar a la siguiente temporada


## Consideraciones:
Todos los archivos deben estar en la misma carpeta, para que el prorgrama funcione correctamente

El programa solo corre en la consola o en replit también y esta hecho con c++ standard por lo que corre en todos los sistemas operativos, no incluye bibliotecas extra, mas que la de string, para poder usar este tipo de dato

compilar con: la ruta donde se encuentre la carpeta que tiene todos los archivos, y posteriormente "g++ main.cpp"

correr en linux: "/a.out"

correr en windows: "a.exe"

## Restricciones o casos en los que el programa deja de funcionar:
-Cuando se solicite la entrada de datos, por lo general se dan opciones de numeros para que el usuario escoja o en su defecto, se pide que se escriba un nombre o la palabra si o no. Para estos casos, favor de ser muy cuidadoso e ingresar el tipo de dato que se espera, de lo contrario, el programa deja de funcionar

-Para los nombres, escribirlos tal cual aparecen, sin espacios extra y cuidando las mayusculas y minusculas

-Las funciones 4 y 5 no muestran mensajes de error en caso de que se haya insertado mal el input, sin embargo, si muestran un mensaje de exito en caso de que se haya insertado bien. De todas maneras es recomendable chacr la plantilla despues de haber efectuado cualquier cambio.

## Correcciones:
-Identifico los casos que harían que el proyecto deje de funcionar (SICT031A):
Se encuentra en este mismo README, en la sección de Restricciones o casos en los que el progama deja de funcionar

-Genero un diagrama de clases UML correcto y y explico su relación con el problema de forma clara (SICT031A):
YA está corregido el archivo UML, se encuentra en los archivos de este repositorio, y esta completamente relacionado al código y las clases implementadas, se llama "UML Diego Quezada.pdf"

-Se implementa de manera correcta la sobrecarga y sobreescritura de métodos (SICT0303A):
Ya se había validado la sobreescritura, como por ejemplo con el método estadísticas(int nivel), presente en Colaborador.h (linea 41), sus clases hijas: Entrenador.h (declaracion en linea 30 y defincion en lineas de 40 a 65), y Jugador.h (linea 35) y las clases hijas de Jugador: Defensivo.h (declaracion en linea 33 y defincion en lineas de 40 a 65), y Atacante.h (declaracion en linea 31 y defincion en lineas de 39 a 52).
Para la sobrecarga, de igual maner hay varios ejemplos, pero la que más use fue la funcion double getPresupuesto() y double getPresupuesto(int resultados), en el archivo SistemaDatos.h (declaraciones en lineas 48 y 49 y definiciones en lineas de la 72 a la 98)

- Se implementa de manera correcta el concepto de Clases Abstractas (SICT0303A):
La clase Colaborador.h es una clase abstracta, que cuenta con 3 métodos abstractos que son virtual void estadisticas(int _nivel)=0,virtual void setNivel()=0, y void virtual mostrar_estadisticas()=0. Definidos en este archivo en las lineas de la 41 a la 43 y sobreescritos por sus clases hijas (Jugador.h y Entrenador.h) y nietas (Defensivo.h y Atcante.h)




# Proyecto TC1030
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

Recordemos que el objetivo de esta simulación es que el Cruz Azul se consagre como campeón del torneo nacional, así que temporada tras temporada la directiva evaluará los resultados que hayas conseguido, de manera que una temporada no puede ser peor que la pasada, es decir, se debe conseguir una posición en tabla igual o mayor a la que se consiguió en la temporada pasada. Por ejemplo, comenzarás por default en último lugar, así que jugarás la siguiente temporada sin problema, sin embargo, suponiendo que en esa segunda temporada quedas en el lugar 10, y en la siguiente (la tercera), quedas en 11. La directiva te comunicará que ya no desean que constinues como presidente del equipo.

Para la obtención de estas posiciones, se hace una comparación de los puntos de todos los equipos de la liga y para los puntos del equipo se toma en cuenta el promedio de nivel de los jugadores y cuerpo técnico y con base a eso se generan estadísticas que generan la tabla de posiciones, es justo en base a esta tabla de posiciones que se evalúa tu desempeño y también con el que se asigna el presupuesto para la siguiente temporada.

## Funcionalidad:
-El programa termina de maneras diferentes:
  
  -Cuando se lográ quedar en primer lugar de la tabla de posiciones (caso triunfar)
  
  -Cuando se tiene una temporada peor en comparación con la anterior (caso perder)
  
  -Cuando se sale de los límites de jugadores en la plantilla (caso perder)
  
  -Cuando ya no puedes pagar los sueldos de la plantilla (caso perder)
  
  -Cuando tienes menos de 1 porteros, 4 defensas, 4 medios , 3 delanteros o 1 entrenador.
  
  -Cuando se insertan datos diferentes a los que se solicitan

-Al principio se cuenta con jugadores que sobrepasan la edad de retiro, como lo es José de Jesús Corona, el portero, que tiene 41 años, así que muy probablemente en la primera temporada se vayan muchos jugadores y estés en riesgo de perder

-El programa cuenta con un menu con las opciones iniciales y corre sobre consola, y este menú se desplegará cada que termine una temporada, así como también se presentan todos los resultados cuando termina la temporada.


## Consideraciones:
-Cuando se soliciten datos, se especificará el tipo de dato que se desea que el usuario ingrese, favor de ingresar el tipo de dato esperado y sin espacios intermedios, a menos que se pida lo contrario

-Todas las cifras que se mencionen, serán en millones de pesos mexicanos




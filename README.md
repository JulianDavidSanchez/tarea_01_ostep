# Tarea 01 OSTEP

Programación en C con la modificación de mem.c, threads.c y io.c

Integrantes: Pablo Andrés Barona 1831316, Julián David Sánchez 1827112, Santiago Ramírez Ruiz 1831310

## mem.c
Archivo: [mem.c](mem.c)

mem.c se ejecuta en el mismo espacio de memoria cada vez lo haga. Para llevar a cabo ello, como  superusuario configuramos:
 
```
echo 0 > /proc/sys/kernel/randomize_va_space
```
## threads.c
Archivo: [threads.c](threads.c)

threads.c utiliza puertas para realizar su funcion. Usando las librerías: [mycommon.h](mycommon.h), [common_threads.h](common_threads.h), [common.h](common.h)

Los hilos al utilizar el método worker cierran la puerta, suman a counter y vuelven a abrir la puerta. Obteniendo un proceso exitoso al alterar la variable global.

```
cerrar_puerta(puerta);
counter ++;
abrir_puerta(puerta);
```

## io.c
Archivo: [io.c](io.c)

io.c requiere un argumento como fichero para leer. Lee el texto contenido en el fichero de posición en posición, asimismo va guardando los datos en una matriz, y lo imprime en pantalla.
Luego, imprime en pantalla las posiciones de la matriz desde la última posición hasta llegar a la primera, dando el efecto de texto al revés.

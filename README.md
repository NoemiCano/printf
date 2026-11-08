*Este proyecto ha sido creado como parte del currículo de 42 por ncano-co.*

## Descripción

El proyecto **ft_printf** es uno de los tres retos que componen el primer Milestone del cursus de 42.

El objetivo principal es recrear nuestra propia versión de la función `printf()` de la librería estándar de C (`libc`). 

A través de este proyecto profundizamos en el uso de funciones con número variable de argumentos en C, utilizando la librería `<stdarg.h>`, la gestión de formatos de salida y la estructuración limpia de código modular mediante bibliotecas estáticas (`libftprintf.a`).

El programa es capaz de evaluar una cadena de formato (`char const *`) y procesar diversos tipos de datos e impresiones según el especificador indicado tras el símbolo `%`.

## Instrucciones y Ejecución

### Prerrequisitos
Necesitarás un entorno tipo Unix (Linux o macOS) con herramientas básicas de compilación instaladas (`cc`, `make`, `ar`).

### Compilación
El proyecto incluye un `Makefile` con las reglas estándar. Para compilar la librería estática obligatoria (`libftprintf.a`), ejecuta en la raíz del repositorio:

```bash
make
````
### El Makefile incluye las siguientes reglas
- `all`: Compila la librería con todas las funciones.
- `clean`: Borra todos los archivos objeto (.o).
- `fclean`: Borra los archivos objeto y el archivo compilado libftprintf.a.
- `re`: Ejecuta una limpieza total (fclean) y vuelve a compilar desde cero (all).

## Recursos
### Referencias y documentación
- Documentación oficial y manuales de C (`man printf`, `man va_start`).
- Guías sobre el manejo de funciones con número variable de argumentos (*variadic functions*).
- Herramientas de testeo automático de la comunidad de 42, como *Francinette* (de *fsoares*), para la validación de casos límite.
- Documentación oficial de 42: Subject interno del proyecto y manual de estilo de la Norminette.

### Uso de Inteligencia Artificial
Durante el desarrollo de este proyecto, se ha utilizado Inteligencia Artificial como herramienta de apoyo y consulta en las siguientes tareas:
* **Depuración de casos límite (*edge cases*):** Análisis de fallos detectados por las pruebas automatizadas.
* **Consultas conceptuales:** Comprensión del funcionamiento interno de `va_start` y `va_arg`.

## Conversiones Soportadas

Esta implementación cubre los siguientes especificadores obligatorios exigidos por el subject comportandose igual que la función `printf`:
* `%c`: Imprime un único carácter.
* `%s`: Imprime una cadena de caracteres (string).
* `%p`: Imprime la dirección de memoria de un puntero en formato hexadecimal (prefijo `0x`).
* `%d`: Imprime un número decimal con signo (base 10).
* `%i`: Imprime un número entero en base 10.
* `%u`: Imprime un número decimal sin signo (base 10).
* `%x`: Imprime un número en hexadecimal (base 16) en minúsculas.
* `%X`: Imprime un número en hexadecimal (base 16) en mayúsculas.
* `%%`: Imprime el símbolo de porcentaje (`%`).

## Elección de Algoritmo y Estructura de Datos

### 1. Estructuras de Datos Utilizadas
- **Punteros a cadenas (`char const *`):** Se recorre el string de formato de forma secuencial, siendo la forma más eficiente y nativa en C.
- **`va_list` (<stdarg.h>):** Estructura estándar provista por el compilador para acceder de forma segura a los argumentos variables en la pila.
- **Sin búferes propios:** Tal y como exige el subject, se evita el uso de búfers o reservas de memoria dinámicas.

### 2. Algoritmos Implementados
- **Bucle de análisis lineal:** Un bucle principal recorre la cadena de formato buscando el carácter `%` para derivar la ejecución a otra función mediante condiciones.
- **Conversión numérica recursiva:** Para las bases (`%d`, `%i`, `%u`, `%x` y `%X`), se utiliza recursividad por división sucesiva. Esto permite imprimir los dígitos en el orden correcto utilizando la pila de ejecución (*call stack*) sin necesidad de usar `malloc` ni arrays auxiliares de tamaño fijo.
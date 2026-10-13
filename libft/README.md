*Este proyecto ha sido creado como parte del currículo de 42 por ncano-co.*

# Descripción
El proyecto **Libft** es el primer reto del Cursus de **42**. 

Su objetivo principal es comprender como actúan estas funciones, implementarlas por mi cuenta y aprender a utilizarlas de forma eficaz.

He replicado funciones de la librería estándar de C (`libc`), manteniendo los prototipos y comportamientos de las funciones originales, siguiendo fielmente las definiciones indicadas en la página del `man` de cada función. La única diferencia es el prefijo `ft_`.

Además, he implementado otras funciones adicionales de utilidad general, que no son de la librería `libc`. Y, también he incluido funciones para manejar memoria y cadenas manejando listas enlazadas.

Este proyecto permite comprender los fundamentos de la programación en bajo nivel en lenguaje C, la gestión de memoria dinámica, el manejo de punteros y la estructuración de librerías estáticas mediante archivos cabecera (`.h`) y el comando `ar`. Todo el código cumple estrictamente con las reglas de la **Norminette** de 42 y está libre de *memory leaks*.

# Instrucciones

## Requisitos previos

Para poder compilar y probar este proyecto necesitas un entorno de desarrollo Unix/Linux o macOS con las siguientes herramientas instaladas:
* **Compilador de C:** `gcc`
* **Herramienta de automatización:** `make`
* **Archivador de librerías:** `ar`
---
## Compilación de la librería

Clona primero el repositorio:
```bash
git clone https://github.com/NoemiCano/Libft.git
cd Libft
```
Para compilar utiliza el comando:
```bash
make
```
## El Makefile incluye las siguientes reglas
* **`all`**: Compila la librería con todas las funciones.
* **`clean`**: Borra todos los archivos objeto (`.o`).
* **`fclean`**: Borra los archivos objeto y el archivo compilado `libft.a`.
* **`re`**: Ejecuta una limpieza total (`fclean`) y vuelve a compilar desde cero (`all`).

# Recursos

## Referencias y documentación
* **Manuales del sistema (`man`):** Consulta indispensable desde la terminal para conocer los prototipos, comportamientos y valores de retorno de las funciones originales de la `libc`.
* **https://ibm.com:** Referencia en línea muy útil para comprender la sintaxis, tipos de datos y valor devuelto.
* **Documentación oficial de 42:** Subject interno del proyecto y manual de estilo de la **Norminette**.

## Uso de Inteligencia Artificial
La Inteligencia Artificial se ha utilizado de forma complementaria en este proyecto.
* **Resolución de dudas** Consultas puntuales sobre la teoría de punteros a funciones y algunas consultas cuando el man era poco descriptivo con las ejecuciones internas de las funciones.

# Funciones implementadas
La librería se divide en tres bloques principales de funciones:

### 1. Funciones de la `libc`
* **Manipulación de memoria:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
* **Manipulación de cadenas:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
* **Comprobación y conversión de caracteres:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`

### 2. Funciones adicionales (no estándar de la `libc`)
* `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Listas Enlazadas
* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

# Autor

* Noemí Cano Conesa
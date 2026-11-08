#include <stdio.h>
#include <limits.h>
#include "libftprintf.h"

int main(void)
{
    char *null_str = NULL;
    int n = 42;
    int ret_ft;
    int ret_og;

    printf("==================================================\n");
    printf("               PRUEBAS CON RETORNOS               \n");
    printf("==================================================\n\n");

    // --- 1. CARACTERES (%c) ---
    printf("----------- PRUEBA 1: Caracteres '%%c' -----------\n");
    ret_ft = ft_printf("Mio:  [%c] [%c] [%c]\n", 'A', 'z', '\n');
    ret_og =    printf("Ori:  [%c] [%c] [%c]\n", 'A', 'z', '\n');
    printf("-> Retornos | Mio: %d | Ori: %d\n\n", ret_ft, ret_og);

    // --- 2. CADENAS (%s) ---
    printf("----------- PRUEBA 2: Cadenas '%%s' -----------\n");
    ret_ft = ft_printf("Mio:  [%s] [%s] [NULL: %s]\n", "Hola 42", "", null_str);
    ret_og =    printf("Ori:  [%s] [%s] [NULL: %s]\n", "Hola 42", "", null_str);
    printf("-> Retornos | Mio: %d | Ori: %d\n\n", ret_ft, ret_og);

    // --- 3. PUNTEROS (%p) ---
    printf("----------- PRUEBA 3: Punteros '%%p' -----------\n");
    ret_ft = ft_printf("Mio:  [%p] [NULL: %p]\n", &n, null_str);
    ret_og =    printf("Ori:  [%p] [NULL: %p]\n", &n, null_str);
    printf("-> Retornos | Mio: %d | Ori: %d\n\n", ret_ft, ret_og);

    // --- 4. ENTEROS (%d y %i) ---
    printf("----------- PRUEBA 4: Enteros '%%d' y '%%i' -----------\n");
    ret_ft = ft_printf("Mio:  [%d] [%i] [MAX: %d] [MIN: %i]\n", 42, -42, INT_MAX, INT_MIN);
    ret_og =    printf("Ori:  [%d] [%i] [MAX: %d] [MIN: %i]\n", 42, -42, INT_MAX, INT_MIN);
    printf("-> Retornos | Mio: %d | Ori: %d\n\n", ret_ft, ret_og);

    // --- 5. ENTEROS SIN SIGNO (%u) ---
    printf("----------- PRUEBA 5: Unsigned '%%u' -----------\n");
    ret_ft = ft_printf("Mio:  [%u] [MAX: %u] [Zero: %u]\n", 42, UINT_MAX, 0);
    ret_og =    printf("Ori:  [%u] [MAX: %u] [Zero: %u]\n", 42, UINT_MAX, 0);
    printf("-> Retornos | Mio: %d | Ori: %d\n\n", ret_ft, ret_og);

    // --- 6. HEXADECIMALES (%x y %X) ---
    printf("----------- PRUEBA 6: Hexadecimales '%%x' y '%%X' -----------\n");
    ret_ft = ft_printf("Mio:  [min: %x] [may: %X] [zero: %x] [negativo: %x]\n", 255, 255, 0, -42);
    ret_og =    printf("Ori:  [min: %x] [may: %X] [zero: %x] [negativo: %x]\n", 255, 255, 0, -42);
    printf("-> Retornos | Mio: %d | Ori: %d\n\n", ret_ft, ret_og);

    // --- 7. PORCENTAJE (%%) ---
    printf("----------- PRUEBA 7: Porcentaje '%%%%' -----------\n");
    ret_ft = ft_printf("Mio:  [%%%%] [100%%]\n");
    ret_og =    printf("Ori:  [%%%%] [100%%]\n");
    printf("-> Retornos | Mio: %d | Ori: %d\n\n", ret_ft, ret_og);

    // --- 8. CASOS EXTREMOS Y COMBINADOS (¡NUEVO!) ---
    printf("----------- PRUEBA 8: Casos Mixtos y Vacíos -----------\n");
    ret_ft = ft_printf("Mio:  Mix: %c %s %d %p %x %%\n", 'X', "42", -21, &n, 500);
    ret_og =    printf("Ori:  Mix: %c %s %d %p %x %%\n", 'X', "42", -21, &n, 500);
    printf("-> Retornos | Mio: %d | Ori: %d\n\n", ret_ft, ret_og); // Mio: 38 | Ori: 41

    printf("==================================================\n");
    printf("                 FIN DE PRUEBAS                   \n");
    printf("==================================================\n");

    return (0);
}
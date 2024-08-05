## Teorema Fundamental de la Aritmética

### Algoritmo de Eratóstenes

El algoritmo de Eratóstenes nos permite calcular los números primos hasta un cierto límite \( n \). El procedimiento es el siguiente:

1. Se crea una lista de números desde 2 hasta \( n \).
2. Seleccionamos el primer número primo y eliminamos sus múltiplos.
3. Repetimos el proceso con el siguiente número primo no eliminado.
4. Continuamos hasta que \( x^2 > n \), siendo \( x \) el número de veces que iteramos el código.

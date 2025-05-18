<details>
<summary><h2>A - A + B</h2></summary>

Dado dos enteros \(A\) y \(B\), imprime la suma de ambos.

**Entrada:**

- Dos enteros \(A\) y \(B\) separados por un espacio.
- Restricciones: \(0 <= A, B <= 10^9\).

**Salida:**

- Un solo entero que representa la suma de \(A + B\).

**Ejemplos:**

```plaintext
Entrada:
1234 5678

Salida:
6912
```

```plaintext
Entrada:
1000000000 1000000000

Salida:
2000000000
```

</details>
<details>
<summary><h2>B - Weird Algorithm</h2></summary>

Dado un entero positivo \(n\), el algoritmo sigue las siguientes reglas:

- Si \(n\) es par, se divide entre 2.
- Si \(n\) es impar, se multiplica por 3 y se suma 1.

El proceso se repite hasta que \(n\) sea igual a 1.  
Tu tarea es simular y mostrar la secuencia completa.

**Entrada:**

- Un único entero \(n\).
- Restricciones: \(1 \leq n \leq 10^{6}\).

**Salida:**

- Una línea que contiene todos los valores de \(n\) durante la ejecución del algoritmo, separados por espacios.

  **Ejemplos:**

```plaintext
Entrada:
3

Salida:
3 10 5 16 8 4 2 1
```

```
Entrada:
6

Salida:
6 3 10 5 16 8 4 2 1s
```

</details>
<details>
<summary><h2>C - Missing Number</h2></summary>

You are given all numbers between \(1, 2, ..., n\) except one. Your task is to find the missing number.

**Input:**

- The first input line contains an integer \(n\).
- The second line contains \(n-1\) numbers. Each number is distinct and between \(1\) and \(n\) (inclusive).

**Constraints**: \(2 <= n <= 2*10^5\).

**Output:**

- Print the missing number.

**Examples:**

```plaintext
Input:
5
2 3 1 5

Output:
4
```

</details>

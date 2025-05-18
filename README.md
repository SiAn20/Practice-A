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

**Constraints**: \(2 <= n <= 2\*10^5\).

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
<details>
<summary><h2>D - Hamming Distance</h2></summary>

You are given a positive integer N and two strings S and T, each of length N and consisting of lowercase English letters.

Find the Hamming distance between S and T. That is, find the number of integers i such that the 1<=i<=N and the i-th character of S is different from the i-th character of T.

**Constraints**

- 1 <= N <= 100
- N is an integer
- Each of S and T is a of legth N consisting of lowercase English letters.

**Input:**  
The input is given from Standard Input in the following format:

- N
- S
- T

**Output:**

- Print the Hamming distance.

**Examples:**

```plaintext 1
Input:
6
abcarc
agcahc

Output:
2
```

```plaintext 2
Input:
7
atcoder
contest

Output:
7
```

```plaintext 3
Input:
8
chokudai
chokudai

Output:
0
```

```plaintext 4
Input:
10
vexknuampx
vzxikuamlx

Output:
4
```

</details>

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

<details>
<summary><h2>E - Watermelon</h2></summary>

One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that, the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Pete and Billy are great fans of even numbers that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

**Input:**

- The first (and the only) input line contains integer w (1<=w<=100), the weight of the watermelon bought by the boys.

**Output:**

Print `YES`, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and `NO` in the opposite case.

**Examples:**

```plaintext
Input:
8

Output:
YES
```

**Note**
For example, the boys can divide the watermelon into two parts of 2 and 6 kilos respectively (another variant — two parts of 4 and 4 kilos).

</details>

<details>
<summary><h2>F - Chat room</h2></summary>
Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. Vasya typed the word s. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so that it resulted in the word "hello". For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello, and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello. Determine whether Vasya managed to say hello by the given word s.

**Input:**

- The first and only line contains the word s, which Vasya typed. This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.

**Output:**

- If Vasya managed to say hello, print "YES", otherwise print "NO".

**Examples:**

```plaintext
Input:
ahhellllloou

Output:
YES
```

```plaintext
Input:
hlelo

Output:
NO
```

</details>

<details>
<summary><h2>G - Pro Bending</h2></summary>
Avatar Korma is competing in Republic City's latest pro bending tournament, but isn't sure if she can manage to come out on top. Thankfully, due to her intel, she has accurate ELO level that indicate how strong her team and all other teams competing in the pro bending tournament are. Each team, including Korma's, has a distinct ELO level and a team with a higher ELO level will always defeat a team with a lower ELO level.

The tournament will proceed in a single-elimination format, which will continue until all teams except one are eliminated.

Korma wants to know if she can expect to win the tournament or not, so you need to write a computer program to calculate this for her. Korma will always be able to determine if she will win or lose the tournament given this accurate intel. Print out `Easy Win!` if Avatar Korma will win the tournament and print out out `Difficult Loss` otherwise.

**Input:**

- The first line will consist of a two integers n (1≤n≤10^3) and k (1≤k≤10^5), which give the number of competing teams (not including Korma's) and Avatar Korma's ELO level, respectively. The next line consists of n integers where the ith integer ei gives the ELO level of the ELO level of the ith team (1≤ei≤10^5).

**Output:**

- Print `Easy Win!` if Avatar Korma will win the tournament and `Difficult Loss` otherwise.

**Examples:**

```plaintext
Input:
3 4
1 2 3

Output:
Easy Win!
```

```plaintext
Input:
5 5
1 4 3 8 2

Output:
Difficult Loss
```

</details>
<details>
<summary><h2>H - Team Training</h2></summary>
At the IT Campus "NEIMARK", there are training sessions in competitive programming — both individual and team-based!

For the next team training session, n students will attend, and the skill of the i-th student is given by a positive integer ai.

The coach considers a team strong if its strength is at least x. The strength of a team is calculated as the number of team members multiplied by the minimum skill among the team members.

For example, if a team consists of 4 members with skills 5,3,6,8, then the team's strength is 4 \* min([5,3,6,8])=12.

Output the maximum possible number of strong teams, given that each team must have at least one participant and every participant must belong to exactly one team.

**Input:**

Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤10^4). The description of the test cases follows.

The first line of each test case contains two integers n and x (1≤n≤2\*10^9) — the number of students in training and the minimum strength of a team to be considered strong.

The second line of each test case contains n integers ai (1≤a≤10^9) — the skill of each student.

It is guaranteed that the sum of n over all test cases does not exceed 2 \* 10^5

**Output:**

For each test case, output the maximum possible number of teams with strength at least x.

**Examples:**

```plaintext
Input:
5
6 4
4 5 3 3 2 6
4 10
4 2 1 3
5 3
5 3 2 3 2
3 6
9 1 7
6 10
6 1 3 6 3 2

Output:
4
0
4
2
1
```

</details>

<details>
<summary><h2></h2></summary>

**Input:**

**Output:**

**Examples:**

```plaintext
Input:

Output:

```

**Note**

</details>

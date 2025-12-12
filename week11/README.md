## Задачи
### Задача 1
- `int setElem(LTYPE list[SIZE][SIZE], size_t x, size_t y, LTYPE value)` - променя стойноста на елемент на матрицата спорде индекс
- `LTYPE getElem(LTYPE list[SIZE][SIZE], size_t x, size_t y)` - взима стойноста на някой елемент от матрицата и го връща
### Задача 2
- `void prityPrint(LTYPE list[SIZE][SIZE])` - изпринтирайте хубаво една матрица
### Задача 3
- `void dotProduct(LTYPE A[SIZE][SIZE], LTYPE B[SIZE][SIZE], LTYPE C[SIZE][SIZE])` - Трябва да сметнете $C=A\cdot B$
### Задача 4
- `void transpose(LTYPE A[SIZE][SIZE], LTYPE T[SIZE][SIZE]) ` - транспонирайте матрицата A в T
### Задача 5
- `void fibonachi(unsigned int fibs[2][2], int n)` - функция, която намира n-тото число на фибоначи с матрици и тяхното умножение
Бонус: Помислите как може да се оптимизира функцията
### Задача 6
Напишете функцията
- `int uniqueId()` - която при всяко не колосално на брой извикване връща уникално число, което не е връщано преди
### Задача 7.
- Имплеметрирайте алгоритъм binarySearch върху едномерен масив (Ако не сте го направили миналия път)
- Помислете ако една матрица е монотонно растяща или още казано за матрица с размер n на m,
  - $(\forall x \in \set{0..n-2})(\forall y \in \set{0..m-2})(arr[x][y] \leq arr[x+1][y] \land arr[x][y] \leq arr[x][y+1])$
  - $(\forall y \in \set{0..m-2})(arr[n-1][y] \leq arr[n-1][y+1])$
  - $(\forall x \in \set{0..n-2})(arr[x][m-1] \leq arr[x+1][m-1])$

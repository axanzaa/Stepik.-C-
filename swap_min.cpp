/**Реализуйте функцию swap_min, которая принимает на вход двумерный массив целых 
 * чисел, ищет в этом массиве строку, содержащую наименьшее среди всех элементов 
 * массива значение, и меняет эту строку местами с первой строкой массива.
 * Подумайте, как обменять строки массива, не обменивая элементы строк по-отдельности.**/

void swap_min(int *m[], unsigned rows, unsigned cols) {
   if(rows) {
        int min = **m, min_i = 0;
        for(int i = 0; i < rows*cols; ++i)
            if(min>m[i / cols][i%cols]) {
                min = m[i / cols][i%cols];
                min_i = i / cols;
            }
     
        int * t = *m;
        *m = m[min_i];
        m[min_i] = t;
 
    }}
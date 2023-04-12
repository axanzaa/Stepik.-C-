/**Функция транспонирования матрицы**/

int** transpose(const int* const* m, unsigned rows, unsigned cols)
{
    int** new_m = new int* [cols];
    for (int i = 0; i != cols; ++i)
        new_m[i] = new int[rows];
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            new_m[i][j] = m[j][i];
        }
    }
    return new_m;
}
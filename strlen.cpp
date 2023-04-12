/**Очень часто для работы со строками нам нужно сначала вычислить длину строки. 
 * Для C-style строк длина нигде явно не хранится, но её можно вычислить. 
 * Напишите функцию, которая вычисляет длину C-style строки. Учтите, что завершающий 
 * нулевой символ считать не нужно.
 * Требования к реализации: при выполнении этого задания вы можете создавать 
 * любые вспомогательные функции. Вводить или выводить что-либо не нужно. 
 * Реализовывать функцию main не нужно.**/

#include <iostream>
#include <string>

unsigned strlenn(const char *str)
{
    unsigned cnt = 0;
    while(*(str + cnt) != 0) ++cnt;
 
    return cnt;
}

int main() {
    char song[] = "We Will Rock You!";
    std::cout << strlenn(song);
}
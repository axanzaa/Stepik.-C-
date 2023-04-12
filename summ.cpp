/**На вход программе подаются целые числа в следующем формате: 
 * на первой строке идет целое число T — количество тестов, далее следует T строк, 
 * в каждой из которых через пробел идут два целых числа ai и bi. На выводе для каждой из 
 * T строк нужно вывести сумму ai+bi в том порядке, в котором пары поступают на вход. 
 * Ничего, кроме этого, выводить не нужно.
 * Sample Input:
 * 10
 * -735 608
 * -958 -783
 * -928 169
 * 212 264
 * 601 -80
 * -567 1
 * 982 -552
 * 793 951
 * 59 688
 * 531 73
 * Sample Output:
 * -127
 * -1741
 * -759
 * 476
 * 521
 * -566
 * 430
 * 1744
 * 747
 * 604*/

#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    int* a = new int [T];
    int* b = new int [T];
 
    for (int i = 0; i < T; i++) {
        cin >> a[i] >> b[i];
    }
    
    for (int i = 0; i < T; i++) {
        cout << a[i] + b[i] << endl;
    }}
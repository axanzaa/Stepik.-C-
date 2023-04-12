/**Напишите рекурсивную функцию вычисления наибольшего общего делителя двух 
 * положительных целых чисел
 * (Greatest Common Divisor, GCD). Для этого воспользуйтесь следующими свойствами:
 * 
 * GCD(a,b)=GCD(b,a mod b)
 * GCD(0,a)=a
 * GCD(a,b)=GCD(b,a)**/

#include <iostream>

unsigned gcd (unsigned a, unsigned b) { 
return !b ? a : gcd (b, a % b); 
}

int main() {
    int x, y; std::cin >> x >> y;
    std::cout << gcd(x, y);
} 
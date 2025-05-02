/*Напишите программу, которая читает четыре целых числа из входного потока, записанных в одну строчку через пробел. Объявите функцию с сигнатурой:

int sum_big2(int a, int b, int c, int d);

Эта функция должна складывать два наибольших числа из четырех переданных и возвращать значение суммы. Вызовите функцию sum_big2 в 
функции main для прочитанных чисел из входного потока. Выведите в консоль полученное значение суммы в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.5.7

Sample Input:

8 11 -6 3

Sample Output:

19

*/
#include <stdio.h>
int max(int a,int b){
    if(a>b)return a;
    return b;
}
int sum_big2(int a, int b, int c, int d){
    int m1 = max(a,b)+max(c,d);
    int m2 = max(a,c)+max(b,d);
    int m3 = max(b,c)+max(a,d);
    return max(m1,max(m2,m3));
    
}
int main(void)
{ int a,b,c,d;
 scanf("%d %d %d %d",&a,&b,&c,&d);
    // здесь продолжайте функцию main
printf("%d",sum_big2(a,b,c,d));
    return 0;
}

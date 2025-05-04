/*Продолжите программу. Необходимо объявить рекурсивную функцию со следующей сигнатурой:

size_t range_to_ar(int* ptr_a, size_t max_len, int from, int to, size_t count);
Эта функция должна последовательно заносить в переданный массив (через указатель ptr_a) целые числа в диапазоне [from; to] (включая границы)
с шагом 1, не превышая длину массива max_len. Функция range_to_ar возвращает число count - записанных в массив значений (не более max_len).

В функции main выведите в консоль в одну строчку через пробел первые cnt значений массива ar.

P. S. В теле функции range_to_ar не использовать какие-либо операторы циклов.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.7.3

Sample Input:

8
Sample Output:

1 2 3 4 5 6 7 8*/
#include <stdio.h>
#define MAX_LENGTH    20
size_t range_to_ar(int* ptr_a, size_t max_len, int from, int to, size_t count)
{ 
  if(max_len>=count)range_to_ar(ptr_a+1, max_len, from+1,  to, count+1);
  *ptr_a= from;
  
    return max_len;
}
int main(void)
{
    int max_rec;
    int ar[MAX_LENGTH];
    scanf("%d", &max_rec);

    size_t cnt = range_to_ar(ar, max_rec, 1,21, 0);
    if(cnt>MAX_LENGTH)cnt = MAX_LENGTH;
    for(int i = 0;i<cnt;i++){
        if(i<cnt-1)
        printf("%d ",ar[i]);
        else
        printf("%d",ar[i]);
    }
    // здесь продолжайте программу
 
    return 0;
}

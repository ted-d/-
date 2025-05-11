/*Напишите программу, в которой объявляется перечисление без идентификатора и константами:

_do=1, _re=2, _mi=3, _fa=4, _sol=5, _la=6, _si=7

Определите тип этого перечисления как NOTES. Объявите функцию с именем get_major, которая имеет один параметр с типом NOTES.
Функция должна возвращать 1, если были переданы значения констант: _do, или _mi, или _sol. В противном случае функция get_major возвращает 0.

В функции main прочитайте из входного потока пять целых чисел в диапазоне [1; 7], записанных в одну строчку через пробел.
Выведите в консоль (в одну строчку через пробел) только те числа, для которых функция get_major вернула истинное значение (единицу).

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/7.5.8

Sample Input:

1 2 3 2 5

Sample Output:

1 3 5

*/

#include <stdio.h>
typedef enum {_do=1, _re=2, _mi=3, _fa=4, _sol=5, _la=6, _si=7} NOTES;
int get_major(NOTES type){
    switch(type){
        case _do:
            return 1;
        case _re:
            return 0;
        case _mi:
            return 1;
        case _fa:
            return 0;
        case _sol:
            return 1;
        case _la:
            return 0;
        case _si:
            return 0;
        
    }
}
int main(){
    int x;
    while(scanf("%d",&x)!=-1)if(get_major(x))printf("%d ", x);
    return 0;
}

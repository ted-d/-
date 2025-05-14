/* Объявите в программе структуру с полями x, y типа int и определите для нее тип POINT. Объявите функцию с именем get_means и двумя параметрами (порядок важен):

    одномерным массивом структур POINT;
    длиной (числом элементов) этого массива (тип size_t).

Функция get_means должна вычислять два средних арифметических числа: отдельно для первой координаты x и отдельно для второй координаты y. 
Вычисленные вещественные значения сохранить в структуре типа DATA (объявить до функции), которая содержит два поля: mean_x и mean_y типа double.
Функция get_means должна возвращать сформированную структуру DATA.

В функции main объявите массив points структур POINT длиной 20 элементов. Прочитайте из входного потока целые числа x0, y0, x1, y1, ..., 
записанные в одну строчку через пробел. Максимальное число пар чисел не превышает 20, но может быть и меньше.
Вызовите функцию get_means для вычисления средних только для актуальных элементов массива points (тех, в которых хранятся данные из входного потока, а не все 20).
Возвращенные значения вывести в консоль в одну строчку через пробел с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/7.7.8

Sample Input:

5 7 21 14 11 54 -25 -11 -10 15

Sample Output:

0.40 15.80


*/
#include <stdio.h>
#include <stdlib.h>
typedef struct st {
    int x,y;
} POINT;
typedef struct s{
    double  mean_x, mean_y;
}DATA;
DATA get_means(const POINT *ar,size_t n){
    double sx=0,sy=0;
    DATA s;
    for(int i = 0 ; i <n;i++){
        sx+=ar[i].x;
        sy+=ar[i].y;
    }
    s.mean_x=sx/n;
    s.mean_y=sy/n;
    return s;
}
int main(void)
{ int count=0;
    POINT points[20];
while((scanf("%d ",&points[count].x)+scanf("%d ",&points[count].y))==2){
    count++;
}printf("%.2lf %.2lf",get_means(points,count));
    return 0;
}

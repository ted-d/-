/* Объявите в программе структуру с идентификатором tag_point_3d и полями x, y, z типа int (координаты точки в трехмерном пространстве).
В функции main объявите массив points структуры tag_point_3d размером total_points. Константа total_points должна быть объявлена через перечисление и равна 100.
Из входного потока (в функции main) читайте целые числа (записанные в одну строчку через пробел) и последовательно записывайте в массив points.
То есть, первый элемент массива points будет содержать первые три числа из входного потока, второй элемент points - следующие три числа, и так далее.
Если на каком-либо этапе читается меньше трех чисел, то считывание завершается и неполные данные (менее трех чисел) в очередной элемент массива points не заносятся.
В переменной total должно содержаться общее число корректно сформированных элементов массива points. Выведите в консоль в одну строчку через пробел значения координат x, y, z
последнего элемента массива points, в который производилась запись.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/7.6.8

Sample Input:

1 2 3 3 4 5 7 8 9

Sample Output:

7 8 9



*/
#include <stdio.h>
struct tag_point_3d{
    int x;
    int y;
    int z;
};
// здесь объявляйте структуру
enum {total_points=100} TOTAL;
int main(void)
{struct tag_point_3d points[total_points];
 int count=0;
 int st=0;
 while(st=(scanf("%d ",&points[count].x)+scanf("%d ",&points[count].y)+scanf("%d ",&points[count].z))){
     if(st==3)count++;
     else {count--;break;}
     //scanf возвращает 1 если с потока пришло число и -1 если нет и я такую логику сделал чтобы узнать сколько пришло если 3 числа ок увеличиваем счетчик
   //если нет сдвигаю назад и прерываю цикл т.к. по заданию я должен вывести 3 числа которые последние занесены в поток в рамках! структуры 
 }
    // здесь продолжайте программу
 
 

printf("%d %d %d",points[count].x,points[count].y,points[count].z);
    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

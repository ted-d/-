/*Продолжите программу. Необходимо объявить функцию со следующей сигнатурой:

void* expand_array(short* ptr, size_t* len, short fill);

Здесь *len - длина массива (число его элементов). Данная функция должна удваивать размер области памяти, выделенной под указатель ptr,
в новую область копировать прежние данные, а остальные заполнять значениями fill. Прежняя область должна освобождаться (если была выделена новая).
Значение размера *len нужно также увеличить в два раза. В конце функция expand_array должна вернуть адрес удвоенной области памяти.

В функции main вызовите функцию expand_array для удвоения памяти, на которую ведет указатель ptr_d, и значением fill = -1. В результате указатель ptr_d
должен ссылаться на удвоенную область памяти. Затем, через указатель ptr_d выведите в консоль в одну строчку через пробел все целые числа типа short, хранящиеся в удвоенной области памяти.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/7.4.8

Sample Input:

6 3 -2 4 10 100 35 3545

Sample Output:

6 3 -2 4 10 100 35 3545 0 0 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 

*/
#include <stdio.h>
#include <stdlib.h>

#define TOTAL   10

// здесь объявляйте функцию
void* expand_array(short* ptr, size_t* len, short fill)
{short *ar = realloc(ptr,sizeof(short)*2 * *len);
 size_t t=*len;
 *len = *len*2;
 while(t<=*len){
     ar[t]=fill;
     t++;
 }
return ar;
}
int main(void)
{
   short * ptr_d = calloc(TOTAL,  sizeof(short));
   size_t len = TOTAL;
   if(ptr_d == NULL)
        return 0;

    int count = 0;
    while(count < TOTAL && scanf("%hd", &ptr_d[count]) == 1)
        count++;
    ptr_d=expand_array(ptr_d,&len,-1);
    // здесь продолжайте функцию main
    for(int i = 0 ; i< len;i++){
        printf("%d ",ptr_d[i]);
    }
    free(ptr_d);
    //exit(0);
    return 0;
}

/*Подвиг 4. Продолжите программу. Необходимо после каждого элемента со значением 5 массива digs вставлять новые элементы со значениями: -1 - после первой найденной пятерки;
-2 - после второй пятерки и т.д. Обратите внимание, что при вставке новых значений, последние элементы массива digs могут теряться.
Также следует учитывать, что элемент со значением 5 может отсутствовать в массиве digs (тогда ничего вставлять не нужно).
Выведите в консоль по порядку значения всех прочитанных + добавленных элементов массива digs в одну строчку через пробел.
test #1
input: 1 2 5 3 5 4 5 6
output: 1 2 5 -1 3 5 -2 4 5 -3

test #2
input: -4 3 5 5 6 0
output: -4 3 5 -1 5 -2 6 0

test #3
input: 1 2 3
output: 1 2 3

test #4
input: 5
output: 5 -1

test #5
input: 5 5 5
output: 5 -1 5 -2 5 -3
*/


#include <stdio.h>

#define TOTAL     10

int main(void)
{
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);
    int five_idx=0;
    int last_f=0;
    while(count < sz_ar && scanf("%d", &digs[count]) == 1){if(digs[count]==5)five_idx++;  
        count++;      
    }
    last_f=five_idx;
    five_idx=-five_idx;
    for(int i=count;i>=0;i--){
         if(digs[i]==5){
           for( int j=count+last_f;j>i;j--)
           {
             digs[j]=digs[j-1];  
           }digs[i+1]=five_idx;
             five_idx++;
         }         
     }

    if(count+last_f<10)
    {  
        for(int i =0 ;i<count+last_f;i++)printf("%d ",digs[i]);
   }
    else  for(int i =0 ;i<TOTAL;i++)printf("%d ",digs[i]);
    return 0;
}

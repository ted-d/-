/*Продолжите программу. Объявите функцию с именем is_win, которой передается двумерный массив типа char размером SIZE x SIZE элементов.
Функция is_win должна проверять и возвращать статус переданного игрового поля игры "Крестики-нолики" в виде целого числа:

0 - игра не окончена;
1 - выиграли "крестики";
2 - выиграли "нолики";
3 - ничья.

Каждый элемент переданного двумерного массива хранит либо символ 'x', либо символ 'o', либо целое число 0, если клетка свободна.

В функции main вызовите функцию is_win для массива pole. Выведите в консоль вычисленный статус игрового поля в виде целого числа.
test #1
input: 
1 0 0
0 1 2
2 0 1

output: 1

test #2
input: 
2 0 0
2 1 1
2 0 0

output: 2

test #3
input: 
0 2 0
1 0 1
0 2 0

output: 0

test #4
input: 
1 2 1
2 2 1
2 1 2

output: 3
*/
#include <stdio.h>

#define SIZE    3
int is_win(char (*ar)[SIZE])
{
  int cx=0;//количество крестиков в столбце
 int cz=0;//количесьво пустых полей
 int cy=0;//количество ноликов в столбце
 int ry=0;//тоже самое в ряду
 int rx=0;
 int dx=0;//количество по главной диагонали
 int dy=0;
 int adx=0;//количество по побочной диагонали
 int ady=0;
    for (int i=0 ;i <SIZE;i++){if(ry==3||cy==3)return 2;
                               if(rx==3||cx==3)return 1;
        ry=0;
        rx=0;
        cx=0;
        cy=0;//сбрасываем счетчики
        for(int j = 0;j<SIZE;j++){
            if(ar[i][j]==0)cz++;
            else if(ar[i][j]=='x'){rx++;}
            else {ry++;}
          
            if(ar[j][i]=='x'){cx++;}//для столбца обращаемся по такому индексу 
            else if(ar[j][i]=='o'){cy++;}
            if(i==j){
                if(ar[i][j]=='x'){dx++;}
                if(ar[i][j]=='o'){dy++;}
            }
            if(j==SIZE-1-i){
                if(ar[i][j]=='x'){adx++;}
                if(ar[i][j]=='o'){ady++;}  
            }
            
    }
    }
    
    if(dx==3||adx==3)return 1;
    if(dy==3||ady==3)return 2;
    if(cz>0)return 0;
    return 3;
}
int main(void)
{
    char pole[SIZE][SIZE] = {0};
    char* ptr_p = &pole[0][0];
    int count = 0;
    while(count < SIZE * SIZE && scanf("%d", ptr_p) == 1) {
        *ptr_p = (*ptr_p == 1) ? 'x' : (*ptr_p == 2) ? 'o': *ptr_p;
        ptr_p++;
        count++;
    }
printf("%d",is_win(pole));
    // здесь продолжайте программу

    return 0;
}

/*Допишите программу без использования глобальных переменных, в которой объявляется функция со следующей сигнатурой:

int range(int start, int stop, int step);

При первом запуске она должна настраивать счетчик на формирование последовательности целых чисел от start до stop (включительно) с шагом step.
Также первый запуск возвращает первое значение последовательности. При повторных вызовах функции range параметры start, stop, step не должны играть никакого значения. 
Сама же функция range при каждом новом вызове должна возвращать очередные числа последовательности. Например, при start=5, stop 11, step=2, имеем:

5, 7, 9, 11, 5, 7, 9, 11, 5, 7, 9, 11, 5, 7, 9, 11, 5, 7, 9, 11, ...

То есть, при достижении граничного значения stop, происходит возврат на начальное значение start.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/7.3.5

Sample Input:

-2 100 7

Sample Output:

-2 5 12 19 26 33 40 47 54 61 68 75 82 89 96 -2 5 12 19 26



*/
#include <stdio.h>

int range ( int start,int stop,int step){
    static int n=0;
    if(n==0){n+=start; return n;}
    if(n>stop-step){n=0;
        n+=start; return n;
    }
    
    return n+=step;
}
int main(void)
{
    int start, stop, step;
    
    scanf("%d %d %d", &start, &stop, &step);
   
    
    for(int i = 0;i < 20; ++i){
        printf("%d ", range(start, stop, step));}

    return 0;
}

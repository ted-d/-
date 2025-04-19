/*Продолжите программу, которая в массив строк ps (двумерный массив 7 x 50) читает из входного потока фамилии семи сотрудников,
записанных в одну строчку через пробел. Считать, что максимальная длина фамилии не превышает 50 символов. Сформировать еще одну строку ps_sort,
в которую через пробел скопировать фамилии сотрудников по возрастанию их длин.
В конце последней фамилии пробела быть не должно, сразу стоять символ '\0'. Вывести строку ps_sort в консоль.
test #1
input: Ivanov Petrov Sidorov Balakirev Starostin Nikitin Sergeev
output: Ivanov Petrov

test #2
input: Bah Sidorov Balakirev Starostin Nikitin Sergeev Dan
output: 

test #3
input: Bah Mozart Bethoven Sviridov Rachmaninov Chaikovskiy Stravinskiy
output: Mozart Bethoven Sviridov
*/
#include <stdio.h>
#include <string.h>
#define N 7
int main(void)
{
    // здесь продолжайте программу
    char ps[7][50];
    int min=0;
    int ar[7]={0,1,2,3,4,5,6};
    char ps_sort[357]={'\0'};
    for(int i =0;i<N;i++){
        scanf("%49s",ps[i]);
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (strlen(ps[ar[j]]) > strlen(ps[ar[j + 1]])) {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    for(int i =0;i<N;i++){
        int ind = ar[i];
        strncat(ps_sort,ps[ind],strlen(ps[ind]));
        if(i<N-1)strcat(ps_sort," ");
    }ps_sort[356]='\0';
    puts(ps_sort);
    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

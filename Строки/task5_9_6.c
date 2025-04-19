/*Продолжите программу, которая в массив строк ps (размерностью 7 x 50) читает из входного потока фамилии семи сотрудников,
записанных в одну строчку через пробел. Считать, что максимальная длина фамилии не превышает 50 символов.
Сформировать еще одну строку ps_res, в которую через пробел скопировать фамилии сотрудников (в порядке их считывания), которые имеют четную длину.
В конце последней фамилии пробела быть не должно, сразу стоять символ '\0'. Если фамилий счетными длинами нет, то формируется пустая строка. Вывести строку ps_res в консоль
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

int main(void)
{
    // здесь продолжайте программу
char ps[7][50];
    char ps_res[357]={'\0'};
    for(int i = 0;i<7;i++){
        scanf("%49s",ps[i]);
        //printf("%d\n",strlen(ps[i]));
        if(strlen(ps[i])%2==0){strncat(ps_res,ps[i],strlen(ps[i]));
        if(i<6)strcat(ps_res," ");}
        
    }ps_res[strlen(ps_res)-1]='\0';
    puts(ps_res);
    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

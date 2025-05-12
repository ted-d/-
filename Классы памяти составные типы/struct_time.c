/*В функции main объявите две переменные tm1 и tm2 структуры tag_time. Значения их полей (шесть целых неотрицательных чисел,
записанных в одну строчку через пробел) прочитайте из входного потока. Объявите еще одну переменную tm_sum структуры tag_time, 
поля которой должны содержать сумму времен переменных tm1 и tm2. Время нужно складывать так, чтобы минуты и секунды не выходили из пределов [0; 59]. Выведите в консоль полученное время tm_sum в формате:

hh:mm:ss

Например:

12:08:43

(Обратите внимание на наличие незначащего нуля перед числами меньше 10).

Sample Input:

12 45 16 4 23 48

Sample Output:

17:09:04

*/
#include <stdio.h>

struct tag_time {
    unsigned char hours;
    unsigned char minutes;
    unsigned char seconds;
};

int main(void)
{
    // здесь продолжайте программу
 struct tag_time tm1;
 struct tag_time tm2;
 scanf("%d %d %d %d %d %d",&tm1.hours,&tm1.minutes,&tm1.seconds,&tm2.hours,&tm2.minutes,&tm2.seconds);
 struct tag_time tm_sum;
 tm_sum.hours = (tm1.hours+tm2.hours+(tm1.minutes+tm2.minutes)/60)%24;
 tm_sum.minutes = (tm1.minutes+tm2.minutes+(tm1.seconds+tm2.seconds)/60)%60;
 tm_sum.seconds =  (tm1.seconds+tm2.seconds)%60  ;
const char format[] = "%.2d:%.2d:%.2d";
char info[100]={'\0'};        
 sprintf(info, format, tm_sum.hours, tm_sum.minutes, tm_sum.seconds);
 puts(info);
    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*Продолжите программу. Объявите структуру с идентификатором tag_rub и полями:

double ratio_usd;  // курс доллара к рублю (1$ = xx рублей)
int rubs; // количество рублей

В функции main объявите указатель account_r структуры tag_rub и выделите память под структуру tag_rub
(указатель account_r должен ссылаться на выделенную область памяти). Затем, через указатель account_r
значение ratio_usd установите равным 91.32, а значение rubs прочитайте из входного потока.

Вычислите количество долларов на счете в соответствии с курсом ratio_usd. Выведите в консоль полученное значение в виде вещественного числа с точностью до сотых.

P. S. Не забудьте в конце (после __ASSERT_TESTS__) освободить память.
Тесты: https://github.com/selfedu-rus/c-tests/tree/main/7.7.3

Sample Input:

1343045

Sample Output:

14707.02


*/
#include <stdio.h>
#include <stdlib.h>

// здесь объявляйте структуру
struct tag_rub{
   double ratio_usd;  // курс доллара к рублю (1$ = xx рублей)
    int rubs; // количество рублей 
};
int main(void)
{
    // здесь продолжайте функцию main
    struct tag_rub *account_r=malloc(sizeof(struct tag_rub));
    account_r->ratio_usd = 91.32;
    scanf("%d",&account_r->rubs);
    printf("%.2lf",account_r->rubs/account_r->ratio_usd);
    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать)
        free(account_r);
    return 0;
}

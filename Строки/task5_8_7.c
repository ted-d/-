/*Продолжите программу, которая читает из входного потока строку целиком с помощью функции fgets().
На выходе формируется корректная Си строка. Вычислите количество слов в строке (слова разделяются
одним или несколькими пробелами) и выведите в консоль полученное целое число.

P. S. Пробелы могут быть в начале и в конце строки.

Тесты: 
test #1
input: "  I love  C "
output: 3

test #2
input: "a b c e f"
output: 5

test #3
input: " d e f g "
output: 4

test #4
input: "   I   "
output: 1

test #5
input: "The best Test on Stepik"
output: 5

test #6
input: "The  "
output: 1

test #7
input: "    C"
output: 1
*/
#include <stdio.h>

void strip_string(char* str, int max_len)
{
    int count = 0;
    while(*str++ != '\0' && count++ < max_len);

    if(count > 1) {
        str -= 2;
        if(*str == '\n')
            *str = '\0';
    }
}

int main(void)
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));
    int w=0;
    for(int i=0;str[i]!='\0';i++){
        if (str[i]!=' '&&str[i+1]==' ')w++;
        if(str[i]!=' '&&str[i+1]=='\0' )w++;
    }printf("%d",w);
    // здесь продолжайте программу

    return 0;
}

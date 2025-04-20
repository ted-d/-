/*Продолжите программу. Определите в строке str количество фрагментов 'is' и выведите в консоль полученное целое число.
test #1
input: My sister is a nervous girl, but she is very kind.
output: 3

test #2
input: She has grown old, but she is still very strong.
output: 1

test #3
input: I live in a house near the mountains.
output: 0
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';
    int c=0;
    char *ptr=strstr(str,"is");
    while(ptr!=NULL){
        c++;
    ptr=ptr+2;//так как в слове is две буквы то указатель смещаем на два символа 
    strcpy(str,ptr);//копируем содержимое ptr в str у нас получает динамическое изменение строк, ваще пушка строка каждый раз укорачивается на 2 символа . горжусь своим решением 
    ptr=strstr(str,"is");                 
    }
    
  
    printf("%d",c);
    // здесь продолжайте программу

    return 0;
}

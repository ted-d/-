/*
Продолжите программу. Необходимо дописать функцию copy_string, которая копирует строку из src в dst с учетом ее максимального размера. Последним параметром функции copy_string должен быть указатель на функцию с сигнатурой:

int <имя функции>(const char);

Эта дополнительная функция должна возвращать 1, если символ char следует копировать в строку dst, и 0 в противном случае. Объявите в любом допустимом месте программы такую функцию, которая запрещает копирование всех латинских символов:

a-z и A-Z.

В функции copy_string реализовать копирование строки из src в dst с проверкой допустимости копирования символов. Если символ копировать запрещено, то он пропускается. Строка dst должна быть корректной Си-строкой (в конце всегда должен быть символ '\0').

Вызовите функцию copy_string для копирования строки str в строку str2 с запретом копирования любых символов латинского алфавита. Выведите полученную строку str2 в консоль.


Sample Input:

HelloСергею Балакиреву и всем остальным ученикам!

Sample Output:

Сергею Бал


*/
#include <stdio.h>
#include <string.h>

void copy_string(char* dst, size_t max_len_dst, const char* src, int (*noch_i_bal)(const char))
{
    for(int i=0,j=0;i<max_len_dst-1&&src[j]!='\0';j++){
        if(noch_i_bal(src[j])){dst[i]=src[j];i++;}
    }
}
int noch_i_bal(const char h)
{ if(strchr("QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm",h)==NULL)return 1;
   return  0;
}
int main(void)
{
    char str[100] = {0}, str2[20];
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';
    copy_string(str2,20,str,noch_i_bal);
    puts(str2);
    // здесь продолжайте программу
 //exit(0);
    return 0;
}

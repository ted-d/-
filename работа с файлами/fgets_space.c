/*Продолжите программу. Необходимо прочитать из потока fp с помощью функции fgets или fputs (подумайте какой
) строку в массив buff. Подсчитайте количество слов в строке (слова разделяются одним или несколькими пробелами).
Выведите в консоль количество слов в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/8.3.5

Sample Input:

Moscow   Ufa Samara  Ulianovsk

Sample Output:

4

*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[512];

    FILE* fp = stdin; // имитация отрытого файлового входного потока
   
    int n = 0;
    while(fgets(buff,sizeof(buff),fp)){
        
    }
    
    char *ptr = strchr(buff, '\n');
    if(ptr != NULL)
        *ptr = '\0';
    ptr=strchr(buff,' ');
 if(ptr-buff==0){
   while(ptr!=NULL){ptr++;if(*ptr!=' ')break;}
 n=-1;}
 while(ptr!=NULL){n++;
        while(ptr!=NULL){ptr++;if(*ptr!=' ')break;}
        ptr=strchr(ptr,' ');
        
    }
    ptr=strrchr(buff,' ');
    if(ptr!=NULL && *(ptr+1)=='\0')printf("%d",n);
    else printf("%d",n+1);
    // fclose(fp); закрывать стандартный поток не нужно

    return 0;
}

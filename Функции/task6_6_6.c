/*Продолжите программу. Объявите функцию с именем strip_str, которая имеет следующие параметры (порядок важен):

    указатель на обрабатываемую корректную Си-строку;
    указатель на строку с удаляемыми символами.

Функция strip_str должна из переданной ей строки удалить все символы, указанные в последнем параметре (строке с удаляемыми символами). Например, если указана строка "!? &@",
то все эти символы, где бы они в строке ни находились и в каком бы порядке ни шли, следует удалить.

В функции main вызовите функцию strip_str для строки str и укажите удалить из нее символы ".,-!?". Выведите полученную строку в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.6.6

Sample Input:

Hello, World!

Sample Output:

Hello World

*/
include <stdio.h>
#include <string.h>
void strip_str(char *str,char *del){
    
    char *ptr_n=NULL;
    char *ptr_cur=NULL;
    char *ptr_2=str+strlen(str);
    while(*del!='\0'){
      while(strchr(str,*del)!=NULL){
      ptr_n=strchr(str,*del);
      ptr_cur=ptr_n+1;
      while(*ptr_n!='\0' && ptr_cur!=ptr_2+1){
        *ptr_n=*ptr_cur;
        ptr_cur++;
        ptr_n++;
      }if(ptr_cur=='\0'){
        ptr_2--;
        ptr_cur=NULL;
        ptr_n=NULL;
      }
        
    }del++;}
}
int main(void)
{
    char str[100] = {0}, str2[20];
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    // здесь продолжайте функцию main
     strip_str(str,".,-!?");
    puts(str);
    //exit(0);
    return 0;
}

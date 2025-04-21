/* Продолжите программу. Замените в строке str все дефисы (-) фрагментом "-+-". Выведите полученную строку в консоль.
В тестах гарантируется, что результирующая строка умещается в массив str.
test #1
input: https://proproprogs.ru/c_base/cpp-znacheniya-parametrov-funkcii-po-umolchaniyu
output: https://proproprogs.ru/c_base/cpp-+-znacheniya-+-parametrov-+-funkcii-+-po-+-umolchaniyu

test #2
input: cpp-operator-using
output: cpp-+-operator-+-using

test #3
input: -inicializaciya-peremennyh-klyuchevye-slova-auto-i-
output: -+-inicializaciya-+-peremennyh-+-klyuchevye-+-slova-+-auto-+-i-+-
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
    
    ptr_n=str;
	    char *ptr = strrchr(str, '\0');
    char *ptr2 = strrchr(str, '\0');
    while(ptr_n!=NULL&&ptr!=str-1){
        if(*ptr=='-'){
          ptr_n=ptr;
          ptr2 = strrchr(str, '\0');
            ptr=strrchr(str, '\0')+2;
            while(ptr2!=ptr_n){
             *ptr=*ptr2;
                ptr--;
                ptr2--;
            }
            
            *ptr_n='-';
            ptr_n++;
            *ptr_n='+';
            ptr_n++;
            *ptr_n='-';
            ptr_n++;
            ptr=ptr_n-3;
        }
     ptr--;
        
        
    }puts(str);
    // здесь продолжайте программу

    return 0;
}

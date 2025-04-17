/*Продолжите программу, которая читает из входного потока строку целиком с помощью функции fgets().
На выходе формируется корректная Си строка. Удалите из прочитанной строки все латинские символы 'e' и выведите в консоль полученную строку.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.8.6

Sample Input:

c_lokalnye-i-globalnye-peremennye

Sample Output:

c_lokalny-i-globalny-prmnny

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
 int ind=-1;
    int count = sizeof(str)/sizeof(char);
    int e_el=0;
    for(int i =0;i<count;i++){
        if(str[i]=='e'){
            
           
            
            e_el++;
        }    
    }ind=-1;
    int e=e_el;
    while(e_el>0){
        for(int i= 0;i<count;i++){
            if(str[i]=='e'&&ind==-1)
            {str[i]=str[i+1];e_el--;ind=i;break;}
        }
        if(ind !=-1){
        for(int i = ind;i<count;i++){
           str[i]=str[i+1]; 
        }ind =-1;
                   }
    }

   printf("%s",str);

    return 0;
}

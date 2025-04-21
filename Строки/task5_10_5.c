/*Продолжите программу. В строке str необходимо заменить все подряд идущие дефисы (например: --, ---, ---- и т.д.) на один дефис (-). Выведите в консоль полученную строку.
cpp--znacheniya----parametrov-funkcii-po----umolchaniyu
cpp-znacheniya-parametrov-funkcii-po-umolchaniyu
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
        char *ptr = str;
    char *ptr2 = str;
    char *ptr_end = strrchr(str, '\0');
    while(ptr_n!=NULL&&ptr<ptr_end){
        if(strstr(str,"--")){
          ptr_n=strstr(str,"--");
          ptr=ptr_n;
          ptr2=ptr+1;
           
            do{
               
                 *ptr=*ptr2;
                 
                ptr2++;
                ptr++;
            }while(*ptr2!='\0');
            *ptr=*ptr2;
            ptr=ptr_n;
            ptr2=ptr;
            
           
           
            
        }
     ptr++;
        
        
    }puts(str);
    // здесь продолжайте программу

    return 0;
}

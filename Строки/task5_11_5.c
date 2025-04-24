/*
Продолжите программу. В массиве строк str хранится информация о count товарах, каждый представлен в формате:

<наименование товара>: <идентификатор>; <цена>; <вес>

Здесь идентификатор - целое число; цена - вещественное число; вес - вещественное число. 

Необходимо удалить из массива str все товары с ценой равной 12300. Выведите в консоль в одну строчку через пробел оставшиеся наименования товаров в массиве str в порядке их следования.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.11.5

Sample Input:

часы: 10; 5430; 0.3
компьютер: 13; 132045; 1.23
монитор: 1; 12300; 0.74
колонки: 2; 3245; 0.3
стол: 105; 3400; 5.7

Sample Output:

часы компьютер колонки стол


*/
#include <stdio.h>
#include <string.h>

#define TOTAL   10

int main(void)
{
    char str[TOTAL][50];
    char str_2[50]={'\0'};
    int count = 0;
    while(count < TOTAL && fgets(str[count], sizeof(str)-1, stdin)) {
        char* ptr_n = strrchr(str[count], '\n');
        if(ptr_n != NULL)
            *ptr_n = '\0';
        count++;
    }
    
    char *ptr_1=NULL;
    char *ptr_2= NULL;int i = 0;
for(;i<TOTAL;i++){
    ptr_1 = strstr(str[i],"12300");
    
    if(ptr_1!=NULL){
      while(i+1!=TOTAL-1){
      
      strncpy(str[i],str[i+1],strlen(str[i]));
    i++;
   
}strncpy(str[i],str_2,strlen(str[i]));}}
    for(int i = 0;i<TOTAL;i++){ptr_1=strchr(str[i],':');
                               ptr_2=str[i];
    while(ptr_1!=NULL && ptr_2<ptr_1){
        printf("%c",*ptr_2);
        ptr_2++;
    }printf(" ");
}
    // здесь продолжайте программу

    return 0;
}

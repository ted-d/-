/*Объявите структуру с полями:

    fname: строка максимальной длиной 100 символов (фамилия);
    old: целое число (тип char); возраст;
    stag: целое число (тип char); стаж;
    salary; целое число (тип int); зарплата;
    efs; вещественное число (тип double); эффективность труда сотрудника

Определите для этой структуры тип PERSON. 

Объявите функцию с именем fill_data, которая ничего не возвращает и первые два параметра (порядок важен) - это указатель на структуру PERSON и форматная строка. Следующие параметры вариадические (то есть, функция принимает произвольное число параметров). Форматная строка определяет данные, которые записываются в указанную структуру PERSON, а также набор и порядок следования вариадических данных. Форматная строка может включать следующие символы:

#f - строка с фамилией;
#o - возраст;
#g - стаж;
#s - зарплата;
#e - эффективность сотрудника.

Например:

"#f #e#s, #o"

соответствует вариадическим параметрам с типами данных:

char*, double, int, char

То есть, в форматной строке достаточно выделять спецификаторы #<символ> и их порядок, остальные символы форматной строки значения не имеют.

В функции main вызовите функцию fill_data с передачей в нее всех необходимых аргументов (значения придумайте сами) и следующей форматной строкой:

"#o #e #s #f"

P. S. В консоль ничего выводить не нужно.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
typedef struct s {
  
   char fname[100];
   char old;
   char stag;
   int salary; 
   double efs;
  
}PERSON;
void fill_data(PERSON *per, char *format,...){
    va_list arg;
    int total = 0;
    for(int i = 0 ; i <strlen(format);i++){
       if(format[i]=='#')total+=1; 
    }
    va_start(arg,total);
    char *ptr = strchr(format,'#');
    ptr++;
    while(total>0){
       if(*ptr=='f')strcpy(per->fname,va_arg(arg,char*));
       if(*ptr=='o')per->old=va_arg(arg,int); 
       if(*ptr=='g')per->stag=va_arg(arg,int);
       if(*ptr=='s')per->salary=va_arg(arg,int);
       if(*ptr=='e')per->efs=va_arg(arg,double); 
        total--;
        ptr=strchr(ptr,'#');
        ptr++;
    }va_end(arg);
}
int main(void)
{ PERSON s;
    fill_data(&s,"#o #e #s #f",19,97.5,100000,"Chak");

    return 0;
}

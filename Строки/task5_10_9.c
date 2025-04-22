/*Продолжите программу. В переменной str содержится E-mail адрес. Необходимо проверить его корректность.
Для этого в str должен присутствовать один символ '@' (не первый),
а после него (не сразу) - символ '.' (не последний). Также в самом E-mail адресе допустимы только символы: a-z, A-Z, 0-9, '.', '_', '-'. 
Если строка str содержит корректный E-mail адрес, то в консоль вывести 1, иначе 0.
test #1
input: sc_lib@list.ru
output: 1

test #2
input: Sc-lib78@list.ru
output: 1

test #3
input: ABCDEFG0123456.789abcdferghlj-_@mail.ru
output: 1

test #4
input: @Sc-lib78@list.ru
output: 0

test #5
input: sc_lib78@list_ru
output: 0

test #6
input: sc_lib78@.list_ru
output: 0

test #7
input: sc_lib78.list@ru
output: 0

test #8
input: рус@ml.ru
output: 0

test #9
input: другой%?&спецсимвол@mask.com
output: 0

test #10
input: КОФЕЙНЯ_16@адрес.com
output: 0

test #11
input: @sc_liblistru.
output: 0

test #12
input: ABCDEFG0123456_@mail.ru.
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
    char *ptr1=strchr(str,'@');
    char *ptr2=strrchr(str,'.');
    if(ptr1==NULL||ptr2==NULL){printf("0");return 0;}
    if(*(ptr2+1)!='\0'&&*(ptr1+1)!='.'&& ptr2-ptr1>1&&str[0]!='@'){
        for(int i = 0;i<strlen(str);i++){
            if (strchr("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ,-.0123456789_@",str[i])==NULL) {printf("0");return 0;}
        }printf("1");
    }else printf("0");
    // здесь продолжайте программу

    return 0;
}

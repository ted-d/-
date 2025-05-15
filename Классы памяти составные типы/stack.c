/* Необходимо написать программу, которая в стеке хранит историю посещения пользователем веб-страниц (URL-адреса страниц).
Для этого необходимо повторить реализацию стека, приведенного в занятии (или написать свою собственную), со следующим функционалом:

1. Каждый объект стека представляется структурой с идентификатором tag_obj и содержит поля: указатель next на следующий объект;
строку url максимальной длиной 1024 символа (адрес посещенной страницы). Объявить еще одно имя типа OBJ для struct tag_obj.

2. На первый элемент стека должен вести указатель top типа OBJ. Если стек пуст, то top равен NULL.

3. Для добавления нового элемента в стек реализовать функцию push со следующей сигнатурой:

OBJ* push(OBJ* top, const char* url);

Функция возвращает указатель на новый созданный объект.

4. Для удаления объекта из стека реализовать функцию pop со следующей сигнатурой:

OBJ* pop(OBJ* top);

Функция pop должна освобождать память из под удаляемого объекта и возвращать адрес следующего объекта стека (идущего после удаляемого; для последнего объекта вернет NULL).

В функции main создайте стек, в который последовательно (в указанном порядке) поместите следующие URL-адреса:

https://proproprogs.ru/c_base/c_etapy-translyacii-programmy-v-mashinnyy-kod-standarty
https://proproprogs.ru/c_base/c_struktura-i-ponimanie-raboty-programmy-hello-world
https://proproprogs.ru/c_base/c_dvoichnaya-shestnadcaterichnaya-i-vosmerichnaya-sistemy-schisleniya
https://proproprogs.ru/c_base/c_lokalnye-i-globalnye-peremennye
https://proproprogs.ru/c_base/c_perechisleniya-enum-direktiva-typedef

P. S. В консоль ничего выводить не нужно. Не забудьте в конце программы освободить память (после макроопределения __ASSERT_TESTS__), занимаемую элементами стека.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct tag_obj {
    struct tag_obj *next;
    char url[1024];
}OBJ;
OBJ* push(OBJ* top, const char* url){
    OBJ *ptr = malloc(sizeof(OBJ));
    ptr->next = top;
    strcpy(ptr->url,url);
    return ptr;
}
OBJ* pop(OBJ* top){
    if(top==NULL)return top;
    OBJ* ptr_n = top->next;
    free(top);
    return ptr_n;
}
int main(void)
{
    // здесь продолжайте функцию main
   OBJ* top = NULL;
   push(top,"https://proproprogs.ru/c_base/c_etapy-translyacii-programmy-v-mashinnyy-kod-standarty");
   push(top,"https://proproprogs.ru/c_base/c_struktura-i-ponimanie-raboty-programmy-hello-world");
   push(top,"https://proproprogs.ru/c_base/c_dvoichnaya-shestnadcaterichnaya-i-vosmerichnaya-sistemy-schisleniya");
   push(top,"https://proproprogs.ru/c_base/c_lokalnye-i-globalnye-peremennye");
   push(top,"https://proproprogs.ru/c_base/c_perechisleniya-enum-direktiva-typedef"); 
    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать)
   while (top){
      top= pop(top); 
   }
    // здесь освобождайте память, занимаемую стеком

    return 0;
}

/*Напишите программу, которая в функции main читает из входного потока слова (разделены пробелом). Максимальное количество слов не более 20, а максимальная длина каждого слова не более 50 символов.

Объявите функцию со следующей сигнатурой:

int is_correct(const char* str);

Функция is_correct должна проверять, что в строке содержится фрагмент "ra" без учета регистра. Если это так, то она возвращает 1, иначе 0. 
Определите на эту функцию указатель нового типа FUNC_CORRECT (тип данных).

Объявите еще одну функцию с сигнатурой:

int get_correct_words(const char (*words)[50], int count_words, FUNC_CORRECT filter);

Функция get_correct_words должна подсчитывать количество корректных слов (для которых is_correct возвращает 1) в массиве words и возвращать вычисленное значение.

В функции  main (для прочитанных из входного потока слов) вызовите функцию get_correct_words с фильтром is_correct и выведите в консоль число корректных слов.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/7.5.9

Sample Input:

Radio Dennis Ritchie Ken Thompson Raichle Sergey

Sample Output:

2


*/
#include <stdio.h>
#include <string.h>

typedef int (*FUNC_CORRECT)(const char*);
int is_correct(const char* str){
    if(strstr(str,"ra")!=NULL||strstr(str,"Ra")!=NULL||strstr(str,"RA")) return 1;
    return 0;
}
int get_correct_words(const char (*words)[50], int count_words, FUNC_CORRECT filter)
{int c = 0 ; 
 for (int i = 0 ;i<count_words;i++){
   if(filter(words[i]))c++;  
 }return c;
}
int main(){
    char words[20][50];
    int count =0;
    while(count<20&&scanf("%49s ",words[count])!=-1)count++;
    
    printf("%d",get_correct_words(words,count,is_correct));
    
    return 0;
}

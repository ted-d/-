/*
 Напишите программу, которая читает закодированную строку с помощью азбуки Морзе. Коды разделены между собой пробелом. Необходимо ее раскодировать, используя азбуку Морзе из предыдущего занятия:

A	.-	J	.---	S	...	2	..---
B	-...	K	-.-	T	-	3	...--
C	-.-.	L	.-..	U	..-	4	....-
D	-..	M	--	V	...-	5	.....
E	.	N	-.	W	.--	6	-....
F	..-.	O	---	X	-..-	7	--...
G	--.	P	.--.	Y	-.--	8	---..
H	....	Q	--.-	Z	--..	9	----.
I	..	R	.-.	1	.----	0	-----
Пробел    -...-

Полученное сообщение (строку) вывести в консоль.

P. S. Декодирование лучше реализовать в виде отдельной функции, которой передается формируемая строка, исходная строка и массив азбуки Морзе.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.7.7

Sample Input:

-- --- ... -.-. --- .-- 
Sample Output:

MOSCOW
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    
    if(ptr_n != NULL)
        *ptr_n = '\0';


    // здесь продолжайте функцию main
    char symbols[] = "AJS2BKT3CLU4DMV5ENW6FOX7GPY8HQZ9IR10 ";

    char *morse[] = {".-", ".---",	"...", "..---", "-...", "-.-", "-", 
                 "...--", "-.-.", ".-..", "..-", "....-", "-..", "--", 
                 "...-", ".....", ".", "-.", ".--", "-....", "..-.", 
                 "---", "-..-", "--...", "--.", ".--.", "-.--", 
                 "---..", "....", "--.-", "--..", "----.", "..", ".-.", 
                 ".----", "-----", "-...-","\0\0\0\0"};

    char *ptr =strchr(str,'\0')-1;
    if(*ptr!=' '){
        ptr++;
        *ptr=' ';
    }
    char *ptr2;
    ptr=str;
    char temp[10]={'\0'};
    char st[100] ={'\0'};
    char *pst=st;
    for (int i =0;i<strlen(str);i++){ptr2 = strchr(ptr,' ');
      int j=0;
      if(ptr2<=ptr){break;
          }                               
      while(ptr2>ptr){
        temp[j]=*ptr;
        j++;
        ptr++;
      }ptr++;
      while(j<6){
        temp[j]='\0';
        j++;
      }
        for(int k = 0;k<strlen(symbols);k++){
         if(strcmp(temp,morse[k])==0){*pst = symbols[k];pst++;break;}
        }
                                    }
  puts(st);
    
    return 0;
}

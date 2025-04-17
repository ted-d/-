/*Напишите программу, которая читает из входного потока в массив data названия шести городов,
записанных в одну строчку через пробел. Считать, что максимальная длина названия города
не превышает 20 символов. Вывести в консоль прочитанные города в обратном порядке в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.8.4

Sample Input:

Kazan Ufa Vladivostok Tver Moskva Samara

Sample Output:

Samara Moskva Tver Vladivostok Ufa Kazan

*/
#include <stdio.h>
int main()
{ char data[5][20];
 for(int i =0;i<6;i++)     
 {scanf("%19s",data[i]);
  int l = sizeof(data[i])/sizeof(char);
  data[i][l-1]='\0';
 }
  for(int i =5;i>=0;i--)     
 {printf("%s ",data[i]);
 }
   return 0; 
}

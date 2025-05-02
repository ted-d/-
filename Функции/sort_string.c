/*Продолжите программу. Необходимо дописать функцию sort_string, которая бы выполняла сортировку символов переданной строки str
(только символов строки, а не всех символов массива) по их возрастанию (неубыванию). Критерий возрастания (какой символ считать большим, а какой меньшим) задается дополнительной функцией с сигнатурой:

int match_ab(const char a, const char b);

Данная функция должна возвращать 1, если a < b, и 0 в противном случае. И, кроме того, все цифровые символы ('0', ..., '9')
должны быть "меньше" любых других символов. То есть, при сортировке сначала в строке будут идти цифровые символы (по возрастанию), а затем все остальные (по возрастанию).

Вызовите функцию sort_string для строки str и с функцией сравнения match_ab. Выведите полученную строку str в консоль.


Sample Input:

Phone number: 7845037856221

Sample Output:

0122345567788  :Pbeehmnnoru


*/
#include <stdio.h>
#include <string.h>




int match_ab(const char a, const char b)
    
{ if(a=='\0'||b=='\0'||strchr("0123456789",a)&&b==' ')return 0;
 if (a==' ' && strchr("0123456789",b)||a==' '&& b==' ')return 1;
 
   return a>b;
}
void sort_string(char *str, size_t max_len, int (*match_ab)(const char, const char))
{ max_len=strlen(str);
    for (int i =0;i<max_len;i++){
    for(int j=0;j<max_len-i-1;j++){
        if(match_ab(str[j],str[j+1])){
            char temp=str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
        }
    }
}
    // здесь продолжайте функцию
}

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    // здесь продолжайте программу
    sort_string(str, 100, match_ab);
   
    puts(str);
    
    return 0;
}

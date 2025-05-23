/*Продолжите программу. Необходимо из потока fp читать строки целиком (до символа переноса строки или символа EOF)
и сохранять их в массиве text. При чтении следует контролировать количество читаемых строк, чтобы оно не превосходило значения max_lines.
Гарантируется, что строки не длиннее значения max_string_len. В конце каждой строки не должно быть символа перевода строки.
Выведите в консоль все полученные в массиве text строки (каждая с новой строки).

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/8.4.3

Sample Input:

Язык Си. Рождение легенды
Структура и понимание работы программы "Hello, World!"
Арифметические операции деления по модулю, инкремента и декремента
Функция printf() для форматированного вывода
Булевый тип. Операции сравнения. Логические И, ИЛИ, НЕ

Sample Output:

Язык Си. Рождение легенды
Структура и понимание работы программы "Hello, World!"
Арифметические операции деления по модулю, инкремента и декремента
Функция printf() для форматированного вывода
Булевый тип. Операции сравнения. Логические И, ИЛИ, НЕ

*/
#include <stdio.h>
#include <string.h>

enum {max_lines=10, max_string_len=200};

int main(void)
{
    char text[max_lines][max_string_len];

    FILE* fp = stdin; // имитация отрытого файлового потока
    int count =0;
    while(!feof(fp)){
        fgets(text[count],sizeof(text[count]),fp);
        char *ptr = strrchr(text[count],'\n');
        if(ptr!=NULL)*ptr='\0';
        count++;
    if(count>=max_lines){break;}
    }
    for(int i = 0;i<count;i++){
        puts(text[i]);
    }
    // fclose(fp); закрывать стандартный поток не нужно

    return 0;
}

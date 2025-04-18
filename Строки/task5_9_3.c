/*Напишите программу, которая в массив строк cities читает из входного потока названия шести городов,
записанных в одну строчку через пробел. Максимальная длина названия города не превышает 50 символов.
Из всех названий выбрать два наибольших по длине и вывести в консоль в одну строчку через пробел.
test #1
input: Tver Moskwa Ulianovsk Barnaul Ufa Belgorod
output: Ulianovsk Belgorod

test #2
input: Voronezsh Piter Kazan Astachan Orenburg Orel
output: Voronezsh Astachan
*/
#include <stdio.h>
#include <string.h>
int main(){
    char cities[5][50];
    for(int i=0;i<6;i++)scanf("%49s",cities[i]);
    int max=0;
    int minmax=0;
    int ind_max=-1;
    int ind_min_max=-1;
    for(int i=0;i<6;i++){
       if(strlen(cities[i])>minmax){
        if(strlen(cities[i])>max){
            minmax=max;ind_min_max=ind_max;
            max = strlen(cities[i]);
            ind_max=i;
        }else{
        minmax=strlen(cities[i]);
            ind_min_max=i;
        }
           
       }
        
    }(ind_min_max<ind_max)?printf("%s %s",cities[ind_min_max],cities[ind_max]):printf("%s %s",cities[ind_max],cities[ind_min_max]);
 return 0;   
}

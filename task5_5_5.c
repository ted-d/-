/*Продолжите программу. Из массива pows необходимо удалить элемент с первым найденным четным значением.
Если такой элемент не был найден, то, соответственно, ничего удалять не нужно. Выведите в консоль по порядку
в одну строчку через пробел полученные значения оставшихся элементов массива pows.
test #1
input: 1 3 5 7 8 4 3 2 1
output: 1 3 5 7 4 3 2 1

test #2
input: 100 1 2 3 4 5 6
output: 1 2 3 4 5 6

test #3
input: 1 3 5
output: 1 3 5

test #4
input: 1
output: 1

test #5
input: 2 4
output: 4
*/
#include <stdio.h>

#define TOTAL     20

int main(void)
{
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);
    int check=-1;
    while(count < sz_ar && scanf("%hd", &pows[count]) == 1)
       
        count++;
    int ind=-1;    
    for(int i =0;i<count;i++){
        if(pows[i]%2==0&&check==-1){
            check=0;
            pows[i]=pows[i+1];
            ind = i;
        }
    }
    if(ind!=-1){
       for(int i =ind+1;i<count;i++){
           
         pows[i]=pows[i+1];  
       }
    count--;}
    // здесь продолжайте программу
   
    
    if(count<TOTAL){
     for(int i = 0;i<count;i++)printf("%hd ",pows[i]);   
    }else for(int i =0;i<TOTAL;i++)printf("%hd ",pows[i]);   
    return 0;
}

/*Продолжите программу. Из массива pows необходимо удалить все элементы кратные 3 (делятся нацело на 3).
Если таких элементов нет, то ничего удалять не нужно.
Выведите в консоль по порядку в одну строчку через пробел полученные значения оставшихся элементов массива pows.

test #1
input: 1 2 3 4 5 6 7 8 9 10
output: 1 2 4 5 7 8 10

test #2
input: 1 2 4 5 7
output: 1 2 4 5 7

test #3
input: 100 104 54 12 67 88
output: 100 104 67 88

test #4
input: 1 2 3 5 7 9
output: 1 2 5 7

test #5
input: 27 1 2 3 5 7 9
output: 1 2 5 7
*/
#include <stdio.h>

#define TOTAL     20

int main(void)
{
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);
    int check=-1;
    int three_el=0;
    while(count < sz_ar && scanf("%hd", &pows[count]) == 1)
        count++;

    // здесь продолжайте программу
  int ind=-1;    
    for(int i =0;i<count;i++){
        if(pows[i]%3==0){
            
           
            
            three_el++;
        }    
    }ind=-1;
    int thr=three_el;
    while(three_el>0){
        for(int i= 0;i<count;i++){
            if(pows[i]%3==0&&ind==-1)
            {pows[i]=pows[i+1];three_el--;ind=i;break;}
        }
        if(ind !=-1){
        for(int i = ind;i<count;i++){
           pows[i]=pows[i+1]; 
        }ind =-1;
                   }
    }

   
    
    if(count-thr<TOTAL){
     for(int i = 0;i<count-thr;i++)printf("%hd ",pows[i]);   
    }else for(int i =0;i<TOTAL;i++)printf("%hd ",pows[i]);   
    return 0;
}

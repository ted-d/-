/*
Продолжите программу, в которой объявляется строка с именем str
и максимальной длиной 100 символов (включая символ конца строки).
Инициализируйте str строковым литералом "Best string!".
Затем, удалите из строки все символы 's'.

P. S. В консоль ничего выводить не нужно.*/
#include <stdio.h>

int main(void)
{
    // здесь продолжайте программу
    char str[100]="Best string!";
    int s_el=0;
    int ind =-1;
    int count =13;
    for(int i=0;i<count;i++){
       if(str[i]=='s')s_el++; 
    }
    while(s_el>0){
         for(int i= 0;i<count;i++){
            if(str[i]=='s'&&ind==-1)
            {str[i]=str[i+1];s_el--;ind=i;break;}
        }
        if(ind !=-1){
        for(int i = ind;i<count;i++){
           str[i]=str[i+1]; 
        }ind =-1;
                   }
    } 
    

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

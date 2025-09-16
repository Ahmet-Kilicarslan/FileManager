#include <stdio.h>
#include<stdbool.h>

void increment(int *number);

int main(void) {
   /* int age = -990;
    printf("age is  %+10d \n", age);

    char name[] = "ahmet";
    printf("name is  %s", name);*/
int number =1;
int* pNumber = &number;

    increment(pNumber);
    printf("number is  %d", number);
    return 0;
}

void increment(int *number) {
    (*number)++;
}

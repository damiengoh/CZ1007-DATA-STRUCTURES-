#include <stdio.h>
#include <stdlib.h>

int square1(int num);
void square2(int num, int *result);

int main()
{
    int number, result=0;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("square1(): %d\n", square1(number));
    square2(number, &result);
    printf("square2(): %d\n", result);
    return 0;
}

int square1(int num){
    int odd = 1;
    int sum = 0;
    while(sum < num*num){
        sum += odd;
        odd += 2;
    }
    return sum;
}
void square2(int num, int *result){
    int odd = 1;
    int sum = 0;
    while(sum < num*num){
        sum += odd;
        odd += 2;
    }
    *result = sum;
}

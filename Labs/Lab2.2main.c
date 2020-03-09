#include <stdio.h>
#include <stdlib.h>

int digitPos1(int num, int digit);
void digitPos2(int num, int digit, int *result);

int main()
{
    int number, digit, result=0;
    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("Enter the digit: \n");
    scanf("%d", &digit);
    printf("digitPos1(): %d\n", digitPos1(number, digit));
    digitPos2(number, digit, &result);
    printf("digitPos2(): %d\n", result);
    return 0;
}

int digitPos1(int num, int digit){
    int count = 0;
    int rem;
    while(num>0){
        rem = num%10;
        count++;
        num /=10;
        if(digit == rem){
            return count;
        }
    }
    return 0;

}
void digitPos2(int num, int digit, int *result){
    int count = 0;
    int rem;
    while(num>0){
        rem = num%10;
        count++;
        num /=10;
        if(digit == rem){
            *result = count;
            break;
        }else
            *result = 0;
    }
}

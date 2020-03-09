#include<stdio.h>
int main()
{
    int mark, studentNumber;
    printf("Enter Student ID: \n");
    scanf("%d", &studentNumber);
    while (studentNumber != -1){
        printf("Enter Mark: \n");
        scanf("%d", &mark);
        switch((mark+5)/10){
            case 10:
            case 9:
            case 8:
                printf("Grade = A\n");
                break;
            case 7:
                printf("Grade = B\n");
                break;
            case 6:
                printf("Grade = C\n");
                break;
            case 5:
                printf("Grade = D\n");
                break;
            case 4:
            case 3:
            case 2:
            case 1:
                printf("Grade = F\n");
                break;
            default:
                printf("Invalid Grade\n");
            }
            printf("Enter Student ID: \n");
            scanf("%d", &studentNumber);
        }


    return 0;
}

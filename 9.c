#include <stdio.h>

int main()
{
    int nota;
    printf("Jepni noten ne forme numerike:");
    scanf("%d", &nota);
    
    printf("Nota me shkronje: ");
    switch(nota/10){
         case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("F\n");
            break;
    }

    return 0;
}


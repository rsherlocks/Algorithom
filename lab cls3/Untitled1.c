#include<stdio.h>
int main()
{
    int array[5], carry, i, j, min;
    printf("Enter a array:\n");
    for(i=0; i<5; i++){
        scanf(" %d", &array[i]);
    }

    printf("\nYour array is:");
    for(i=0; i<5; i++){
        printf(" %d", array[i]);
    }

    for(j=0; j<5; j++){
        min=j;
        for(i=j+1; i<=5; i++){
            if(array[i]<array[min])
                min=i;
        }
        carry = array[j];
        array[j]=array[min];
        array[min]=carry;
    }


    printf("\nSorted array is:");
    for(i=0; i<5; i++){
        printf(" %d", array[i]);
    }
}

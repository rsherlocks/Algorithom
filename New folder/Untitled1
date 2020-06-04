#include <stdio.h>

int main() {
	int a[100];
	int counter, num, numsearch;
	int boolnum = 0;

	printf("Enter the number of elements: ");
	scanf("%d",&num);

	printf("Enter the elements of the array: ");
	for(counter=0;counter <= num-1;counter++) {
		scanf("%d", &a[counter]);
	}

	printf("Enter the number to linear search for: ");
	scanf("%d",&numsearch);

	for(counter=0;counter <= num-1;counter++) {
		if(a[counter] == numsearch) {
                printf("Index= %d\n",counter);
			boolnum = 1;
			break;
		}
	}
	if(boolnum == 0)
		printf("The number is not in the list.\n");
	else
		printf("The number is found.\n");

	return 0;
}


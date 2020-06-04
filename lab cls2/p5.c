#include <stdio.h>

int main() {
	int a[100];
	int c, num, numsearch;
	int boolnum = 0;

	printf("Enter the number of elements: ");
	scanf("%d",&num);

	printf("Enter the elements of the array: ");
	for(c=0;c <= num-1;c++) {
		scanf("%d", &a[c]);
	}

	printf("Enter the number to linear search for: ");
	scanf("%d",&numsearch);

	for(c=0;c <= num-1;c++) {
		if(a[c] == numsearch) {
                printf("Index= %d\n",c);
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


#include <stdio.h>
int binary_search (int arr[], int first, int last, int search)
{
    int middle;
    while (first<=last)
    {
        middle = (first+last)/2;
	if (arr[middle] == search)
	    return middle;
	else if (arr[middle] < search)
	    first = middle+1;
	else
	    last = middle-1;
    }
    if (first>last)
	return -1;
}
int main()
{
    int n, search,result,i;
    char x,z='y';
    while (z=='y' || z=='Y')
    {
	printf("Enter the size of the array : ");
	scanf("%d",&n);
        int arr[n];
        printf("Enter the array elements\n");
        for (i=0; i<n; i++)
	    scanf("%d",&arr[i]);
        printf("Array elements are : \n");
        for (i=0; i<n; i++)
            printf("%d\t",arr[i]);
        x='y';
        while (x=='Y' || x=='y')
        {
            printf("\nEnter the element to search : ");
	        scanf("%d",&search);
            result = binary_search (arr, 0, n-1, search);
            if (result==-1)
	        printf("\nElement not found");
            else
	        printf("\nElement found at index %d",result+1);
            printf("\nDo you want to search again Y/N : ");
            scanf(" %c",&x);
        }
        printf("\nDo you want to start again with a new array Y/N : ");
        scanf(" %c",&z);
    }
}

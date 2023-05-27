// C program to Implement a List using Array and develop functions to perform deletion operation.
#include<stdio.h>

int main()
{

    int key, i,n, pos = -1;
    int arr[30];

    printf("Enter the number of elements?");
    scanf("%d",&n);

    // reading array
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);

    // print the original array
    printf("Array before Deletion: ");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("Enter element to delete: ");
    scanf("%d",&key);

    // traverse the array
    // if any element matches the key, store its position

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
       …

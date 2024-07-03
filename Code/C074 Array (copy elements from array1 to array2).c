#include<stdio.h>
int main()
{
    int array1[30],  array2[30], n, i;

    printf("How many numbers : ");
    scanf("%d",&n);

    printf("Enter the elements : ");
    for(i=0; i<n; i++)//i<n
    {
        scanf("%d",&array1[i]);
    }
//    int array1[5] ={10,20,30,40,50}, array2[5],i;  //value given before run




    //print array1 elements
    printf("Array1 : ");
    for(i=0; i<n; i++)//i<n
    {
        printf("%d ",array1[i]);
    }

    //copying all the elements from array1 to array2
    for(i=0; i<n; i++)//i<n
    {
        array2[i] = array1[i];
    }

    //print array2 elements
    printf("\nArray2 : ");
    for(i=0; i<n; i++)//i<n
    {
        printf("%d ",array2[i]);
    }

    return 0;
}

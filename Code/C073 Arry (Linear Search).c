/*
    (Searching a number in Arry:)

    ** The Searching Algorithm searching for the specified element in the given list.
    ** Binary Search and Linear Search are the commonly used searching algorithm.


    ** Linear Search
    ** Binary Search


    ** The linear search is the algorithm of choice for short lists, because it's
       simple and requires minimal code to implement.
    ** Binary search is a popular algorithm for large databases with
       records ordered by numerical key.

*/

////value given before run in code
//#include<stdio.h>
//int main()
//{
//    int num[] = {10,2,15,20,35,46,85};
//    int value;
//    int pos= -1;
//    int i;
//
//    printf("Enter the value you want to search : ");
//    scanf("%d",&value);
//
//
//    //found position
//    for(i=0;i<7; i++)
//    {
//        if(value==num[i])
//        {
//            pos = i+1;
//            break;
//        }
//    }
//
//    //print position
//    if(pos==-1)//Important
//        printf("Item is not found");
//    else
//        printf("The value is found at position %d",pos);
//
//
//    return 0;
//}





//value gven after run
#include<stdio.h>
int main()
{
    int pos=-1,value;//pos=-1
    int num[100],i,n;

    printf("How many numbers : ");
    scanf("%d",&n);

    printf("Enter your numbers : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    printf("Enter the value you want to search : ");
    scanf("%d",&value);


    //found position
    for(i=0;i<n; i++)//i<n
    {
        if(value==num[i])
        {
            pos = i+1;
            break;
        }
    }

    //print position
    if(pos==-1)//Important
        printf("Item is not found");
    else
        printf("The value is found at position %d",pos);


    return 0;
}





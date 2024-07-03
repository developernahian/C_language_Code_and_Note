/*সমান্তর ধারা : যে
ধারায় কোন পদক্তোর
পরবর্তী পদ থেকে
বিয়োগ করলে একই
সংখ্যা বা রাশি পাওয়া
যায় তাকে সমান্তর
ধারা বলে।

গুণোত্তর ধারা : যে
ধারার কোন পদের
সাথে তার পরবর্তী
পদের অনুপাত সর্বদাই
সমান হয় তাকে
গুণোত্তর ধারা বলে।*/


#include<stdio.h>
int main()
{

    //সমান্তর ধারা শুরু

//    //1+2+3+....N=?
//    //using for loop
//    int n,sum=0,i;
//    printf("Enter the last number of the series : " );
//    scanf("%d",&n);
//    printf("1 + 2 + 3 ....... + %d",n);
//    for(i=1; i<=n; i=i+1)
//    {
//        sum = sum + i;
//    }
//    printf(" = %d",sum);







//    //1+3+5+....N=?
//    //using for loop
//    int n,sum=0,i;
//    printf("Enter the last number of the series : " );
//    scanf("%d",&n);
//    printf("1 + 3 + 5 ....... + %d",n);
//    for(i=1; i<=n; i=i+2)
//    {
//        sum = sum + i;
//    }
//    printf(" = %d",sum);




//    //1+2+3+....N=?
//    //using while loop
//    int n,sum=0,i=1;
//    printf("Enter the last number of the series : " );
//    scanf("%d",&n);
//    printf("1 + 2 + 3 ....... + %d",n);
//    while(i<=n)
//    {
//        sum = sum + i;
//        i=i+1;
//    }
//    printf(" = %d",sum);





//    //2+4+6+....N=?
//    //using while loop
//    int n,sum=0,i=2;
//    printf("Enter the last number of the series : " );
//    scanf("%d",&n);
//    printf("2 + 4 + 6 ....... + %d",n);
//    while(i<=n)
//    {
//        sum = sum + i;
//        i=i+2;
//    }
//    printf(" = %d",sum);

    //সমান্তর ধারা শেষ




    //গুণোত্তর ধারা শুরু

//    /*
//    1*2 + 2*3 + 3*4 + n1*n2 =
//    here a=1 and b=2 [1*2, thent other parts is increment part]
//    */
//    int n1,n2,sum=0,a=1,b=2;//n1=last a and n2=last b
//    printf("Enter n1 and n2 : " );
//    scanf("%d %d",&n1,&n2);
//
//    printf("1.2 + 2.2 + 3.2 + ...... + %d.%d",n1,n2);
//
//    while(a<=n1 && b<=n2)
//    {
//        sum = sum + a*b;
//        a=a+1;
//        b=b+1;
//    }
//
//    printf(" = %d\n",sum);
//   //output 1*2 + 2*3 + 3*4 + 4*5 = 40



//    /*
//    1*3 + 2*5 + 3*7 + n1*n2 =
//    here a=1 and b=3 [1*3, thent other parts is increment part]
//    */
//    int n1,n2,sum=0,a=1,b=3;//n1=last a and n2=last b
//    printf("Enter n1 and n2 : " );
//    scanf("%d %d",&n1,&n2);
//
//    printf("1.3 + 2.5 + 3.7 + ...... + %d.%d",n1,n2);
//
//    while(a<=n1 && b<=n2)
//    {
//        sum = sum + a*b;
//        a=a+1;
//        b=b+2;
//    }
//
//    printf(" = %d\n",sum);




    /*
    1*3*4 + 2*5*6 + 3*7*8 + n1*n2*n3 =
    here a=1 and b=3,c=4 [1*3*4, thent other parts is increment part]
    */
    int n1,n2,n3,sum=0,a=1,b=3,c=4;
    printf("Enter n1, n2, n3 : " );
    scanf("%d %d %d",&n1,&n2,&n3);

    printf("1.3.5 + 2.5.6 + 3.7.8 + ...... + %d.%d.%d",n1,n2,n3);

    while(a<=n1 && b<=n2 && c<=n3)
    {
        sum = sum + a*b,c;
        a=a+1;
        b=b+2;
        c=c+2;
    }

    printf(" = %d\n",sum);



    //গুণোত্তর ধারা শেষ

    return 0;
}

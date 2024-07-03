#include<stdio.h>
//#include<math.h>
int main()
{
//    // (Problem 1) Write a program that calculate the area of a triangle
//    //ত্রিভুজের ক্ষেত্রফল নির্ণয়ের  Program
//    float base,height,area;
//    printf("Base = ");
//    scanf("%f",&base);
//
//    printf("Height = ");
//    scanf("%f",&height);
//
//    area=(float)1/2*base*height;
//    //OR, area=.5*base*height;
//    printf("Area of Triangle = %.2f\n\n",area);


    //END************************************



//    //(Problem 2) ত্রিভুজের তিন বাহুর দৈর্ঘ্য দেওয়া আছে। ক্ষেত্রফল নির্ণয়ের  Program
//    //[Area=sqrt(S*(S-a)*(S-b)*(S-c))] [sqrt:√]
//    //Where, [S=(a+b+c)/2]
//    float a,b,c,S,Area;
//    printf("Enter values : ");
//    scanf("%f%f%f",&a,&b,&c);
//    S=(a+b+c)/2;
//    Area=sqrt(S*(S-a)*(S-b)*(S-c));
//    //Area=sqrt(S(S-a)(S-b)(S-c)); [Wrong]
//    printf("Area = %.2f\n\n",Area);

    //END************************************


//    //(Problem 3) আয়তক্ষেত্রের ক্ষেত্রফল নির্ণয়ের জন্য Program
//    //[area=length*width]
//    float length,width,area;
//    printf("Enter Length = ");
//    scanf("%f",&length);
//    printf("Enter Width = ");
//    scanf("%f",&width);
//    area=length*width;
//    printf("Area = %.2f\n\n",area);

    //END************************************


//    //(Problem 4.1) বৃত্তের ক্ষেত্রফল নির্ণয়ের জন্য Program
//    //area=3.1416*r^2
//    float area,radius; //We can use here, float PI=301416; for shortcut
//    printf("Enter Radius = ");
//    scanf("%f",&radius);
//    area=3.1416*radius*radius;
//    printf("Area of Circle = %.2f\n\n",area);

    //END************************************

//    //(Problem 4.2) বৃত্তের ক্ষেত্রফল নির্ণয়ের জন্য Program
//    float area,r,PI=3.1416;
//    printf("Enter Radius = ");
//    scanf("%f",&r);
//    area=PI*r*r;
//    printf("Area of circle is = %.2f\n\n",area);

    //END************************************


//    //(Problem 4.3) বৃত্তের ক্ষেত্রফল নির্ণয়ের জন্য Program
//    //To use M_PI we need to add #include<math.h>
//    //because its a library function and the value of PI is stored in this library function
//    //So unhide the second line #include<math.h>
//    float area,r;
//    printf("Enter Radius = ");
//    scanf("%f",&r);
//    area=M_PI * r *r;
//    printf("Area of circle is = %.2f\n\n",area);


    //END************************************

    //(Problem 4.2) বৃত্তের পরিধি নির্ণয়ের জন্য Program
    float r,P=3.1416,c;
    printf("Enter Radius = ");
    scanf("%f",&r);
    c=2*P*r;
    printf("C = %.2f\n\n",c);


    //END************************************



    return 0;
}

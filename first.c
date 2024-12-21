#include<stdio.h>

  int main()

  //ignore that 
//
 { 
    
          // printf("hello world\n")
           //    int a=5; // 2 to 4 bytes

//      unsigned int = 8; // 2 bytes

//    long int = 8; // 4 bytes

// short int =8; // 2 bytes

//    //printf ("%d" ,a );


 //    float b = 8.0; // 4 bytes -- 6 decimal precision
  //    double myfloat1 = 7.43; // 8 bytes -- 15 decimal precision

// long double myfloat2 = 7.83t7367;// 10 bytes -- 19 decimal precision
 //    //printf ("%f" ,b);


 //    char c='x';// 1 bytes 
  //    //printf ("%c" ,c);



// printf("the size taken by int is %d\n", sizeof(int));

// printf("the size taken by unsigned int is %d\n", sizeof(unsigned int));
 // printf("the size taken by float is %d\n", sizeof(float));

// printf("the size taken by double is %d\n", sizeof(double));
 // printf("the size taken by long double is %d\n", sizeof(long double)


 //ARITMETIC OPERTORS

 // int a= 5, b= 6;


// printf("The sum of a and b is %d\n", a+b);
 // printf("The diffrence of a and b is %d\n", a-b);
 // printf("The multiplication of a and b is %d\n", a*b);

// printf("The divistion of a and b is %d\n", a/b);


// //RELATIONAL OPERTORS
 
  //  int maths = 34, scince = 37;

 //  printf("%d\n" , maths == scince) ;
  //  printf("%d\n" , maths != scince) ;
  //  printf("%d\n" , maths < scince) ;
  //  printf("%d\n" , maths > scince) ;


 // printf("\n\n******** taking input from user in c *********");
  // int input ;
  // printf("\n you entered %d as input" , input);
  // printf("\n please enrter thr value of input");

// scanf("%d", &input);





printf("\n\n******** decision making in c *********\n\n");

int age;
printf ("enter your age\n");
scanf ("%d", &age);
if (age<18)
{
printf ("you can drive");
}
else if(age>=18 && age<=24)
{
  printf ("you are banned from driving");
}

else{
   printf ("you can drive but drive carefully ");
}   
   return 0;
 }
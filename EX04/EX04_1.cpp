#include <stdio.h>

int a;

void func()
{
 printf("no 1 a=%d\n", a);
}

int main(void)
{
 int a =1;
 printf("no 1 a=%d\n",a); //a here was declared as int a = 1;
 func();         //a in here has novalue only declared       
 {
	 int a =1;
	 printf("no 1 a=%d\n",a); // same result as before
	 func();
 } 
 return 0;
}

/* 
    result:
        no 1 a=1
        no 1 a=0
        no 1 a=1
        no 1 a=0
                    */
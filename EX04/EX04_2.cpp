#include <stdio.h>
int n = 1;

void func()
{
	static int x=4;
	int y=10;
	x=x+2;
	n=n+10;
	y=y+n;
	printf("func:x=%d,y=%d,n=%d\n",x,y,n);

}

int main()
{
	static int x=5;
	int y;

	y=n;
	printf("main:x=%d,y=%d,n=%d\n",x,y,n);
	func();
	printf("main:x=%d,y=%d,n=%d\n",x,y,n);
	func();

    return 0;
}

/*
result: 
Shane  ⋯  Codes  C_Review_Codes  EX04  gcc EX04_2.cpp && ./a.out                                                                                                  master
main:x=5,y=1,n=1
func:x=6,y=21,n=11
main:x=5,y=1,n=11
func:x=8,y=31,n=21
*/

/*
解： x在main()作用域里值不会变，在func中执行一次+2；
    y值在main()里为全局变量n的初值1；
    第一次执行func()后n变为11，func()中x变为6；
    第二次执行func()后n变为21，func()中x变为8；
    每次执行func时y值为10，故2、4次y值为与n值加10.
*/
    
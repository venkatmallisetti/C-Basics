#include<stdio.h>
void main()
{
	int a, b, s, d, p, q, r, n;
	
	a=50;
	b=5;
	s=a+b;
	d=a-b;
	p=a*b;
	q=a/b;
	r=a%b;
	n=a+b+s+d+p+q+r;
	printf("sum of %d and %d id %d\n",a,b,s);
	printf("difference of %d and %d is %d\n", a,b,d);
	printf("product of %d and %d is %d\n",a, b, p);
	printf("quotient of %d and %d is %d\n",a,b,q);
	printf("remainder of %d and %d is %d\n", a,b,r);
	printf("sum of all arithmetic operators",n);
	
}

#include<stdio.h>
#include<limits.h>
void main()
{
	printf("Short Int:\nSigned:%hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("Unsigned:%d to %hu",0,USHRT_MAX);
	printf("INT:\nSigned:%d to %d\n",INT_MIN,INT_MAX);
	printf("Unsigned:%d to %u",0,UINT_MAX);
	printf("Long Int:\nSigned:%ld to %li\n",LONG_MIN,LONG_MAX);
	printf("Unsigned:%d to %lu",0,ULONG_MAX);
	printf("Long Long Int:\nSigned:%lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("Unsigned:%d to %llu",0,ULONG_LONG_MAX);
	
}

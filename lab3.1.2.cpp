#include<stdio.h>
#include<float.h>
#include<limits.h>
main()
{
	printf("range of signed char is %d to %d\n",SCHAR_MIN,SCHAR_MAX);
	printf("range of unsigned char is 0 to %d\n",UCHAR_MAX);
	printf("range of signed short int is %d to %d\n",SHRT_MIN,SHRT_MAX);
	printf("range of unsigned short int is 0 to %d\n",USHRT_MAX);
	printf("range of signed int is %d to %d\n",INT_MIN,INT_MAX);
	printf("range of unsigned int is 0 to %lu\n",UINT_MAX);
	printf("range of signed long int is %ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("range of unsigned long int is 0 to %lu\n",ULONG_MAX);
	printf("range of signed long long int is %lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("range of unsigned long long int is 0 to %llu\n",ULONG_LONG_MAX);
	printf("range of float is %e to %e\n",FLT_MIN,FLT_MAX);
	printf("range of double is %e to %e\n",DBL_MIN,DBL_MAX);
	printf("range of long double os %e to %e\n",LDBL_MIN,LDBL_MAX);
	return 0;
}

#include<stdio.h>
#include<limits.h>
#include<float.h>

main()
{
	printf("range of signed char %d to %d\n",SCHAR_MIN,SCHAR_MAX);
	printf("range of unsigned char 0 to %d\n",UCHAR_MAX);
	printf("range of signed short int %d to %d\n",SHRT_MIN,SHRT_MAX);
	printf("range of unsigned short int 0 to %d\n",USHRT_MAX);
	printf("range of signed int %d to %d\n",INT_MIN,INT_MAX);
	printf("range of unsigned int 0 to %ld\n",UINT_MAX);
	printf("range of signed long int %ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("range of unsigned long int 0 to %lu\n",ULONG_MAX);
	printf("range of signed long long int %lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("range of unsigned long long int 0 to %llu\n",ULONG_LONG_MAX);
	printf("range of float %e to %e\n",FLT_MIN,FLT_MAX);
	printf("range of double %e to %e\n",DBL_MIN,DBL_MAX);
	printf("range of long double %e to %e\n",LDBL_MIN,LDBL_MAX);
	
	return 0;
}

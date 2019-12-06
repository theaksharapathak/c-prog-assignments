 #include<stdio.h>
 #include<limits.h>
 #include<float.h>
 main()
 {
 	int integer_type;
 	float float_type;
 	double double_type;
 	char char_type;
 	printf("size of int: %ld bytes\n",sizeof(integer_type));
 	printf("size of float: %ld bytes\n",sizeof(float_type));
 	printf("size of character: %ld bytes\n",sizeof(char_type));
 	printf("size of double: %ld bytes",sizeof(double_type));
 	
 	return 0;
 }

#inc lude<stdio.h>
main()
{
	int i,n;
	float t=1,ans=1,angle_degree,angle_rad;
	printf("enter the angle in degree\n");
	scanf("%f",&angle_degree);
	printf("enter the value of n\n");
	scanf("%d",&n);
	
	angle_rad=angle_degree*(3.1415/180);
	for(i=1;i<=n;i++)
	{
		t=t*(-1)*angle_rad*angle_rad/(2*i*(2*i-1));
		ans=ans+t;
	}
	printf("cos(%f)=%f",angle_degree,ans);
	return 0;
	
}

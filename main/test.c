#include <stdio.h>
#include <string.h>
#include <float.h>
#include "qcit_types.h"
#define KEY 1

//uint8* p_g_u8_test1;

int main(void)
{
	int8 i8_i = -8;
	uint8 u8_j = 10;
	printf("%x",u8_j + i8_i);
}


int main1(void)
{
	float f_inch_cm = 2.54;
	float f_test = 1.0/3.0;
	double a = 1.0/3.0;
	char first_name[40];
	char family_name[40];
	//float f_value = g/f_one_quart_g;
	printf("%.4f %.12f %.16f\n",f_test,f_test,f_test);
	printf("%.4f %.12f %.16f\n",a,a,a);	
	//scanf("%f", &f_test);
	//printf("please input your family_name:\n");
	//scanf("%s", family_name);
	//printf("The input is %+.3f or %.3E\n", f_test, f_test);
	printf("sizeof(short):%d; sizeof(float):%d; sizeof(double):%d; %d; %d", sizeof(short), sizeof(float), sizeof(double), sizeof(long long), sizeof f_inch_cm);
	
	printf("增加测试");
	return 0;
}

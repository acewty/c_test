#include <stdio.h>
#include <string.h>
#include <float.h>
#include "./../include/qcit_types.h"
#define KEY 1

//uint8* p_g_u8_test1;


int main(void)
{
	//uint8 u8_i, u8_j, u8_k, u8_num = 0;
	//uint16 u16_val[24];
	for(u8_i = 1; u8_i < 5; ++u8_i)
	{
		for(u8_j = 1; u8_j < 5; ++u8_j)
		{
			for(u8_k = 1; u8_k < 5; ++u8_k)
			{
				if(u8_i != u8_j && u8_i != u8_k && u8_j != u8_k)
				{
					printf("%d\n",u8_i*100 + u8_j*10 + u8_k);
					u8_num++;
				}
			}
		}
	}
	printf("数量u8_num:%d\n",u8_num);
}

/*
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
	printf("增加测试2");
	return 0;
}
*/

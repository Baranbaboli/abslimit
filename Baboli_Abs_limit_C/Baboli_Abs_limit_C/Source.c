#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{  //main


	int week, hour, myhour;
	float abslimit;

	printf("Enter number of weeks: ");
	scanf("%d", &week);
	printf("Enter number of hours:");
	scanf("%d", &hour);

	abslimit = week * hour*0.3;
	printf("Absence Limit:");
	printf("%.2f", abslimit);
	
	printf("\nEnter your absences:");
	scanf("%d", &myhour);

	if (myhour > abslimit)
		printf("YOU HAVE FAILED HONEY! Cry more \n");
	else
		printf("Nice, keep coming \n");

	system("pause");
	//baranbaboli

	return 0;

}
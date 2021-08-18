#include <stdio.h>
/* C Program to Calculate Electricity Bill
 * main - Entry point int the program
 *
 *Return: Alwaya 0 is success.
 */
int main(void)
{
	int Units;
	float Amount, Sur_Charge, Total_Amount;

	printf("\n Please Enter the Units that you Consumed  :  ");
	scanf("%d", &Units);

  	if (Units < 50)
  	{
		Amount = Units * 2.60;
		Sur_Charge = 25;
  	}
  	else if (Units <= 100)
  	{
		/**
		*First Fifty Units charge is 130 (50 * 2.60)
		*Next, we are removing those 50 units from total units
		*/
		Amount = 130 + ((Units - 50 ) * 3.25);
		Sur_Charge = 35;
	}
	else if (Units <= 200)
	{
	/**
	 *First Fifty Units charge is 130, and 50 - 100 is 162.50 (50 * 3.25)
  	 *Next, we are removing those 100 units from total units
	 */
	Amount = 130 + 162.50 + ((Units - 100 ) * 5.26);
	Sur_Charge = 45;
	}
	else
	{
		/**
		*First Fifty Units 130, 50 - 100 is 162.50, and 100 - 200 is 526 		(100  5.65)
		*Next, we are removing those 200 units from total units
		*/
	   	Amount = 130 + 162.50 + 526 + ((Units - 200 ) * 7.75);
	   	Sur_Charge = 55;
	}
		Total_Amount = Amount + Sur_Charge;
		printf("\n Electricity Bill  =  %.2f\n", Total_Amount);

		return 0;
}

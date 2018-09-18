#include<stdio.h>
#include <conio.h>
#include<process.h>
void calculateCurrency();
void calculateMetric();
void calculateWeight();
void calculateLength();
void calculateArea();
void calculateTime();
void calculateFuel();
void calculateVolume();
void calculateTemperature();
void calculatePressure();
void calculatePower();
void printCurrency(float,int);
void main()
{

int optionSelect;
char ch = 'y';
clrscr();

while(1)
{

	printf("Select one option \n ");
	printf("1. Currency \n 2. Metric \n 3. Weight \n 4. Length \n 5. Area \n");
	printf("6.Fuel  \n 7. Time \n 8.Volume \n 9. Temprature \n 10. Pressure \n 11. Power\n 12 to quit");

	scanf("%d",&optionSelect);

	switch(optionSelect){

	 case 1: calculateCurrency(); break;
     //	 case 2: calculateMetric(); break;
      //	 case 3: calculateWeight(); break;
      //	 case 4: calculateLength(); break;
    //	 case 5: calculateArea(); break;
  //	 case 6: calculateFuel(); break;
//	 case 7: calculateTime(); break;
       //	 case 8: calculateVolume(); break;
       //	 case 9: calculateTemperature(); break;
       //	 case 10: calculatePressure(); break;
	// case 11: calculatePower(); break;
	 default:exit(1);
	}


}


getch();
}
void calculateCurrency()
{

int currencySelect;
float amt=0;
printf("Select a currency ");

printf("\n 1. for INR, \n 2. for EURO \n 3. for DOLLARS\n");

scanf("%d",&currencySelect);

switch(currencySelect){

 case 1: printf("Enter the amount in INR ");
	 scanf("%f", &amt);

	 printCurrency(amt,1);

 break;

  case 2: printf("Enter the amount in EURO ");
	 scanf("%f", &amt);
	 printCurrency(amt,2);

 break;

  case 3: printf("Enter the amount in DOLLARS");
	 scanf("%f", &amt);
	 printCurrency(amt,3);

 break;

 default:printf("Sorry wrong option \n");

}



}

void printCurrency(float amt, int type){
  if(type==1){
  printf("\n Converted values \n INR : %f \n EURO : %f \n DOLLAR : %f \n", amt, amt*0.0117, amt*0.0137);

  }
  if(type==2){
   printf("\n Converted values \n INR : %f \n EURO : %f \n DOLLAR : %f \n", amt*85.16, amt, amt*1.1682);
  }
  if(type==3){
   printf("\n Converted values \n INR : %f \n EURO : %f \n DOLLAR : %f \n", amt*72.875, amt*0.856, amt);
  }


}
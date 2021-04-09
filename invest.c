//Reshmii Bondili
#include <stdio.h>
double interestcalc (double amt,double rate);
double endbalancecalc (double amt,double rate);
int main (void)
{
    double amt;
    int yrs;
    double rate;
    double addition;
    int i; //iterating varibale 
    double endbalance;

    //input for investment amt
    do{
    printf("Enter initial investment amount: ");
    scanf(" %lf", &amt);
    if (amt<0) printf("Initial investment amount cannot be negative.\n");
    }while (amt<0);
   
    //input for yrs 
    do{
    printf("Enter total years: ");
    scanf("%d", &yrs);
    if (yrs<=0) printf("Number of years must be greater than 0.\n");
    }while (yrs<=0);
    
    //input for return rate 
    do{
    printf("Enter return rate: ");
    scanf("%lf", &rate);
    if (rate<0) printf("Return rate cannot be negative.\n");
    } while (rate<0);

    //input for additional contribution 
    do{ 
    printf("Enter additional contribution per year: ");
    scanf("%lf", &addition);
    if (addition<0) printf("Additional contribution cannot be negative.\n");
    } while (addition<0);

    printf("\n\n");
    printf("Year \t Start Balance \t Interest \t End Balance\n");
    printf("*********************************************************\n");
    for (i=1; i<=yrs; i++)
    {
        printf("%d \t %.2lf \t %.2lf \t %.2lf \n",
        i,
        amt,
        interestcalc(amt,rate),
        endbalancecalc (amt,rate)
        );
        amt=endbalancecalc(amt,rate)+addition;
    }
    return 0;
}
//functions created
double interestcalc (double amt,double rate) { return amt*(rate/100); }
double endbalancecalc (double amt,double rate) { return amt+=amt*(rate/100); }
#include <stdio.h>

int main()
{
    float principle;
    float interest;
    float amount;
	float time;
	float rate;
	float SI;

    printf("Enter principle:\n ");
    scanf("%f", &principle);
    
    printf("Enter time:\n ");
    scanf("%f", &time);

    printf("Enter rate:\n ");
    scanf("%f", &rate);
    
    printf("Enter amount:\n ");
    scanf("%f", &amount);
    
    printf("Enter interest:\n ");
    scanf("%f", &interest);
    
    SI = (principle * time * rate) / 100;
    printf("Simple Interest = %f\n", SI);

    amount = principle + interest;
     printf(" Amount= %f\n", amount);
    

    return 0;
}

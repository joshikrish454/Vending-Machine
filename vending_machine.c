
#include <stdio.h>
int main(void){
int choice;
double total = 0.0;
double current;
double cost = 0.0;
char *name[3] = {"Chips","Soda","Candy"};
do{


    printf("\n--- Vending Machine ---\n");
    printf("1. Chips (Price: $1.25)\n");
    printf("2. Soda (Price: $1.50)\n");
    printf("3. Candy (Price: $0.75)\n");
    printf("4. Exit\n");


    printf("Select an item: ");
    scanf("%d", &choice);




switch(choice){
case 1:
printf("\n1. Chips (Price: $1.25)\n"); cost = 1.25; break;
case 2:
printf("\n2. Soda (Price: $1.50)\n"); cost = 1.50; break;
case 3:
printf("\n3. Candy (Price: $0.75)\n"); cost = 0.75; break;
case 4:
printf("\nThank you for using the vending machine!\n");
return 0;
}


printf("Please insert coins (5, 10, 25):\n");


total = 0;


while (total < cost){
    printf("Insert coin: ");
    scanf("%lf", &current);
    total += (current/100);
    printf("Paid: $%.2f\n", current / 100.0);
}




printf("\nDispensing %s (Price: $%.2f).\n", name[choice-1], cost);
printf("Your change is $%.2f.\n", (total - cost));


} while ( choice != 4);


    return 0;
}


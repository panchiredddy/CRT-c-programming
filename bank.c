#include<stdio.h>
int main(){
	int choice;
	float bal=1000;
	float amt;
	printf("enter 1 to check balance\n");
	printf("enter 2 to deposite amt\n");
	printf("enter 3 to withdraw money\n");
	printf("enter 4 to exit\n");
	do{
	printf("\nenter your choice:\n");
	scanf("%d",&choice);
        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", bal);
                break;
            case 2:
                printf("Enter the amount to deposit: $");
                scanf("%f", &amt);
                if (amt > 0) {
                    bal += amt;
                    printf("You have successfully deposited $%.2f. Your new balance is: $%.2f\n", amt, bal);
                } else {
                    printf("Invalid amount\n");
                }
                break;
            case 3:
                printf("Enter the amount to withdraw: $");
                scanf("%f", &amt);
                if (amt > 0 && amt <= bal) {
                    bal -= amt;
                    printf("You have successfully withdrawn $%.2f. Your new balance is: $%.2f\n", amt, bal);
                } else if (amt > bal) {
                    printf("Insufficient balance");
                } else {
                    printf("Invalid amount. Please enter a positive number.\n");
                }
                break;
            case 4:
                printf("Thank you!\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (choice != 4);

    return 0;
}



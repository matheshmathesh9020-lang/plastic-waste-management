#include <stdio.h>

int main() {
    int choice;
    float household, school, shops, total;

    printf("====================================\n");
    printf("   PLASTIC WASTE MANAGEMENT SYSTEM\n");
    printf("====================================\n");

    printf("\nEnter plastic waste collected (in kg):\n");

    printf("Households: ");
    scanf("%f", &household);

    printf("Schools/Colleges: ");
    scanf("%f", &school);

    printf("Shops: ");
    scanf("%f", &shops);

    if (household < 0 || school < 0 || shops < 0) {
        printf("\nError: Waste quantity cannot be negative.\n");
        return 1;
    }

    total = household + school + shops;

    printf("\n----------- WASTE REPORT -----------\n");
    printf("Household Waste    : %.2f kg\n", household);
    printf("School/College Waste: %.2f kg\n", school);
    printf("Shop Waste         : %.2f kg\n", shops);
    printf("------------------------------------\n");
    printf("Total Plastic Waste: %.2f kg\n", total);

    printf("\nChoose a waste management method:\n");
    printf("1. Reduce plastic use\n");
    printf("2. Reuse plastic products\n");
    printf("3. Recycle plastic waste\n");
    printf("4. Segregate plastic waste\n");

    printf("\nEnter your choice (1-4): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("Suggestion: Use reusable bags and bottles.\n");
            break;
        case 2:
            printf("Suggestion: Reuse suitable plastic containers.\n");
            break;
        case 3:
            printf("Suggestion: Send recyclable plastic to an\n");
            printf("authorized recycling collection centre.\n");
            break;
        case 4:
            printf("Suggestion: Separate plastic from other waste.\n");
            break;
        default:
            printf("Invalid choice. Please select 1 to 4.\n");
    }

    printf("\nThank you for supporting a cleaner environment!\n");

    return 0;
}

#include <stdio.h>
#include <stdbool.h>

struct Item {
    char name[100];
    float price;
    bool Shipping;
};

//calculate shipping cost
float Cost(float price, bool Shipping) {
    float shippingCost;

    if (price < 10)
        shippingCost = 2.0;
    else
        shippingCost = 3.0;

    return shippingCost;
}

//calculate total cost with discount
float TotalCost(int itemcount, float totalCost) {
    if (itemcount > 5)
        totalCost *= 0.8;

    return totalCost;
}

//display receipt
void Receipt(struct Item items[], int itemcount, float totalCost) {
    printf("------ Receipt ------\n");
    for (int i = 0; i < itemcount; i++) {
        printf("Item: %s\n", items[i].name);
        printf("Price: %.2f\n", items[i].price);
    }

    printf("Item Count: %d\n", itemcount);
    printf("Total Cost: %.2f\n", totalCost);
}

int main() {
    struct Item items[100];
    int itemcount = 0;

    while (true) {
        printf("Enter item name: ");
        scanf("%s", items[itemcount].name);

        printf("Enter item price: ");
        scanf("%f", &items[itemcount].price);

        itemcount++;
        char choice[5];

        printf("Continue shopping? (yes/no): ");
        scanf("%s", choice);

        if (strcmp(choice, "no") == 0)
            break;
    }

    // Calculate item count and total cost
    float totalCost = 0.0;
    for (int i = 0; i < itemcount; i++) {
        float shippingCost = Cost(items[i].price, items[i].Shipping);
        totalCost += items[i].price + shippingCost;
    }
    totalCost = TotalCost(itemcount, totalCost);

    // Display receipt
    Receipt(items, itemcount, totalCost);

    return 0;
}

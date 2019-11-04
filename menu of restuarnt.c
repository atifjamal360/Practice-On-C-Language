#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>

int itemsincart = 0;

struct item {
    char name[16];
    float price;} 
	omlet = {"Omlet\t", 1.45}, frenchfries = {"French Fries", 1}, muffin = {"Muffin\t", 0.99}, frenchtoast = {"French Toast", 1.99},fruitbasket = {"Fruit Basket", 2.49}, cereal = {"Cereal\t", 0.69}, coffee = {"Coffee\t", 0.75}, tea = {"Tea\t", 0.50};

struct items {
    char item_name[16];
    float item_price;
    int quantity;
    float price;
} b[20];

void print_Bill(void) {
    int j;
    float total;
    printf("Item\t\tItem Price\tQuantity\tPrice\n");
    for (j=0; j<itemsincart; j++) {
        printf("%s\t\t%.2f\t\t%d\t\t%.2f\n", b[j].item_name, b[j].item_price, b[j].quantity, b[j].price);
    }
}

int add_Items(char item[16], int quantity) {
    if (strstr(item, "omlet")) {
        strcpy(b[itemsincart].item_name, omlet.name);
        b[itemsincart].item_price = omlet.price;
    } else if (strstr(item, "french fries")) {
        strcpy(b[itemsincart].item_name, frenchfries.name);
        b[itemsincart].item_price = frenchfries.price;
    } else if (strstr(item, "muffin")) {
        strcpy(b[itemsincart].item_name, muffin.name);
        b[itemsincart].item_price = muffin.price;
    } else if (strstr(item, "french toast")) {
        strcpy(b[itemsincart].item_name, frenchtoast.name);
        b[itemsincart].item_price = frenchtoast.price;
    } else if (strstr(item, "fruit basket")) {
        strcpy(b[itemsincart].item_name, fruitbasket.name);
        b[itemsincart].item_price = fruitbasket.price;
    } else if (strstr(item, "cereal")) {
        strcpy(b[itemsincart].item_name, cereal.name);
        b[itemsincart].item_price = cereal.price;
    } else if (strstr(item, "coffee")) {
        strcpy(b[itemsincart].item_name, coffee.name);
        b[itemsincart].item_price = coffee.price;
    } else if (strstr(item, "tea")) {
        strcpy(b[itemsincart].item_name, tea.name);
        b[itemsincart].item_price = tea.price;
    } else {
        return 1;
    }
    b[itemsincart].quantity = quantity;
    b[itemsincart].price = quantity * b[itemsincart].item_price;
    itemsincart++;
    return 0;
}

int menu() {
    char inp[16];
    int quantity;
    if (itemsincart==0) {
        printf("Omlet\t\t\t$1.45\n");
        printf("French Fries\t\t$1.00\n");
        printf("Muffin\t\t\t$0.99\n");
        printf("French Toast\t\t$1.99\n");
        printf("Fruit Basket\t\t$2.49\n");
        printf("Cereal\t\t\t$0.69\n");
        printf("Coffee\t\t\t$0.75\n");
        printf("Tea\t\t\t$0.50\n");
        printf("Which item you want to get?\nOr \"exit\" if you do not want to eat something today\n");
    } else {
        printf("\nAny thing else?\nOr \"exit\" to print the bill\n");
    }
    fgets(inp, 17, stdin);
    if ((inp[0]=='E' && inp[1]=='X' && inp[2]=='I' && inp[3]=='T') || (inp[0]=='e' && inp[1]=='x' && inp[2]=='i' && inp[3]=='t')) {
        return 1;
    }
    int len = strlen(inp), j;
    for (j = 0; j<len; j++){
        inp[j] = tolower(inp[j]);
    }
    printf("Quanity?\n");
    scanf("%d", &quantity);
    getchar();
    if (add_Items(inp, quantity) == 1) {
        printf("\nYour last entry was not done successfully\n");
        printf("Possibly you wrote item name wrong\n\n");
    };
    return 0;
}

int main(void) {
    while (1) {
        if (menu()==1) {
            break;
        }
    }
    if (itemsincart!=0)
        print_Bill();

    printf("\n\nThanks for your time at MovInPeak\nHave a great day!");
    return 0;
}

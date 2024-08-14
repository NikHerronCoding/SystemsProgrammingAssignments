#include<stdio.h>
#include<stdlib.h>

typedef struct item{
  char* name;
  float cost;
  int quantity;
} item_t;


void printItem(item_t item, int index){
  printf("%d) %s cost: $%.2f quantity: %d \n", index + 1, item.name, item.cost, item.quantity);
}




int main() {
  float money;
  int choice; 


  printf("Welcome to Nik Herrons Snack Bar\n");
  printf("How much money do you have?\n");
  scanf("%f", &money);

  printf("You have %.2f dollars.\n\n", money);

  item_t items[3];

  items[0].name = "Coco Puffs";
  items[0].cost = 1.50;
  items[0].quantity = 4;


  items[1].name = "Manchego Cheese";
  items[1].cost = 15.50;
  items[1].quantity = 10;

  items[2].name = "Coco Puffs";
  items[2].cost = 0.50;
  items[2].quantity = 1;

  printf("What would you like to buy? \n\n");

  for (int i = 0; i < 3; i++){
    printItem(items[i], i);
  }

  scanf("%d", &choice);

  choice--;



  if (items[choice].cost > money) {
    printf("You don't have enough money. \n");
  } else if (items[choice].quantity == 0) {
    printf("Item sold out");
  } else {
    printf("You bought: %s", items[choice].name);
    printf("You have: $%.2f left over.", money - items[choice].cost);
  }







  return 0;
}

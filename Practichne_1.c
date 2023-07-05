#include <stdio.h>
#include <windows.h>

int main() {
      SetConsoleCP(1251); // для української мови
  SetConsoleOutputCP(1251); // теж

float time=0; // створюємо змінні
float numbers[3];
 printf("Введіть 3 значення: "); // вивід на екран повідомлення
  for (int i = 0; i < 3; i++) { // щоби зчитати цифри рядком потипу  3 3 3
  scanf("%f", &numbers[i]);
  }

time=((1/numbers[0]) + (1/numbers[1]) + (1/numbers[2])); // обраххунок
printf("Необхідно час: %.2f години\n", time); // вивід результату
return 0;
}

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include<math.h>


// НСД
int NSD(int a, int b) {
    while (b != 0) { // пошук нсд
        int temp = b;
        b = a % b; // частка
        a = temp;
    }
    return a;
}
// НСК для двох чисел
long NSK_2(long a, long b) { // щоб не робити функцію NSK великою 
 // з перевіркою на два числа
    return (a * b) / (long)NSD(a, b); 
}
// НСК для більше чи 2 числа
long NSK(int numbers[], int count) {
  long res = numbers[0]; // змінна для повернення результату
  for (int i = 1; i < count; i++) { // цикл для пошуку
    res = NSK_2(res, numbers[i]); // використовуємо функцію NSK_2 для скорочення
  }
  return res; // повернення
}

int main(){
  SetConsoleCP(1251); // для української мови
  SetConsoleOutputCP(1251); // теж

int count=0; // кількість чисел

scanf("%d",&count); // считування кількості

  int numbers[count]; // масив для чисел
  printf("Введіть числа, розділені пробілами: "); // вивід
  for (int i = 0; i < count; i++) { // щоби зчитати цифри рядком потипу  45 0 6
  scanf("%d", &numbers[i]);
  }

  printf("%ld\n",NSK(numbers,count)); // вивід результату

system("pause"); // пауща щоб незакривало одрау консоль
exit(1); // вихід з програми
}

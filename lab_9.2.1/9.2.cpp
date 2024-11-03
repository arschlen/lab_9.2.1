#include <stdio.h> 
#include <conio.h>
#include <math.h>

#define N 5
#define ABS(x) ((x) < 0 ? -(x) : (x))         // Модуль (абсолютне значення)
#define SQR(x) ((x) * (x))                    // Квадрат числа
#define POW(x, y) (pow(x, y))                 // Піднесення до степеня (загальний випадок)
#define SQRT(x) (sqrt(x))                     // Квадратний корінь
#define MAX(x, y) ((x) > (y) ? (x) : (y))     // Максимальне з двох чисел
#define MIN(x, y) ((x) < (y) ? (x) : (y))     // Мінімальне з двох чисел

// Виведення повідомлення та значення цілого числа
#define PRINTI(w) puts("control output"); \
    printf(#w " = %d\n", w)

// Виведення повідомлення та значення дійсного числа
#define PRINTR(w) puts("result:"); \
    printf(#w " = %f\n", (float)(w))

void main() {
    puts("Lab: Using macros and preprocessing directives");

    int x, y, z;   // Змінні для введення
    float w;       // Змінна для результату
    char ch;       // Змінна для повторення циклу

    do {
#if N < 10
        puts("Input three integer numbers (x, y, z):");
        scanf("%d %d %d", &x, &y, &z);

        // Обчислення w на основі значення z
        if (z > 3) {
            // Якщо z > 3, то w = min((x - z)^2, x - y)
            w = MIN(SQR(x - z), x - y);
        }
        else {
            // Якщо z <= 3, то w = max(xy, yz) + min(zx, yz)
            w = MAX(x * y, y * z) + MIN(x * z, y * z);
        }

        PRINTI((int)w); // Виведення результату як цілого числа
#else
        float rad, s;  // Змінні для обчислення площі кола
        puts("Define area of a circle");
        puts("Input radius of circle:");
        scanf("%f", &rad);

        s = SQCIRCLE(rad); // Площа кола
        PRINTR(s);         // Виведення результату як дійсного числа
#endif

        puts("Repeat? (y/n): ");
        ch = getch();  // Зчитування символу відповіді
        getchar();     // Зчитування додаткового символу '\n'
    } while (ch == 'y');
}

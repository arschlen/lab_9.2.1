#include <stdio.h> 
#include <conio.h>
#include <math.h>

#define N 5
#define ABS(x) ((x) < 0 ? -(x) : (x))         // ������ (��������� ��������)
#define SQR(x) ((x) * (x))                    // ������� �����
#define POW(x, y) (pow(x, y))                 // ϳ�������� �� ������� (��������� �������)
#define SQRT(x) (sqrt(x))                     // ���������� �����
#define MAX(x, y) ((x) > (y) ? (x) : (y))     // ����������� � ���� �����
#define MIN(x, y) ((x) < (y) ? (x) : (y))     // ̳������� � ���� �����

// ��������� ����������� �� �������� ������ �����
#define PRINTI(w) puts("control output"); \
    printf(#w " = %d\n", w)

// ��������� ����������� �� �������� ������� �����
#define PRINTR(w) puts("result:"); \
    printf(#w " = %f\n", (float)(w))

void main() {
    puts("Lab: Using macros and preprocessing directives");

    int x, y, z;   // ���� ��� ��������
    float w;       // ����� ��� ����������
    char ch;       // ����� ��� ���������� �����

    do {
#if N < 10
        puts("Input three integer numbers (x, y, z):");
        scanf("%d %d %d", &x, &y, &z);

        // ���������� w �� ����� �������� z
        if (z > 3) {
            // ���� z > 3, �� w = min((x - z)^2, x - y)
            w = MIN(SQR(x - z), x - y);
        }
        else {
            // ���� z <= 3, �� w = max(xy, yz) + min(zx, yz)
            w = MAX(x * y, y * z) + MIN(x * z, y * z);
        }

        PRINTI((int)w); // ��������� ���������� �� ������ �����
#else
        float rad, s;  // ���� ��� ���������� ����� ����
        puts("Define area of a circle");
        puts("Input radius of circle:");
        scanf("%f", &rad);

        s = SQCIRCLE(rad); // ����� ����
        PRINTR(s);         // ��������� ���������� �� ������� �����
#endif

        puts("Repeat? (y/n): ");
        ch = getch();  // ���������� ������� ������
        getchar();     // ���������� ����������� ������� '\n'
    } while (ch == 'y');
}

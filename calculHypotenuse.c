#include <stdio.h>
#include <math.h>

int main(void)
{
    int AB, BC;
    printf("Quelle est la longueur AB: ");
    scanf("%d", &AB);
    printf("Quelle est la longueur BC: ");
    scanf("%d", &BC);
    int hypotenuse = AB * AB + BC * BC;
    hypotenuse = sqrt(hypotenuse);
    printf("L'hypoténuse est égal à %d cm \n", hypotenuse);
}
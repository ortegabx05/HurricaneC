#include <stdio.h>

int main(void) {
    int windSpeed;
    char *cat;

    printf("Enter wind speed: ");
    scanf("%d", &windSpeed);

    if (windSpeed >= 74 && windSpeed <= 95)
        cat = "Category One Hurricane";
    else if (windSpeed >= 96 && windSpeed <= 110)
        cat = "Category Two Hurricane";
    else if (windSpeed >= 111 && windSpeed <= 129)
        cat = "Category Three Hurricane";
    else if (windSpeed >= 130 && windSpeed <= 156)
        cat = "Category Four Hurricane";
    else if (windSpeed >= 157)
        cat = "Category Five Hurricane";
    else
        cat = "Not a Hurricane";

    printf("%s\n", cat);

    return 0;
}
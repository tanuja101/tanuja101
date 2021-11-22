#include <stdio.h>
int main() {
    double N1;
    printf("Enter a number: ");
    scanf("%lf", &N1);
    if (N1 <= 0.0) {
        if (N1 == 0.0)
            printf("You entered 0.");
        else
            printf(" negative number.");
    } else
        printf(" positive number.");
    return 0;
}

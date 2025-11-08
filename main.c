#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, i = 1;

    printf("Enter number of rows for half diamond: ");
    scanf("%d", &n);

    // 🔺 Top half
    do {
        int space = 1;
        int star = 1;

        // print spaces
        do {
            if (space > n - i)
                break;
            printf(" ");
            space++;
        } while (1);

        // print stars
        do {
            if (star > i)
                break;
            printf(" *");
            star++;
        } while (1);

        printf("\n");
        i++;
    } while (i <= n);

    // 🔻 Bottom half
    i = n - 1;
    do {
        int space = 1;
        int star = 1;

        // print spaces
        do {
            if (space > n - i)
                break;
            printf(" ");
            space++;
        } while (1);

        // print stars
        do {
            if (star > i)
                break;
            printf(" *");
            star++;
        } while (1);

        printf("\n");
        i--;
    } while (i >= 1);

     return EXIT_SUCCESS;


}

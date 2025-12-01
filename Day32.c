//Merge two arrays
/*
#include <stdio.h>

int main() {
    int n1, n2, i;
    int arr1[100], arr2[100], merged[200];

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for(i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
*/

//Find the digit that occurs the most times in an integer number.
/*
#include <stdio.h>

int main() {
    long long n;
    printf("Enter number: ");
    scanf("%lld", &n);

    int freq[10] = {0};
    if (n == 0) freq[0] = 1;

    while (n > 0) {
        freq[n % 10]++;
        n /= 10;
    }

    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) maxDigit = i;
    }

    printf("Digit occurring most times: %d", maxDigit);
    return 0;
}

 */
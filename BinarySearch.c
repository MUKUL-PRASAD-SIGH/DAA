#include <stdio.h>

int main() {
    int arr[100];
    int key;

    printf("Enter the key: ");
    scanf("%d", &key);

    // Fill array
    for (int i = 0; i < 100; i++) {
        arr[i] = i + 32;
    }

    int low = 0, high = 99;
    int found = 0;
    int count = 0;      
    int iterations = 0;
    while (low <= high) { iterations++;
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            printf("Found at index %d\n", mid);
            found = 1;
            break;
        }  count++; 
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Not found\n");
    }
  printf("Iterations: %d\n", iterations);
    printf("Comparisons: %d\n", count);
    return 0;}

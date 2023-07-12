#include <stdio.h>

void display_in_words(int num) {
    char* ones_words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char* tens_words[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char* teens_words[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    if (num < 0 || num > 9999) {
        printf("Error: Number out of range\n");
        return;
    }

    if (num == 0) {
        printf("zero\n");
        return;
    }

    if (num >= 1000) {
        printf("%s thousand ", ones_words[num / 1000]);
        num %= 1000;
    }

    if (num >= 100) {
        printf("%s hundred ", ones_words[num / 100]);
        num %= 100;
        
    }

    if (num >= 20) {
        printf("%s ", tens_words[num / 10]);
        num %= 10;
    } else if (num >= 10) {
        printf("%s ", teens_words[num - 10]);
        return;
    }

    if (num > 0) {
        printf("%s ", ones_words[num]);
    }

    printf("\n");
}

int main() {
    int num;
    printf("Enter a number between 0 and 9999: ");
    scanf("%d", &num);
    display_in_words(num);
    return 0;
}

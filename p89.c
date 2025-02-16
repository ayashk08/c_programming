//C Program to Add 2 Binary Strings
#include <stdio.h>
#include <string.h>

void addBinaryStrings(char bin1[], char bin2[], char result[]) {
    int len1 = strlen(bin1);
    int len2 = strlen(bin2);
    
    int maxLen = (len1 > len2) ? len1 : len2;
    
    int carry = 0, sum;
    int i = len1 - 1, j = len2 - 1, k = maxLen;
    
    result[k] = '\0';
    
    while (i >= 0 || j >= 0 || carry) {
        sum = carry;
        
        if (i >= 0) {
            sum += bin1[i] - '0';
            i--;
        }
        
        if (j >= 0) {
            sum += bin2[j] - '0';
            j--;
        }
        
        carry = sum / 2;
        result[k - 1] = (sum % 2) + '0';
        k--;
    }
}

int main() {
    char bin1[100], bin2[100], result[101];
    
    printf("Enter first binary string: ");
    scanf("%s", bin1);
    
    printf("Enter second binary string: ");
    scanf("%s", bin2);
    
    addBinaryStrings(bin1, bin2, result);
    
    printf("Sum of the two binary strings: %s\n", result);
    
    return 0;
}

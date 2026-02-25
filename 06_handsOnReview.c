#include <stdio.h>
#include <string.h>

/*
Hands-on Review:
- Structures
- Printing over multiple rows using nested loops
- Parsing through integers
- Using string utils from string.h
*/

typedef struct{
    int length;
    int width;
}Rectangle;

int isPalindrome(char *str, int length){
    int flag = 1;
    for(int i = 0; i <= length/2; i++){
        if(str[i] != str[length-(i+1)]){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() {
    Rectangle r;
    r.length = 3;
    r.width = 7;
    
    printf("length: %d, width: %d\n", r.length, r.width);
    
    //printing over multiple rows using nested loops
    
    for(int i=0; i<r.length ;i++){ //outer loop handles length
        for(int j=0; j<r.width ;j++){ //inner loop handles width
            printf("*");
        }
        printf("\n");
    }
    
    
    //parsing through integers
    
    int n;
    //i want to print the ones, tens, hundreds, thousands, ..., place
    // int ones = n % 10;
    // printf("ones: %d\n", ones);
    // n /= 10;
    // printf("%d\n", n);
    //repeat all that until we run out of digits to parse, ie n reaches 0
    
    n = 42067;
    printf("original n:%d\n", n);
    int digit, place = 1;
    while(n > 0){
        digit = n % 10;
        printf("%ds digit: %d\n", place, digit);
        place *= 10;
        n /= 10;
        printf("%d\n", n);
    }
    
    
    //palindrome check using string.h functions
    char str[50] = "abba";
    
    //the idea here is to compare the first and last character, then the next and previous of those characters respectively, until we reach the middle of the string (length/2)
    int length = strlen(str);
    
    printf("%s\n", str);
    
    if(isPalindrome(str, length)){
        printf("is a palindrome\n");
    } else {
        printf("not a palindrome\n");
    }
    
    
    return 0;
}
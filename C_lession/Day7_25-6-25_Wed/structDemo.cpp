#include <stdio.h>
#include <string.h>

void reverseString(char s[]){
    int l = strlen(s);
    int k = l-1;
    char result[l];
    
    for(int i = 0;i<l;i++){
        result[i] = s[k];
        k--;
    };
    printf("%s",result);
};

int main()
{
    char c[]="abcd";
    reverseString(c);
    return 0;
}
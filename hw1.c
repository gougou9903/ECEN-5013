#include<stdio.h>
#include "hw1.h"

int main(void) {
  char name[] = {'D','o','e','s',' ', 'i','t',' ', 'r','e','v','e','r','s','e',' ','\\','n','\\','0','\\','t',' ', 'c', 'o','r','r','e','c','t','l','y','?'};
    int length = sizeof(name);

    printf("print the string before reverse : \n");
    int i;
    for(i = 0; i < length; i++){
        printf("%c", name[i]);
    }

    char result = reverse_string(name, length);
    
    printf("\nprint the string after reverse : \n");
    
    for(i = 0; i < length; i++){
        printf("%c", name[i]);
    }

    if(result == '0'){
        printf("\nERROR");
    }else{
        printf("\nReversed Successfully");
    }


    return 0;
}

char reverse_string(char *str, int length){
    if(length <= 0) return '0';

    int i = 0;
    while(i < length - i - 1 ){
        char temp;
        temp = *(str + length- i - 1);
        *(str + length - i - 1) = *(str + i);
        *(str + i) = temp;
        i++;
    }

    return 's'; // success
}

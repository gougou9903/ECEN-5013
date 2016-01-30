#include<stdio.h>
#include "hw1.h"

int main(void) {
  //This is a string.
  char name[] = {'T','h','i','s',' ', 'i','s',' ', 'a',' ','s','t','r','i','n','g','.'};
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


  //some NUMmbers12345
    char name2[] = {'s','o','m','e',' ', 'N','N','M', 'm','b','e','r','s','1','2','3','4','5'};
    length = sizeof(name2);

    printf("\n\nprint the string before reverse : \n");
    
    for(i = 0; i < length; i++){
        printf("%c", name2[i]);
    }

    result = reverse_string(name2, length);
    
    printf("\nprint the string after reverse : \n");
    
    for(i = 0; i < length; i++){
        printf("%c", name2[i]);
    }

  //Does it reverse \n\0\t correctly?
    char name3[] = {'D','o','e','s',' ', 'i','t',' ', 'r','e','v','e','r','s','e',' ','\\','n','\\','0','\\','t',' ', 'c', 'o','r','r','e','c','t','l','y','?'};
    length = sizeof(name3);

    printf("\n\nprint the string before reverse : \n");
    
    for(i = 0; i < length; i++){
        printf("%c", name3[i]);
    }

    result = reverse_string(name3, length);
    
    printf("\nprint the string after reverse : \n");
    
    for(i = 0; i < length; i++){
        printf("%c", name3[i]);
    }

    printf("\n");

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

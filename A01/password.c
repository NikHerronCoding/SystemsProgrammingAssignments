#include<stdio.h>
#include<stdlib.h>



int main() {
    char* output = malloc(sizeof(char) * 64);

    if (output == NULL){
        printf("Malloc Failed!");
        exit(1);
    }

    printf("Please Enter the password input: minimum length is 9 characters, max is 64 \n");
    scanf("%s", output);
    int i = 0;
    char current = output[i];

    while (current != '\n'){
        if (current == 'e') {
            output[i] = '3';
        } else if (current == 'l') {
            output[i] = '1';
        } else if (current == 'a') {
            output[i] = '@';
        } else

       i++;
       current = output[i];
    }

    printf("Your bad password is: %s \n", output);

    exit(0);
}


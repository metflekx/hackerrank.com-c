#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();


//anything outside the "my code" section(line 31 to line 64) is given by hackerrank.com and not written by me.

int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    int *ptr = &n;
    //problem:
        // Write Your Code Here
        // if n is between 1 and 9 print lowercase word.
        //if n is > 9 print greater than 9.
        // limit 1 to 1000000000

    //my code:
           char *numbersAndChars[18] = {"1","2","3","4","5","6","7","8","9","one","two","three","four","five","six","seven","eight","nine"};

    if( n >= 1 && n <= 9)
    {
        for(int i = 0; i < 9;i++)
        {
            if(n == atoi(numbersAndChars[i]))
            {
                printf("%s\n", numbersAndChars[i + 9]);
                return 0;
            }
        }
    }
    else
        printf("Greater than 9");

//psuedo code:
    //n is given
    //check if n is 1 - 9
        //if n >= 1 && n <= 9;
    //if is
        //create an array(numbersAndChars[18])
        //put all the numbers from 1 to 9 followed by string's one to nine
        //(they are now 9 indexes apart from each other)
        //check if n equals to any of the numbers
            //build a for loop iterate over half the array
            //check if n matches any index(if n == numbersAndChars[i])
            //if does -> update n[i] to n[i + 9];return;
            //if does not -> do nothing.
    //if isn't
        //printf("greater than 9");

//my code end's here.
    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

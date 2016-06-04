//
//  mario.c
//  CS50Mario
//
//  Created by James Dylan Goldstein on 6/3/16.
//  Copyright © 2016 James Dylan Goldstein. All rights reserved.
//

#include <stdio.h>
#include "cs50.h"

int pyramidbuilder(rowheight){
    int counter, counterpound, counterspace, counterpoundtwo, counterspacetwo;
    int counterspacerow = rowheight - 1;
    int counterpoundrow = 2;
    int counterspacerowtwo = rowheight - 1;
    int counterpoundrowtwo = 2;
    
    for(counter = 1; counter <= rowheight; counter++){
            for(counterspace = 1; counterspace <= counterspacerow; counterspace++){
                printf(" ");
            }
            for(counterpound = 1; counterpound < counterpoundrow; counterpound++){
                printf("#");
            }
            printf("  ");
            for(counterpoundtwo = 1; counterpoundtwo < counterpoundrowtwo; counterpoundtwo++){
            printf("#");
            }
            for(counterspacetwo = 1; counterspacetwo <= counterspacerowtwo; counterspacetwo++){
            printf(" ");
            }
        printf("\n");
        counterpoundrow++;
        counterspacerow--;
        counterpoundrowtwo++;
        counterspacerowtwo--;
    }
    return 0;
}

int testpyramidparams(rowheight){
    if(rowheight <= 0 || rowheight > 23){
        getpyramidinfo();
    }
    else{
       printf("The height of pyramid is %i\n", rowheight);
        pyramidbuilder(rowheight);
    }
    return 0;
}

int getpyramidinfo(void){
    printf("Enter a height between 1 and 23:\n");
    int rowheight = GetInt();
    testpyramidparams(rowheight);
    return 0;
}

int main(void) {
    printf("Marios's Pyramid!\n");
    printf("Enter the height of the pyramid.\n");
    getpyramidinfo();
}

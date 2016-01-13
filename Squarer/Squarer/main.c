//
//  main.c
//  Squarer
//
//  Created by Cordavi on 1/13/16.
//  Copyright © 2016 Cordavi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int valueToSquare = 5;
    int squaredValue = (valueToSquare*valueToSquare);
    printf("\"%d\" squared is \"%d\".", valueToSquare, squaredValue);
    return 0;
}

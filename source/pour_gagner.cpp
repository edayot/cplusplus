//  Copyright (c) 2018 Antoine Tran Tan
//

#include <stdlib.h>
#include <time.h>

unsigned short pour_gagner()
{
    srand(time(NULL));
    return (rand() % 40) + 30;
}

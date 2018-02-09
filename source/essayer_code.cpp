//  Copyright (c) 2018 Antoine Tran Tan
//

#include <stdlib.h>
#include <time.h>

int essayer_code(unsigned short code)
{
    srand(time(NULL));
    static unsigned short guess =  rand() % 10000;

    return (code == guess);
}

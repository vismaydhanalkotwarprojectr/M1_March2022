#include "unity.h"

void setUp(void)
{

}

void tearDown(void)
{

}


int main(void)
{
    UnityBegin(void);

    RUN_TEST(test_Tic_Tac_Toe);

    return(UnityEnd());

}

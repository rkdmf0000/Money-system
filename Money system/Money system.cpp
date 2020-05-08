

#include <iostream>
#include "common_defination.h"
#include "money-relationship.h"



int main()
{
    MONEY_BUKKET hello;
    for (int i = 0; i < 100; i++) {
        hello += MONEY_TYPE::CENT_10;
        hello += MONEY_TYPE::CENT_50;
    }
    hello.print_collector();

    system("echo Please press any btn...");
    system("PAUSE > NUL");
    return 0;
}

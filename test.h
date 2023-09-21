#include <assert.h>
#include "coursework.h"

struct test
{
    float value;
    char choice;
    float expected;
    float result;
} CTEST;

void test_convertMM()
{
    switch (CTEST.choice)
    {

    case 'a':
        CTEST.value = 100.0;
        CTEST.expected = 10.0;
        CTEST.result = convertMM(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'b':
        CTEST.value = 100.0;
        CTEST.expected = 0.1;
        CTEST.result = convertMM(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'c':
        CTEST.value = 100.0;
        CTEST.expected = 0.0001;
        CTEST.result = convertMM(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'd':
        CTEST.value = 100.0;
        CTEST.expected = 0.32;
        CTEST.result = convertMM(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

void test_convertSM()
{
    switch (CTEST.choice)
    {

    case 'a':
        CTEST.value = 100.0;
        CTEST.expected = 1.0;
        CTEST.result = convertSM(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'b':
        CTEST.value = 100.0;
        CTEST.expected = 1000.0;
        CTEST.result = convertSM(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'c':
        CTEST.value = 100.0;
        CTEST.expected = 0.001;
        CTEST.result = convertSM(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'd':
        CTEST.value = 100.0;
        CTEST.expected = 10.0;
        CTEST.result = convertSM(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

void test_convertM()
{
    switch (CTEST.choice)
    {

    case 'a':
        CTEST.value = 100.0;
        CTEST.expected = 10000.0;
        CTEST.result = convertationM(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'b':
        CTEST.value = 100.0;
        CTEST.expected = 0.1;
        CTEST.result = convertationM(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'c':
        CTEST.value = 100.0;
        CTEST.expected = 0.0621;
        CTEST.result = convertationM(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'd':
        CTEST.value = 100.0;
        CTEST.choice = 'd';
        CTEST.expected = 328.08;
        CTEST.result = convertationM(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

void test_convertC()
{
    switch (CTEST.choice)
    {

    case 'a':
        CTEST.value = 100.0;
        CTEST.expected = 212.0;
        CTEST.result = convertC(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'b':
        CTEST.value = 100.0;
        CTEST.choice = 'b';
        CTEST.expected = 373.0;
        CTEST.result = convertC(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

void test_convertK()
{
    switch (CTEST.choice)
    {

    case 'b':
        CTEST.value = 274.0;
        CTEST.expected = 1.0;
        CTEST.result = convertK(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'a':
        CTEST.value = 274.0;
        CTEST.expected = 39.8;
        CTEST.result = convertK(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

void test_convertF()
{
    switch (CTEST.choice)
    {

    case 'a':
        CTEST.value = 33.0;
        CTEST.expected = 273.7;
        CTEST.result = convertF(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'b':
        CTEST.value = 33.0;
        CTEST.choice = 'b';
        CTEST.expected = 0.55;
        CTEST.result = convertF(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

void test_convertGR()
{
    switch (CTEST.choice)
    {

    case 'a':
        CTEST.value = 100.0;
        CTEST.expected = 0.1;
        CTEST.result = convertGR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'b':
        CTEST.value = 100.0;
        CTEST.choice = 'b';
        CTEST.expected = 100000.0;
        CTEST.result = convertGR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'c':
        CTEST.value = 100.0;
        CTEST.expected = 0.22;
        CTEST.result = convertGR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'd':
        CTEST.value = 100.0;
        CTEST.expected = 500.0;
        CTEST.result = convertGR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'e':
        CTEST.value = 100.0;
        CTEST.expected = 0.0001;
        CTEST.result = convertGR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

void test_convertKG()
{
    switch (CTEST.choice)
    {

    case 'a':
        CTEST.value = 100.0;
        CTEST.expected = 100000.0;
        CTEST.result = convertKG(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'b':
        CTEST.value = 100.0;
        CTEST.choice = 'b';
        CTEST.expected = 220.5;
        CTEST.result = convertKG(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'c':
        CTEST.value = 100.0;
        CTEST.expected = 100000000.0;
        CTEST.result = convertKG(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'd':
        CTEST.value = 100.0;
        CTEST.choice = 'd';
        CTEST.expected = 500000.0;
        CTEST.result = convertKG(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

void test_convertHW()
{
    switch (CTEST.choice)
    {

    case 'a':
        CTEST.value = 100.0;
        CTEST.expected = 10000000.0;
        CTEST.result = convertHW(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'b':
        CTEST.value = 100.0;
        CTEST.expected = 10000.0;
        CTEST.result = convertHW(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'c':
        CTEST.value = 100.0;
        CTEST.expected = 10.0;
        CTEST.result = convertHW(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'd':
        CTEST.value = 100.0;
        CTEST.expected = 22050.0;
        CTEST.result = convertHW(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

void test_convertSEC()
{
    switch (CTEST.choice)
    {

    case 'a':
        CTEST.value = 100.0;
        CTEST.expected = 1.66;
        CTEST.result = convertSEC(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'b':
        CTEST.value = 100.0;
        CTEST.expected = 0.027;
        CTEST.result = convertSEC(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'c':
        CTEST.value = 100.0;
        CTEST.expected = 0.001;
        CTEST.result = convertSEC(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'd':
        CTEST.value = 100.0;
        CTEST.expected = 0.00003;
        CTEST.result = convertSEC(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'e':
        CTEST.value = 100.0;
        CTEST.expected = 0.000003;
        CTEST.result = convertSEC(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

void test_convertMIN()
{
    switch (CTEST.choice)
    {

    case 'a':
        CTEST.value = 100.0;
        CTEST.expected = 6000.0;
        CTEST.result = convertMIN(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'b':
        CTEST.value = 100.0;
        CTEST.expected = 1.66;
        CTEST.result = convertMIN(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'c':
        CTEST.value = 100.0;
        CTEST.expected = 0.0694;
        CTEST.result = convertMIN(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'd':
        CTEST.value = 100.0;
        CTEST.expected = 0.0023;
        CTEST.result = convertMIN(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'e':
        CTEST.value = 100.0;
        CTEST.expected = 0.00019;
        CTEST.result = convertMIN(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

void test_convertHOUR()
{
    switch (CTEST.choice)
    {

    case 'a':
        CTEST.value = 100.0;
        CTEST.expected = 360000.0;
        CTEST.result = convertHOUR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'b':
        CTEST.value = 100.0;
        CTEST.expected = 6000.0;
        CTEST.result = convertHOUR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'c':
        CTEST.value = 100.0;
        CTEST.expected = 4.16;
        CTEST.result = convertHOUR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'd':
        CTEST.value = 100.0;
        CTEST.expected = 0.13;
        CTEST.result = convertHOUR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'e':
        CTEST.value = 100.0;
        CTEST.expected = 0.01;
        CTEST.result = convertHOUR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

void test_convertDAY()
{
    switch (CTEST.choice)
    {

    case 'a':
        CTEST.value = 100.0;
        CTEST.expected = 8640000.0;
        CTEST.result = convertDAY(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'b':
        CTEST.value = 100.0;
        CTEST.expected = 144000.0;
        CTEST.result = convertDAY(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'c':
        CTEST.value = 100.0;
        CTEST.expected = 2400.0;
        CTEST.result = convertDAY(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'd':
        CTEST.value = 100;
        CTEST.choice = 'd';
        CTEST.expected = 3.28;
        CTEST.result = convertDAY(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'e':
        CTEST.value = 100.0;
        CTEST.expected = 0.27;
        CTEST.result = convertDAY(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

void test_convertMONTH()
{
    switch (CTEST.choice)
    {

    case 'a':
        CTEST.value = 1.0;
        CTEST.expected = 2628000.0;
        CTEST.result = convertMONTH(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'b':
        CTEST.value = 1.0;
        CTEST.expected = 43800.0;
        CTEST.result = convertMONTH(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'c':
        CTEST.value = 1.0;
        CTEST.expected = 730.0;
        CTEST.result = convertMONTH(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'd':
        CTEST.value = 1.0;
        CTEST.expected = 30.417;
        CTEST.result = convertMONTH(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'e':
        CTEST.value = 1.0;
        CTEST.expected = 0.083;
        CTEST.result = convertMONTH(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

void test_convertYEAR()
{
    switch (CTEST.choice)
    {

    case 'a':
        CTEST.value = 1.0;
        CTEST.expected = 31540000.0;
        CTEST.result = convertYEAR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'b':
        CTEST.value = 1.0;
        CTEST.expected = 525600.0;
        CTEST.result = convertYEAR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'c':
        CTEST.value = 1.0;
        CTEST.expected = 8760.0;
        CTEST.result = convertYEAR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'd':
        CTEST.value = 1.0;
        CTEST.expected = 365.0;
        CTEST.result = convertYEAR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    case 'e':
        CTEST.value = 1.0;
        CTEST.expected = 12.0;
        CTEST.result = convertYEAR(CTEST.value, CTEST.choice);
        assert(CTEST.result == CTEST.expected);
        printf("\033[0;32m");
        printf("+------------------------+\n");
        printf("|test passed successfully|\n");
        printf("+------------------------+\n");
        printf("\033\033[0m");
        break;

    default:
        printf("| Invalid choice. |\n");
        break;
    }
}

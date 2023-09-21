#include <stdio.h>
#include "test.h"
#include <string.h>
#include <ctype.h>

int main()
{
    char units[10];
    printf("+---------------------------+\n");
    printf("| Enter a unit:|          ");
    scanf(" %s", units);
    printf("+---------------------------+\n");
    printf("\n\n");

    int P = 0;
    while (units[P] != '\0')
    {
        if (isdigit(units[P]))
        {
            printf("+------------------------------------+\n");
            printf("|input error: incorrect value entered|\n");
            printf("+------------------------------------+\n");
            return 1;
        }
        P++;
    }

    int isValidUnit = 0;
    while (!isValidUnit)
    {

        if (strcmp(units, "mm") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | MM to CM  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | MM to M  |\n");
            printf("+---------------------------+\n");
            printf("| c) |            | MM to KM  |\n");
            printf("+---------------------------+\n");
            printf("| d) |            | MM to PD  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertMM(CTEST.choice);
            isValidUnit = 1;
        }

        else if (strcmp(units, "cm") == 0)
        {

            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| Option |     | Conversion |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | CM to M |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | CM to MM |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | CM to KM |\n");
            printf("+---------------------------+\n");
            printf("| d) |           | CM to DC |\n");
            printf("+---------------------------+\n");

            printf("\n\n");
            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertSM(CTEST.choice);
            printf("\n\n");
            isValidUnit = 1;
        }

        else if (strcmp(units, "m") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| Option |     | Conversion |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | M to CM |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | M to KM |\n");
            printf("+---------------------------+\n");
            printf("| c) |            | M to Ml |\n");
            printf("+---------------------------+\n");
            printf("| d) |            | M to Ft |\n");
            printf("+---------------------------+\n");
            printf("\n\n");
            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertM(CTEST.choice);
            printf("\n\n");
            isValidUnit = 1;
        }

        else if (strcmp(units, "c") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | C to F  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | C to K  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertC(CTEST.choice);
            isValidUnit = 1;
        }

        else if (strcmp(units, "k") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | K to F  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | K to C  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertK(CTEST.choice);
            isValidUnit = 1;
        }

        else if (strcmp(units, "f") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | F to K  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | F to C  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertF(CTEST.choice);
            isValidUnit = 1;
        }

        else if (strcmp(units, "gr") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | GR to KG  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | GR to MG  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | GR to PD  |\n");
            printf("+---------------------------+\n");
            printf("| d) |            | GR to CR  |\n");
            printf("+---------------------------+\n");
            printf("| e) |            | GR to TN  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertGR(CTEST.choice);
            isValidUnit = 1;
        }

        else if (strcmp(units, "kg") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | KG to GR  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | KG to PD  |\n");
            printf("+---------------------------+\n");
            printf("| c) |            | KG to MG  |\n");
            printf("+---------------------------+\n");
            printf("| d) |            | KG to CR  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertKG(CTEST.choice);
            isValidUnit = 1;
        }

        else if (strcmp(units, "hw") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |            | HW to GR  |\n");
            printf("+---------------------------+\n");
            printf("| b) |            | HW to KG  |\n");
            printf("+---------------------------+\n");
            printf("| c) |            | HW to TN  |\n");
            printf("+---------------------------+\n");
            printf("| d) |            | HW to PD  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertHW(CTEST.choice);
            isValidUnit = 1;
        }

        else if (strcmp(units, "sec") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | SEC to MIN   |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | SEC to HOUR  |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | SEC to DAYS  |\n");
            printf("+---------------------------+\n");
            printf("| d) |           | SEC to MONTHS  |\n");
            printf("+---------------------------+\n");
            printf("| e) |           | SEC to YEAR  |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertSEC(CTEST.choice);
            isValidUnit = 1;
        }

        else if (strcmp(units, "min") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | MIN to SEC   |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | MIN to HOURS |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | MIN to DAYS  |\n");
            printf("+---------------------------+\n");
            printf("| d) |           | MIN to MONTHS |\n");
            printf("+---------------------------+\n");
            printf("| e) |           | MIN to YEARS |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertMIN(CTEST.choice);
            isValidUnit = 1;
        }

        else if (strcmp(units, "hour") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | HOURS to SEC  |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | HOURS to MIN  |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | HOURS to DAYS |\n");
            printf("+---------------------------+\n");
            printf("| d) |           | HOURS to MONTHS |\n");
            printf("+---------------------------+\n");
            printf("| e) |           | HOURS to YEARS |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertHOUR(CTEST.choice);
            isValidUnit = 1;
        }

        else if (strcmp(units, "day") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | DAYS to SEC  |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | DAYS to MIN  |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | DAYS to HOURS  |\n");
            printf("+---------------------------+\n");
            printf("| d) |           | DAYS to MONTHS |\n");
            printf("+---------------------------+\n");
            printf("| e) |           | DAYS to YEARS |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertDAY(CTEST.choice);
            isValidUnit = 1;
        }

        else if (strcmp(units, "month") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | MONTHS to SEC  |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | MONTHS to MIN  |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | MONTHS to HOURS |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | MONTHS to DAYS  |\n");
            printf("+---------------------------+\n");
            printf("| e) |           | MONTHS to YEARS |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertMONTH(CTEST.choice);
            isValidUnit = 1;
        }

        else if (strcmp(units, "year") == 0)
        {
            printf("|    Choose conversion:     |\n");
            printf("+---------------------------+\n");
            printf("| a) |           | YEARS to SEC  |\n");
            printf("+---------------------------+\n");
            printf("| b) |           | YEARS to MIN  |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | YEARS to HOURS |\n");
            printf("+---------------------------+\n");
            printf("| c) |           | YEARS to DAYS  |\n");
            printf("+---------------------------+\n");
            printf("| e) |           | YEARS to MONTHS |\n");
            printf("+---------------------------+\n");

            printf("+---------------------------+\n");
            printf("| Enter a choise:|         ");
            scanf(" %c", &CTEST.choice);
            printf("+---------------------------+\n");
            test_convertYEAR(CTEST.choice);
            isValidUnit = 1;
        }
        else
        {
            printf("+---------------------------+\n");
            printf("|      Invalid category.    |\n");
            printf("+---------------------------+\n");
            isValidUnit = 1;
        }
    }

    return 0;
}
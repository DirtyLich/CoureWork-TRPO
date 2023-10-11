// реализация наших функций
#include <stdio.h>
#include "courcework.h"

float result;
// Функция для конвертации САНТИМЕТРОВ
int convertSM(float value, char choise)
{
        switch (choise)
        {
        case 'a':
                result = value / 100;
                return result;

        case 'b':
                result = value * 10;
                return result;

        case 'c':
                result = value / 100000;
                return result;

        case 'd':
                result = value / 10;
                return result;

        default:

                break;
        }
}
// Функция для конвертации МЕТРОВ
int convertationM(float value, char choise)
{
        switch (choise)
        {
        case 'a':
                result = value * 100;
                return result;

        case 'b':
                result = value / 1000;
                return result;

        case 'c':
                result = value / 1069;
                return result;

        case 'd':
                result = value * 3.281;
                return result;

        default:
                break;
        }
}
// функция для конвертации МИЛЛИМЕТРОВ
int convertMM(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = value / 10;
                return result;
        case 'b':
                result = value / 1000;
                return result;
        case 'c':
                result = value * 1e+6;
                return result;
        case 'd':
                result = value / 304.8;
                return result;

        default:
                break;
        }
}
// функция для конвертации ЦЕЛЬСИЯ
int convertC(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = (value * 9 / 5) + 32;
                return result;
        case 'b':
                result = value + 273;
                return result;

        default:
                break;
        }
}
// функция для конвертации КЕЛЬВИНЫ
int convertK(float value, char choise)
{
        switch (choise)
        {
        case 'a':
                result = 1.8 * (value - 273) + 32;
                return result;
        case 'b':
                result = value - 273;
                return result;

        default:
                break;
        }
}

// функция для ФАРЕНГЕЙТ
int convertF(float value, char choise)
{
        switch (choise)
        {
        case 'a':
                result = (5.0 / 9.0) * (value - 32) + 273.15;
                return result;
        case 'b':
                result = (value - 32) * (5.0 / 9.0);
                return result;

        default:
                break;
        }
}
// функция для КИЛОГРАММОВ
int convertKG(float value, char choise)
{
        switch (choise)
        {
        case 'a':
                result = value * 1000;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Kilograms is equal to %.2f Grams. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'b':
                result = value * 2.205;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Kilograms is equal to %.2f Pounds. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'c':
                result = value * 1e+6;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Kilograms is equal to %.2f Miligrams. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'd':
                result = value * 5000;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Kilograms is equal to %.2f Carrats. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;

        default:
                printf("| Invalid choice. |\n");
                break;
        }
}
// функция для ГРАММОВ
int convertGR(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = value / 1000;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Grams is equal to %.3f Kilograms. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'b':
                result = value * 1000;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Grams is equal to %.2f Miligrams. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'c':
                result = value / 453.6;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Grams is equal to %.4f Pounds. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'd':
                result = value * 5;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Grams is equal to %.2f Carrats. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'e':
                result = value / 1e+6;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Grams is equal to %.6f Tonns. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;

        default:
                printf("| Invalid choice. |\n");
                break;
        }
}
// функция для ЦЕНТНЕРОВ
int convertHW(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = value * 100000;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Hundredweight is equal to %.2f Grams. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'b':
                result = value * 100;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Hundredweight is equal to %.2f Kilograms. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'c':
                result = value / 10;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Hundredweight is equal to %.2f Tons. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'd':
                result = value * 220.5;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Hundredweight is equal to %.2f Pounds. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;

        default:
                printf("| Invalid choice. |\n");
                break;
        }
}
// функция для СЕКУНД
int convertSEC(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = value / 60;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Seconds is equal to %.3f Minutes. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'b':
                result = value / 3600;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Seconds is equal to %.5f Hours. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'c':
                result = value / 86400;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Seconds is equal to %.6f Days. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'd':
                result = value / 2592000;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Seconds is equal to %.9f Months. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'e':
                result = value / 31536000;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Seconds is equal to %.10f Years. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;

        default:
                printf("| Invalid choice. |\n");
                break;
        }
}
// функция для МИНУТ
int convertMIN(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = value * 60;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Minutes is equal to %.2f Seconds. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'b':
                result = value / 60;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Minutes is equal to %.3f Hours. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'c':
                result = value / 1440;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Minutes is equal to %.4f Days. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'd':
                result = value / 43200;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Minutes is equal to %.6f Months. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'e':
                result = value / 525600;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Minutes is equal to %.7f Years. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;

        default:
                printf("| Invalid choice. |\n");
                break;
        }
}
// функция для ЧАСОВ
int convertHOUR(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = value * 3600;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Hours is equal to %.2f Seconds. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'b':
                result = value * 60;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Hours is equal to %.2f Minutes. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'c':
                result = value / 24;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Hours is equal to %.2f Days. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'd':
                result = value / 730;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Hours is equal to %.3f Months. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;
        case 'e':
                result = value / 8760;
                printf("\n\n");
                printf("+-----------------------------------------------------------+\n");
                printf("| Your answer is: %.2f Hours is equal to %.4f Years. \n", value, result);
                printf("+-----------------------------------------------------------+\n");
                return result;

        default:
                printf("| Invalid choice. |\n");
                break;
        }
}
// функция для ДНЕЙ
int convertDAY(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = value * 86400;
                return result;
        case 'b':
                result = value * 1440;
                return result;
        case 'c':
                result = value * 24;
                return result;
        case 'd':
                result = value / 30.417;
                return result;
        case 'e':
                result = value / 365;
                return result;

        default:
                break;
        }
}
// функция для конвертации МЕСЯЦА
int convertMONTH(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = value * 2.628e+6;
                return result;
        case 'b':
                result = value * 43800;
                return result;
        case 'c':
                result = value * 730;
                return result;
        case 'd':
                result = value * 30.417;
                return result;
        case 'e':
                result = value / 12;
                return result;

        default:
                break;
        }
}
// функция для конвертации года
int convertYEAR(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = value * 3.154e+7;
                return result;
        case 'b':
                result = value * 525600;
                return result;
        case 'c':
                result = value * 8760;
                return result;
        case 'd':
                result = value * 365;
                return result;
        case 'e':
                result = value * 12;
                return result;

        default:
                break;
        }
}
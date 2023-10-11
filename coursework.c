// реализация наших функций
#include <stdio.h>
#include "coursework.h"

float result;
// Функция для конвертации САНТИМЕТРОВ
float convertSM(float value, char choise)
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

        return 0;
}
// Функция для конвертации МЕТРОВ
float convertationM(float value, char choise)
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
        return 0;
}
// функция для конвертации МИЛЛИМЕТРОВ
float convertMM(float value, char choice)
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
        return 0;
}
// функция для конвертации ЦЕЛЬСИЯ
float convertC(float value, char choice)
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
        return 0;
}
// функция для конвертации КЕЛЬВИНЫ
float convertK(float value, char choise)
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
        return 0;
}

// функция для ФАРЕНГЕЙТ
float convertF(float value, char choise)
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
        return 0;
}
// функция для КИЛОГРАММОВ
float convertKG(float value, char choise)
{
        switch (choise)
        {
        case 'a':
                result = value * 1000;
                
                return result;
        case 'b':
                result = value * 2.205;
                
                return result;
        case 'c':
                result = value * 1e+6;
                
                return result;
        case 'd':
                result = value * 5000;
                
                return result;

        default:
                
                break;
        }
        return 0;
}
// функция для ГРАММОВ
float convertGR(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = value / 1000;
               
                return result;
        case 'b':
                result = value * 1000;
              
                return result;
        case 'c':
                result = value / 453.6;
                
                return result;
        case 'd':
                result = value * 5;
               
                return result;
        case 'e':
                result = value / 1e+6;
                
                return result;

        default:
                break;
        }
        return 0;
}
// функция для ЦЕНТНЕРОВ
float convertHW(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = value * 100000;
                
                return result;
        case 'b':
                result = value * 100;
                
                return result;
        case 'c':
                result = value / 10;
                
                return result;
        case 'd':
                result = value * 220.5;
                
                return result;

        default:
                
                break;
        }
        return 0;
}
// функция для СЕКУНД
float convertSEC(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = value / 60;
               
                return result;
        case 'b':
                result = value / 3600;
                
                return result;
        case 'c':
                result = value / 86400;
               
                return result;
        case 'd':
                result = value / 2592000;
                
                return result;
        case 'e':
                result = value / 31536000;
                
                return result;

        default:
                
                break;
        }
        return 0;
}
// функция для МИНУТ
float convertMIN(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = value * 60;
                
                return result;
        case 'b':
                result = value / 60;
                
                return result;
        case 'c':
                result = value / 1440;
                
                return result;
        case 'd':
                result = value / 43200;
                
                return result;
        case 'e':
                result = value / 525600;
                
                return result;

        default:
                
                break;
        }
        return 0;
}
// функция для ЧАСОВ
float convertHOUR(float value, char choice)
{
        switch (choice)
        {
        case 'a':
                result = value * 3600;
                
                return result;
        case 'b':
                result = value * 60;
                
                return result;
        case 'c':
                result = value / 24;
               
                return result;
        case 'd':
                result = value / 730;
               
                return result;
        case 'e':
                result = value / 8760;
                
                return result;

        default:
                
                break;
        }
        return 0;
}
// функция для ДНЕЙ
float convertDAY(float value, char choice)
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
        return 0;
}
// функция для конвертации МЕСЯЦА
float convertMONTH(float value, char choice)
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
        return 0;
}
// функция для конвертации года
float convertYEAR(float value, char choice)
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
        return 0;
}
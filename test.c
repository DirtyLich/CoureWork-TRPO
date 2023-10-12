#include <stdio.h>
#include <stdlib.h>
#include "ctest.h"
#include "coursework.h" // заголовочный файл с функциями

//проверка сантиметров
CTEST(CONVERT_SM, test_A) {
    float result = convertSM(100, 'a');
    ASSERT_DBL_NEAR(1.0, result);
}

CTEST(CONVERT_SM, test_B) {
    float result = convertSM(20, 'b');
    ASSERT_DBL_NEAR(200.0, result);
}

CTEST(CONVERT_SM, test_C) {
    float result = convertSM(10000.00, 'c');
    ASSERT_DBL_NEAR_TOL(0.1, result, 1e-6); 
}

CTEST(CONVERT_SM, test_D) {
    float result = convertSM(20, 'd');
    ASSERT_DBL_NEAR(2, result);
}

//проверка метров
CTEST(CONVERT_M, test_A) {
    float result = convertationM(100, 'a');
    ASSERT_DBL_NEAR(10000, result);
}

CTEST(CONVERT_M, test_B) {
    float result = convertationM(1000, 'b');
    ASSERT_DBL_NEAR(1, result);
}

CTEST(CONVERT_M, test_С) {
    float result = convertationM(4276, 'c');
    ASSERT_DBL_NEAR(4, result);
}

CTEST(CONVERT_M, test_D) {
    float result = convertationM(4, 'd');
    ASSERT_DBL_NEAR_TOL(13.12, result, 0.01); 
}

//проверка миллиметров
CTEST(CONVERT_MM, test_A) {
    float result = convertMM(100, 'a');
    ASSERT_DBL_NEAR(10, result);
}

CTEST(CONVERT_MM, test_B) {
    float result = convertMM(1000, 'b');
    ASSERT_DBL_NEAR(1, result);
}

CTEST(CONVERT_MM, test_C) {
    float result = convertMM(10000, 'c');
    ASSERT_DBL_NEAR_TOL(10000000000.00, result, 0.01); 
}

CTEST(CONVERT_MM, test_D) {
    float result = convertMM(1000, 'd');
    ASSERT_DBL_NEAR_TOL(3.28084, result, 0.01);
}

//проверка цельсия
CTEST(CONVERT_C, test_A) {
    float result = convertC(6, 'a');
    ASSERT_DBL_NEAR_TOL(42.8, result, 0.01); 
}

CTEST(CONVERT_C, test_B) {
    float result = convertC(100, 'b');
    ASSERT_DBL_NEAR(373, result);
}

//проверка кельвины
CTEST(CONVERT_K, test_A) {
    float result = convertK(300, 'a');
    ASSERT_DBL_NEAR_TOL(80.6, result, 0.01); 
}

CTEST(CONVERT_K, test_B) {
    float result = convertK(100, 'b');
    ASSERT_DBL_NEAR(-173, result);
}

//проверка фаренгейт
CTEST(CONVERT_F, test_A) {
    float result = convertF(300, 'a');
    ASSERT_DBL_NEAR_TOL(422.04, result, 0.01); 
}

CTEST(CONVERT_F, test_B) {
    float result = convertF(32, 'b');
    ASSERT_DBL_NEAR(0, result); 
}

//проверка килограммов
CTEST(CONVERT_KG, test_A) {
    float result = convertKG(1, 'a');
    ASSERT_DBL_NEAR(1000, result); 
}

CTEST(CONVERT_KG, test_B) {
    float result = convertKG(4, 'b');
    ASSERT_DBL_NEAR_TOL(8.82, result, 0.01);
}

CTEST(CONVERT_KG, test_C) {
    float result = convertKG(1, 'c');
    ASSERT_DBL_NEAR_TOL(1000000.0, result, 0.01);
}

CTEST(CONVERT_KG, test_D) {
    float result = convertKG(1, 'd');
     ASSERT_DBL_NEAR(5000, result);
}

//проверка граммов
CTEST(CONVERT_GR, test_A) {
    float result = convertGR(10000, 'a');
    ASSERT_DBL_NEAR(10, result); 
}

CTEST(CONVERT_GR, test_B) {
    float result = convertGR(1, 'b');
    ASSERT_DBL_NEAR(1000, result); 
}

CTEST(CONVERT_GR, test_C) {
    float result = convertGR(400, 'c');
    ASSERT_DBL_NEAR_TOL(0.88, result, 0.01);
}

CTEST(CONVERT_GR, test_D) {
    float result = convertGR(10, 'd');
    ASSERT_DBL_NEAR(50, result);
}

CTEST(CONVERT_GR, test_E) {
    float result = convertGR(15, 'e');
    ASSERT_DBL_NEAR_TOL(0.0015, result, 0.01);
}

//проверка центнеров
CTEST(CONVERT_HW, test_A) {
    float result = convertHW(1, 'a');
    ASSERT_DBL_NEAR(100000, result);
}

CTEST(CONVERT_HW, test_B) {
    float result = convertHW(1, 'b');
    ASSERT_DBL_NEAR(100, result);
}

CTEST(CONVERT_HW, test_C) {
    float result = convertHW(100, 'c');
    ASSERT_DBL_NEAR(10, result);
}

//проверка секунд
CTEST(CONVERT_SEC, test_A) {
    float result = convertSEC(360, 'a');
    ASSERT_DBL_NEAR(6, result);
}

CTEST(CONVERT_SEC, test_B) {
    float result = convertSEC(3600, 'b');
    ASSERT_DBL_NEAR(1, result);
}

//проверка минут
CTEST(CONVERT_MIN, test_A) {
    float result = convertMIN(6, 'a');
    ASSERT_DBL_NEAR(360, result);
}

CTEST(CONVERT_MIN, test_B) {
    float result = convertMIN(60, 'b');
    ASSERT_DBL_NEAR(1, result);
}

//проверка часов
CTEST(CONVERT_HOUR, test_A) {
    float result = convertHOUR(1, 'a');
    ASSERT_DBL_NEAR(3600, result);
}

CTEST(CONVERT_HOUR, test_B) {
    float result = convertHOUR(1, 'b');
    ASSERT_DBL_NEAR(60, result);
}

//проверка дней
CTEST(CONVERT_DAY, test_A) {
    float result = convertDAY(1, 'a');
    ASSERT_DBL_NEAR(86400, result);
}

CTEST(CONVERT_DAY, test_B) {
    float result = convertDAY(10, 'b');
    ASSERT_DBL_NEAR(14400, result);
}

CTEST(CONVERT_DAY, test_C) {
    float result = convertDAY(24, 'c');
    ASSERT_DBL_NEAR(576, result);
}

//проверка месяца
CTEST(CONVERT_MONTH, test_A) {
    float result = convertMONTH(1, 'a');
    ASSERT_DBL_NEAR_TOL(2.6, result, 1e-5);
}

CTEST(CONVERT_MONTH, test_B) {
    float result = convertMONTH(1, 'b');
    ASSERT_DBL_NEAR(43800, result,);
}

CTEST(CONVERT_MONTH, test_C) {
    float result = convertMONTH(1, 'c');
    ASSERT_DBL_NEAR(730, result,);
}

CTEST(CONVERT_MONTH, test_D) {
    float result = convertMONTH(1, 'd');
    ASSERT_DBL_NEAR_TOL(30, result, 0.01);
}

CTEST(CONVERT_MONTH, test_E) {
    float result = convertMONTH(12, 'e');
    ASSERT_DBL_NEAR(1, result,);
}
//для года
CTEST(CONVERT_YEAR, test_A) {
    float result = convertYEAR(1, 'a');
    ASSERT_DBL_NEAR_TOL(3, result, 1e-7);
}

CTEST(CONVERT_YEAR, test_B) {
    float result = convertYEAR(1, 'b');
    ASSERT_DBL_NEAR_TOL(5, result, 1e-5);
}

CTEST(CONVERT_YEAR, test_C) {
    float result = convertYEAR(1, 'c');
    ASSERT_DBL_NEAR(8760, result,);
}

CTEST(CONVERT_YEAR, test_D) {
    float result = convertYEAR(1, 'd');
    ASSERT_DBL_NEAR(365, result,);
}

CTEST(CONVERT_YEAR, test_E) {
    float result = convertYEAR(1, 'e');
    ASSERT_DBL_NEAR(12, result,);
}
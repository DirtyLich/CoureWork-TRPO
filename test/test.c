#include <stdio.h>
#include <stdlib.h>
#include "../src/LibConvert/coursework.h"
#include <ctest.h>
#include "../thirdparty/ctest.h" // заголовочный файл с функциями

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
CTEST(CONVERTM, testA) {
    float result = convertationM(100, 'a');
    ASSERT_DBL_NEAR(10000, result);
}

CTEST(CONVERTM, testB) {
    float result = convertationM(1000, 'b');
    ASSERT_DBL_NEAR(1, result);
}

CTEST(CONVERTM, testC) {
    float result = convertationM(4276, 'c');
    ASSERT_DBL_NEAR(4, result);
}

CTEST(CONVERTM, testD) {
    float result = convertationM(4, 'd');
    ASSERT_DBL_NEAR_TOL(13.12, result, 0.01); 
}

//проверка миллиметров
CTEST(CONVERTMM, testA) {
    float result = convertMM(100, 'a');
    ASSERT_DBL_NEAR(10, result);
}

CTEST(CONVERTMM, testB) {
    float result = convertMM(1000, 'b');
    ASSERT_DBL_NEAR(1, result);
}

CTEST(CONVERTMM, testC) {
    float result = convertMM(10000, 'c');
    ASSERT_DBL_NEAR_TOL(10000000000.00, result, 0.01); 
}

CTEST(CONVERTMM, testD) {
    float result = convertMM(1000, 'd');
    ASSERT_DBL_NEAR_TOL(3.28084, result, 0.01);
}

//проверка цельсия
CTEST(CONVERTC, testA) {
    float result = convertC(6, 'a');
    ASSERT_DBL_NEAR_TOL(42.8, result, 0.01); 
}

CTEST(CONVERTC, testB) {
    float result = convertC(100, 'b');
    ASSERT_DBL_NEAR(373, result);
}

//проверка кельвины
CTEST(CONVERTK, testA) {
    float result = convertK(300, 'a');
    ASSERT_DBL_NEAR_TOL(80.6, result, 0.01); 
}

CTEST(CONVERTK, testB) {
    float result = convertK(100, 'b');
    ASSERT_DBL_NEAR(-173, result);
}

//проверка фаренгейт
CTEST(CONVERTF, testA) {
    float result = convertF(300, 'a');
    ASSERT_DBL_NEAR_TOL(422.04, result, 0.01); 
}

CTEST(CONVERTF, testB) {
    float result = convertF(32, 'b');
    ASSERT_DBL_NEAR(0, result); 
}

//проверка килограммов
CTEST(CONVERTKG, testA) {
    float result = convertKG(1, 'a');
    ASSERT_DBL_NEAR(1000, result); 
}

CTEST(CONVERTKG, testB) {
    float result = convertKG(4, 'b');
    ASSERT_DBL_NEAR_TOL(8.82, result, 0.01);
}

CTEST(CONVERTKG, testC) {
    float result = convertKG(1, 'c');
    ASSERT_DBL_NEAR_TOL(1000000.0, result, 0.01);
}

CTEST(CONVERTKG, testD) {
    float result = convertKG(1, 'd');
     ASSERT_DBL_NEAR(5000, result);
}

//проверка граммов
CTEST(CONVERTGR, testA) {
    float result = convertGR(10000, 'a');
    ASSERT_DBL_NEAR(10, result); 
}

CTEST(CONVERTGR, testB) {
    float result = convertGR(1, 'b');
    ASSERT_DBL_NEAR(1000, result); 
}

CTEST(CONVERTGR, testC) {
    float result = convertGR(400, 'c');
    ASSERT_DBL_NEAR_TOL(0.88, result, 0.01);
}

CTEST(CONVERTGR, testD) {
    float result = convertGR(10, 'd');
    ASSERT_DBL_NEAR(50, result);
}

CTEST(CONVERTGR, testE) {
    float result = convertGR(15, 'e');
    ASSERT_DBL_NEAR_TOL(0.0015, result, 0.01);
}

//проверка центнеров
CTEST(CONVERTHW, testA) {
    float result = convertHW(1, 'a');
    ASSERT_DBL_NEAR(100000, result);
}

CTEST(CONVERTHW, testB) {
    float result = convertHW(1, 'b');
    ASSERT_DBL_NEAR(100, result);
}

CTEST(CONVERTHW, testC) {
    float result = convertHW(100, 'c');
    ASSERT_DBL_NEAR(10, result);
}

//проверка секунд
CTEST(CONVERTSEC, testA) {
    float result = convertSEC(360, 'a');
    ASSERT_DBL_NEAR(6, result);
}

CTEST(CONVERTSEC, testB) {
    float result = convertSEC(3600, 'b');
    ASSERT_DBL_NEAR(1, result);
}

//проверка минут
CTEST(CONVERTMIN, testA) {
    float result = convertMIN(6, 'a');
    ASSERT_DBL_NEAR(360, result);
}

CTEST(CONVERTMIN, testB) {
    float result = convertMIN(60, 'b');
    ASSERT_DBL_NEAR(1, result);
}

//проверка часов
CTEST(CONVERTHOUR, testA) {
    float result = convertHOUR(1, 'a');
    ASSERT_DBL_NEAR(3600, result);
}

CTEST(CONVERTHOUR, testB) {
    float result = convertHOUR(1, 'b');
    ASSERT_DBL_NEAR(60, result);
}

//проверка дней
CTEST(CONVERTDAY, testA) {
    float result = convertDAY(1, 'a');
    ASSERT_DBL_NEAR(86400, result);
}

CTEST(CONVERTDAY, testB) {
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
    ASSERT_DBL_NEAR_TOL(2628000.0000000, result, 0.1);
}

CTEST(CONVERT_MONTH, test_B) {
    float result = convertMONTH(1, 'b');
    ASSERT_DBL_NEAR(43800, result);
}

CTEST(CONVERT_MONTH, test_C) {
    float result = convertMONTH(1, 'c');
    ASSERT_DBL_NEAR(730, result);
}

CTEST(CONVERT_MONTH, test_D) {
    float result = convertMONTH(15, 'd');
    ASSERT_DBL_NEAR_TOL(456.26, result, 0.01);
}

CTEST(CONVERT_MONTH, test_E) {
    float result = convertMONTH(12, 'e');
    ASSERT_DBL_NEAR(1, result);
}
//для года
CTEST(CONVERT_YEAR, test_A) {
    float result = convertYEAR(15, 'a');
    ASSERT_DBL_NEAR_TOL(473100000.00, result, 0.01);
}

CTEST(CONVERT_YEAR, test_B) {
    float result = convertYEAR(10, 'b');
    ASSERT_DBL_NEAR_TOL(5256000.00, result, 0.01);
}

CTEST(CONVERT_YEAR, test_C) {
    float result = convertYEAR(1, 'c');
    ASSERT_DBL_NEAR(8760, result);
}

CTEST(CONVERT_YEAR, test_D) {
    float result = convertYEAR(1, 'd');
    ASSERT_DBL_NEAR(365, result);
}

CTEST(CONVERT_YEAR, test_E) {
    float result = convertYEAR(1, 'e');
    ASSERT_DBL_NEAR(12, result);
}
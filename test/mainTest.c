
#define CTEST_MAIN
#include <ctest.h>
// uncomment lines below to enable/disable features. See README.md for details
#define CTEST_SEGFAULT
//#define CTEST_NO_COLORS
//#define CTEST_COLOR_OK

int main(int argc, const char *argv[])
{
    int result = ctest_main(argc, argv);
    return result;
}

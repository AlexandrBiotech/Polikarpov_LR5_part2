#include "CUTE/cute.h"
#include "CUTE/cute_runner.h"
#include "Polikarpov_MathTask.h"

void testProductOfLastNDigits() {
    ASSERT_EQUAL(6, productOfLastNDigits(123, 2));
    ASSERT_EQUAL(24, productOfLastNDigits(1234, 3));
}

void testCountDigits() {
    ASSERT_EQUAL(3, countDigits(123));
    ASSERT_EQUAL(1, countDigits(5));
}

void testIsNaturalNumber() {
    ASSERT(isNaturalNumber("123"));
    ASSERT(!isNaturalNumber("-123"));
    ASSERT(!isNaturalNumber("abc"));
}

int main() {
    cute::suite s;
    s.push_back(CUTE(testProductOfLastNDigits));
    s.push_back(CUTE(testCountDigits));
    s.push_back(CUTE(testIsNaturalNumber));
    cute::ide_listener<> listener;
    cute::makeRunner(listener)(s, "Unit Tests");
    return 0;
}
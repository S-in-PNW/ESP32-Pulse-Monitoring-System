#include <unity.h>

int mapBpmToZone(int bpm) {
    if (bpm < 60) return 0;   // resting
    if (bpm < 100) return 1;  // normal
    return 2;                 // elevated
}

void test_mapBpmToZone() {
    TEST_ASSERT_EQUAL(0, mapBpmToZone(50));
    TEST_ASSERT_EQUAL(1, mapBpmToZone(75));
    TEST_ASSERT_EQUAL(2, mapBpmToZone(120));
}

void setUp() {}    // optional
void tearDown() {} // optional

int main(int argc, char **argv) {
    UNITY_BEGIN();
    RUN_TEST(test_mapBpmToZone);
    return UNITY_END();
}

//
// Udi Goldman 301683264 , Aviya Goldfarb 201509635
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "GameLogicTest.h"

GTEST_API_ int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}
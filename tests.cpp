// tests.cpp
#include "mat.h"
#include <gtest/gtest.h>
 
TEST(dodajTest, dodawanie) { 
    ASSERT_EQ(6, dodaj(4.0, 2.0));
    ASSERT_EQ(18.0, dodaj(16.5, 1.5));
    ASSERT_EQ(25.4, dodaj(12.0, 13.4));
    ASSERT_EQ(0, dodaj(0.0, 0.0));
}
 
 TEST(odejmijTest, odejmowanie) { 
    ASSERT_EQ(2.0, odejmij(4.0, 2.0));
    ASSERT_EQ(15.0, odejmij(16.5, 1.5));
    ASSERT_EQ(0.0, odejmij(0.0, 0.0));
}

TEST(pomnozTest, mnozenie) { 
    ASSERT_EQ(8.0, pomnoz(4.0, 2.0));
    ASSERT_EQ(18.0, pomnoz(6.0, 3.0));
    ASSERT_EQ(25.0, pomnoz(5.0, 5.0));
    ASSERT_EQ(0.0, pomnoz(0.0, 0.0));
}

TEST(podzielTest, dzielenie) { 
    ASSERT_EQ(2.0, podziel(4.0, 2.0));
    ASSERT_EQ(16.0, podziel(16, 1.0));
    ASSERT_EQ(25, podziel(50.0, 2.0));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


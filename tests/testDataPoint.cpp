#include <gtest/gtest.h>
#include "DataPoint.hpp"


TEST(DataPoint, storage_test)
{ 
    auto utc = PlaceDataLib::FormattedDataPoint<PlaceDataLib::dataFormat::UTC>("testing");
    EXPECT_EQ(utc.data, "testing");

    auto uni = PlaceDataLib::FormattedDataPoint<PlaceDataLib::dataFormat::UNIXTIME>(12345432);
    EXPECT_EQ(uni.data, 12345432);

    auto id = PlaceDataLib::FormattedDataPoint<PlaceDataLib::dataFormat::USERID>("Hackyboi");
    EXPECT_EQ(id.data, "Hackyboi");

    auto x = PlaceDataLib::FormattedDataPoint<PlaceDataLib::dataFormat::XPOS>(1323);
    EXPECT_EQ(x.data, 1323);

    auto y = PlaceDataLib::FormattedDataPoint<PlaceDataLib::dataFormat::YPOS>(0);
    EXPECT_EQ(y.data, 0);

    int arr[] = {1,2};
    auto pos = PlaceDataLib::FormattedDataPoint<PlaceDataLib::dataFormat::POS>(arr);
    EXPECT_EQ(pos.data[0], 1);
    EXPECT_EQ(pos.data[1], 2);

    auto col = PlaceDataLib::FormattedDataPoint<PlaceDataLib::dataFormat::COLORHEX>("#FFFFFF");
    EXPECT_EQ(col.data, "#FFFFFF");
}

TEST(DataPoint, operator_test)
{
    auto utc = PlaceDataLib::FormattedDataPoint<PlaceDataLib::dataFormat::UTC>("testing");
    EXPECT_EQ(utc.data, utc);

    auto uni = PlaceDataLib::FormattedDataPoint<PlaceDataLib::dataFormat::UNIXTIME>(12345432);
    EXPECT_EQ(uni.data, uni);

    auto id = PlaceDataLib::FormattedDataPoint<PlaceDataLib::dataFormat::USERID>("Hackyboi");
    EXPECT_EQ(id.data, id);

    auto x = PlaceDataLib::FormattedDataPoint<PlaceDataLib::dataFormat::XPOS>(1323);
    EXPECT_EQ(x.data, x);

    auto y = PlaceDataLib::FormattedDataPoint<PlaceDataLib::dataFormat::YPOS>(0);
    EXPECT_EQ(y.data, y);

    int arr[] = {1,2};
    auto pos = PlaceDataLib::FormattedDataPoint<PlaceDataLib::dataFormat::POS>(arr);
    EXPECT_EQ(pos.data[0], pos[0]);
    EXPECT_EQ(pos.data[1], pos[1]);

    auto col = PlaceDataLib::FormattedDataPoint<PlaceDataLib::dataFormat::COLORHEX>("#FFFFFF");
    EXPECT_EQ(col, col.data);
}
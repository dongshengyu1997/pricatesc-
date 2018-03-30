#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>
using namespace boost::gregorian;
int main() {
    date d(2017,3,18);
    auto ymd = d.year_month_day();
    std::cout<<ymd.day<<ymd.month<<ymd.year;
    //to
    std::cout<<d.day_of_week()<<d.day_of_year()
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
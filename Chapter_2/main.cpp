#include <iostream>
#include <string>
//#include "Sales_data.h"

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

void ex1_20() {
    Sales_data item;
    int price = 0;
    while(std::cin >> item.bookNo >> item.units_sold >> price) {
        std::cout << item.bookNo << item.units_sold << price << '\n';
    }
};

void ex1_21() {
    Sales_data currentBook, totalBook;
    double currentPrice = 0, averagePrice = 0;
    for (int i = 0; i < 2; ++i) {
        std::cin >> currentBook.bookNo >> currentBook.units_sold >> currentPrice;
        totalBook.bookNo = currentBook.bookNo;
        totalBook.units_sold += currentBook.units_sold;
        totalBook.revenue += currentBook.units_sold * currentPrice;
        averagePrice += currentPrice;
    }

    averagePrice /= 2;
    std::cout << totalBook.bookNo << '\n' << totalBook.units_sold
        << '\n' << totalBook.revenue << '\n' << averagePrice << '\n';
}

void ex1_22() {
    Sales_data currentBook, totalBook;
    double currentPrice = 0;
    int i = 0;
    while (std::cin >> currentBook.bookNo >> currentBook.units_sold >> currentPrice) {
        std::cout << i << '\n';
        totalBook.bookNo = currentBook.bookNo;
        totalBook.units_sold += currentBook.units_sold;
        totalBook.revenue += currentBook.units_sold * currentPrice;
        i++;
    }

    std::cout << "outside loop";
    double averagePrice = totalBook.revenue / totalBook.units_sold;
    std::cout << totalBook.bookNo << '\n' << totalBook.units_sold
              << '\n' << totalBook.revenue << '\n' << averagePrice << '\n';
}

Sales_data GetNewTotalBook () {
    Sales_data totalBook;
    return totalBook;
}

void ex1_23() {
    Sales_data currentBook, totalBook;
    double currentPrice = 0, averagePrice;

    std::cin >> currentBook.bookNo >> currentBook.units_sold >> currentPrice;
    totalBook.bookNo = currentBook.bookNo;
    totalBook.units_sold += currentBook.units_sold;
    totalBook.revenue += currentBook.units_sold * currentPrice;

    while (std::cin >> currentBook.bookNo >> currentBook.units_sold >> currentPrice) {
        if (currentBook.bookNo != totalBook.bookNo)
        {
            averagePrice = totalBook.revenue / totalBook.units_sold;

            std::cout << "-------" << '\n' << totalBook.bookNo << '\n' << totalBook.units_sold
                      << '\n' << totalBook.revenue << '\n' << averagePrice << '\n';
            currentPrice = 0.0;
            totalBook.units_sold = 0.0;
            totalBook.revenue = 0.0;
        }
        totalBook.bookNo = currentBook.bookNo;
        totalBook.units_sold += currentBook.units_sold;
        totalBook.revenue += currentBook.units_sold * currentPrice;
    }

    averagePrice = totalBook.revenue / totalBook.units_sold;
    std::cout << "-------" << '\n' << totalBook.bookNo << '\n' << totalBook.units_sold
              << '\n' << totalBook.revenue << '\n' << averagePrice << '\n';
}

int main() {
//    Sales_data data1, data2;
//
//    double price = 0;
//    std::cin >> data1.bookNo >> data1.units_sold >> price;
//    data1.revenue = data1.units_sold * price;
//
//    std::cin >> data2.bookNo >> data2.units_sold >> price;
//    data2.revenue = data2.units_sold * price;
//
//    if (data1.bookNo == data2.bookNo) {
//        unsigned totalCnt = data1.units_sold + data2.units_sold;
//        double totalRevenue = data1.revenue + data2.revenue;
//        // print: ISBN, total revenue, average price per book
//        std::cout << data1.bookNo << " " << totalCnt
//            << " " << totalRevenue << " ";
//        if (totalCnt != 0)
//            std::cout << totalRevenue/totalCnt << std::endl;
//        else
//            std::cout << "(no sales)" << std::endl;
//        return 0; // indicate success
//    } else { // transactions weren't for the same ISBN
//        std::cerr << "Data must refer to the same ISBN"
//                    << std::endl;
//        return -1; //indicate failure
//    }

    ex1_23();
    return 0;
}

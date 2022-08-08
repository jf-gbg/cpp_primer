#include <iostream>
#include <string>
#include "headers/Sales_data.h"

using std::cin;
using std::cout;


void ex1_20() {
    Sales_data item;
    int price = 0;
    while(cin >> item.bookNo >> item.units_sold >> price) {
        cout << item.bookNo << item.units_sold << price << '\n';
    }
};

void ex1_21() {
    Sales_data currentBook, totalBook;
    double currentPrice = 0, averagePrice = 0;
    for (int i = 0; i < 2; ++i) {
        cin >> currentBook.bookNo >> currentBook.units_sold >> currentPrice;
        totalBook.bookNo = currentBook.bookNo;
        totalBook.units_sold += currentBook.units_sold;
        totalBook.revenue += currentBook.units_sold * currentPrice;
        averagePrice += currentPrice;
    }

    averagePrice /= 2;
    cout << totalBook.bookNo << '\n' << totalBook.units_sold
        << '\n' << totalBook.revenue << '\n' << averagePrice << '\n';
}

void ex1_22() {
    Sales_data currentBook, totalBook;
    double currentPrice = 0;
    int i = 0;
    while (cin >> currentBook.bookNo >> currentBook.units_sold >> currentPrice) {
        cout << i << '\n';
        totalBook.bookNo = currentBook.bookNo;
        totalBook.units_sold += currentBook.units_sold;
        totalBook.revenue += currentBook.units_sold * currentPrice;
        i++;
    }

    cout << "outside loop";
    double averagePrice = totalBook.revenue / totalBook.units_sold;
    cout << totalBook.bookNo << '\n' << totalBook.units_sold
              << '\n' << totalBook.revenue << '\n' << averagePrice << '\n';
}

Sales_data GetNewTotalBook () {
    Sales_data totalBook;
    return totalBook;
}

void ex1_23() {
    Sales_data currentBook, totalBook;
    double currentPrice = 0, averagePrice;

    cin >> currentBook.bookNo >> currentBook.units_sold >> currentPrice;
    totalBook.bookNo = currentBook.bookNo;
    totalBook.units_sold += currentBook.units_sold;
    totalBook.revenue += currentBook.units_sold * currentPrice;

    while (cin >> currentBook.bookNo >> currentBook.units_sold >> currentPrice) {
        if (currentBook.bookNo != totalBook.bookNo)
        {
            averagePrice = totalBook.revenue / totalBook.units_sold;

            cout << "-------" << '\n' << totalBook.bookNo << '\n' << totalBook.units_sold
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
    cout << "-------" << '\n' << totalBook.bookNo << '\n' << totalBook.units_sold
              << '\n' << totalBook.revenue << '\n' << averagePrice << '\n';
}

int main() {
//    Sales_data data1, data2;
//
//    double price = 0;
//    cin >> data1.bookNo >> data1.units_sold >> price;
//    data1.revenue = data1.units_sold * price;
//
//    cin >> data2.bookNo >> data2.units_sold >> price;
//    data2.revenue = data2.units_sold * price;
//
//    if (data1.bookNo == data2.bookNo) {
//        unsigned totalCnt = data1.units_sold + data2.units_sold;
//        double totalRevenue = data1.revenue + data2.revenue;
//        // print: ISBN, total revenue, average price per book
//        cout << data1.bookNo << " " << totalCnt
//            << " " << totalRevenue << " ";
//        if (totalCnt != 0)
//            cout << totalRevenue/totalCnt << endl;
//        else
//            cout << "(no sales)" << endl;
//        return 0; // indicate success
//    } else { // transactions weren't for the same ISBN
//        cerr << "Data must refer to the same ISBN"
//                    << endl;
//        return -1; //indicate failure
//    }
    Sales_data data1, data2;
    double price1, price2;

    cin >> data1.bookNo >> data1.units_sold >> price1;
    cin >> data2.bookNo >> data2.units_sold >> price2;

    if (data1.bookNo == data2.bookNo)
    {
        data1.revenue = data1.units_sold * price1;
        data2.revenue = data2.units_sold * price2;

        Sales_data outputData;
        outputData.bookNo = data1.bookNo;
        outputData.revenue = data1.revenue + data2.revenue;
        outputData.units_sold = data1.units_sold + data2.units_sold;

        double averagePrice = outputData.revenue / outputData.units_sold;

        cout << outputData.bookNo << '\n' << outputData.revenue
            << '\n' << outputData.units_sold << '\n' << averagePrice << '\n';
    }

    return 0;
}

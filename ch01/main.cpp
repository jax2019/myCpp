//
// Created by zhengyouhong on 2022/1/27.
//

#include <iostream>

#include "Sales_item.h"


using namespace std;

void fun1_9();

void fun1_10();

void fun1_11();

void fun1_14_1();

void fun1_14_2();

void fun1_14_3();

void fun1_16();

void fun1_20();

void fun1_21();

void fun1_22();

int main() {
//    fun1_9();
//    fun1_10();
//    fun1_11();
//    fun1_14_1();
//    fun1_14_2();
//    fun1_14_3();
//    fun1_16();
    fun1_22();
    return 0;
}

/**
 * 练习1.9  p11
 */
void fun1_9() {
    int i = 50;
    int total = 0;
    while (i <= 100) {
        total += i;
        i++;
    }
    cout << "结果为=" << total << endl;
}

/**
 * 练习1.10 p11
 */
void fun1_10() {
    int num = 10;
    while (num >= 0) {
        cout << num << "\t";
        num--;
    }
}

/**
 * 练习1.11 p11
 */
void fun1_11() {
    cout << "请输入两个整数\n 整数a:";
    int a, b = 0;
    cin >> a;
    cout << "整数b:";
    cin >> b;

    while (a != b) {
        if (b > a) {
            cout << a++ << "\t";
        } else {
            cout << b++ << "\t";
        }
    }
    cout << a;
}

/**
 * 练习1.14  修改1.9
 */
void fun1_14_1() {
    int total = 0;
    for (int i = 50; i <= 100; ++i) {
        total += i;
    }
    cout << "结果=" << total;
}

/**
 * 练习1.14  修改1.10
 */
void fun1_14_2() {
    for (int i = 10; i >= 0; --i) {
        cout << i << "\t";
    }
}

/**
 * 练习1.14 修改1.11
 */
void fun1_14_3() {
    cout << "请输入两个整数\n 整数a:";
    int a, b = 0;
    cin >> a;
    cout << "整数b:";
    cin >> b;

    for (; a != b; a > b ? b++ : a++) {
        if (a > b) {
            cout << b << "\t";
        } else {
            cout << a << "\t";
        }
    }
    cout << a;
}

/**
 * 练习1.16 p15
 */
void fun1_16() {
    int total = 0;
    int input_value = 0;
    cout << "请输入要输入的数字：";
    while (cin >> input_value) {
        total += input_value;
    }
    cout << "您输入的数的总和为 = " << total << endl;
}

/**
 * 练习1.20 p20
 *
 * 本人使用的clion环境正常，
 * 用命令行没有输出，还不知道什么原因
 *
 * args.txt内容为:
 * 1001 2 100
 *
 * 输出为：
 * 1001 50 5000 100
 */
void fun1_20() {
    Sales_item item;
    cin >> item;
    cout << item << endl;
}

/**
 * 练习1.21 p20
 */
void fun1_21() {
    Sales_item item1;
    Sales_item item2;
    cout << "请输入第一本书销售数据：";
    cin >> item1;
    cout << "\n";
    cout << "请输入第二本书销售数据：";
    cin >> item2;
    cout << "\n";
    if (item1.isbn() == item2.isbn()) {
        cout << "销售和为：";
        cout << item1 + item2 << endl;
    } else {
        cerr << "两本书的isbn不一致";
    }
}

/**
 *  * 练习1.22 p20
 */
void fun1_22() {
    Sales_item total_item;
    Sales_item current_item;
    cout << "请输入书籍销售数据：\n";
    while (cin >> current_item) {
        //根据java经验 首次输入  total_item没有初始化？？
        if (total_item.isbn() == "") {
            total_item = current_item;
        } else {
            total_item += current_item;
        }
        cout << "请输入书籍销售数据：\n";
    }
    cout << "总的销售数据为：" << total_item << endl;
}











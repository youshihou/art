//
//  basic-exception.cpp
//  cplusplus-learning
//
//  Created by Ankui on 6/20/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

#if 0
class Exception {
public:
    virtual const char * what() const = 0;
    virtual int code() const = 0;
};
class DividdException: public Exception {
public:
    const char * what() const override {
        return "must be not zero.";
    }
    int code() const override {
        return 404;
    }
};


int divide(int v1, int v2) {
    if (v2 == 0) {
        throw DividdException();
    }
    return v1 / v2;
}
#endif


//int main(int argc, const char * argv[]) {
int basic_exception() {
//    try {
//        int a = 10;
//        int b = 0;
//        divide(a, b);
//    } catch (const DividdException &e) {
//        cout << "capture exception - " << e.code() << ", " << e.what() << endl;
//    }
    
    
//    try {
//        int a = 10;
//        int b = 0;
//        divide(a, b);
//    } catch (const Exception &e) {
//        cout << "capture exception - " << e.code() << ", " << e.what() << endl;
//    }
//
//
//    bad_alloc e;
    
    
    return 0;
}

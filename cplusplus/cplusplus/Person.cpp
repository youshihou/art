//
//  Person.cpp
//  cplusplus-learning
//
//  Created by Ankui on 6/14/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include "Person.hpp"
#include <iostream>

using namespace std;

namespace AK {
    void Person:: setAge(int age) {
        m_age = age;
        cout << __func__ << endl;
    }

    int Person:: getAge() {
        cout << __func__ << endl;
        return m_age;
    }

    Person:: Person() {
        m_age = 0;
        cout << __func__ << endl;
    }

    Person:: ~Person() {
        cout << __func__ << endl;
    }

    Person:: Person(int age, int height) :m_age(age), m_height(height) { // initialization list must be write here
        
    }

}



//
//  basic-constructor.cpp
//  cplusplus-learning
//
//  Created by Ankui on 6/14/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

#if 0
class Person_ {
//private: // class default private
    int m_age;
    
public:
    void run() {
        cout << __func__ << ", age = " << m_age << endl;
    }
};

struct Person {
//private: // struct default public
    int m_id;
    int m_age;
    int m_height;
    
    void run() {
        cout << __func__ << ", age = " << m_age << endl;
//        this->m_age; // this is a pointer
//        this.m_age; // ERROR!!! . left must be object
    }
    
    void display() {
        cout << "id = " << m_id << ", age = " << m_age << ", height = " << m_height << endl;
    }
    
    
    Person () {
        m_age = 0;
        cout << __func__ << endl;
    }
    Person (int age) {
        m_age = age;
        cout << __func__ << ", age = " << m_age << endl;
    }
};



Person g_p0; // call Person()
Person g_p1(); // CARE!!! function declaration
Person g_p2(10); // call Person(int)

#endif

//int main(int argc, const char * argv[]) {
int basic_constructor() {
    {
#if 0
//        Person_ pp;
//        pp.m_age = 20; // CARE!!!
//        pp.run();
//
//        Person p;
//        p.m_age = 10;
//        p.run();
//        Person *p1 = &p;
//        p1->m_age = 20;
    
        
        Person p;
        p.m_id = 10;
        p.m_age = 20;
        p.m_height = 30;
        
        Person *pp = (Person *)&p.m_age;
        pp->m_id = 40;
        pp->m_age = 50;
        
        p.display(); // CARE!!! this == p, is &p
        pp->display(); // CARE!!! this == pp, is &p.m_age
#endif
    
    }
    {
#if 0
        int *p = (int *)malloc(4);
        *p = 10;
        free(p);

        int *pp = new int;
        *pp = 10;
        delete pp;

        char *c = new char[4];
        *c = 10;
        delete [] c;
        
        int *p0 = new int;
        int *p1 = new int();
        int *p2 = new int(5);
        cout << *p0 << endl << *p1 << endl << *p2 << endl;
        delete p0;
        delete p1;
        delete p2;
        int *p3 = new int[3];
        int *p4 = new int[3]();
        int *p5 = new int[3]{};
        int *p6 = new int[3]{ 5 };
        cout << *p3 << endl << *p4 << endl << *p5 << endl << *p6 << endl;
        delete [] p3;
        delete [] p4;
        delete [] p5;
        delete [] p6;
        
#endif
    }
    {
#if 0
        Person p;
        p = Person(10);
        
        Person *p2 = new Person; // call constructor
        delete p2;
        
        Person *p3 = (Person *)malloc(sizeof(Person)); // not call constructor
        p3->m_age = 10;
        free(p3);
#endif
    }
    {
#if 0
        Person p0; // call Person()
        Person p1(); // CARE!!! function declaration
        Person p2(11); // call Person(int)
        
        
        Person *p3 = new Person; // call Person()
        Person *p4 = new Person(); // call Person()
        Person *p5 = new Person(12); // call Person(int)
        delete p3;
        delete p4;
        delete p5;
        
#endif
    }
    {
#if 0
        Person p;
        Person *p1 = new Person;
        Person *p2 = new Person();
        cout << g_p0.m_age << endl;
        cout << p.m_age << endl;
        cout << p1->m_age << endl;
        cout << p2->m_age << endl;
        
        Person *p3 = new Person[3];
        cout << p3[0].m_age << endl;
        Person *p4 = new Person[3]();
        cout << p4[0].m_age << endl;
        Person *p5 = new Person[3]{};
        cout << p5[0].m_age << endl;
        delete p1;
        delete p2;
        delete [] p3;
        delete [] p4;
        delete [] p5;
#endif
    }
    

    return 0;
}

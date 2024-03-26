#pragma once
#include <iostream>

using namespace std;

class Figure

{
protected:
    string name;

public:
    virtual void print() = 0;

    string get_name();

    void set_name(string name);

};


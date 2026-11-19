//
// Created by HONGLI on 2026/11/19.
//
#include "CowString.h"
#include <cassert>

int StringData::next_id = 0;

CowString::CowString(const char* str) {
    // TODO
    _data = new StringData(str);
    _ref_count = new int(1);
}

CowString::~CowString() {
    // TODO
    --(*_ref_count);
    if (*_ref_count == 0) {
        delete _data;
        delete _ref_count;
    }
}

CowString::CowString(const CowString& other) {
    // TODO
    _data = other._data;
    _ref_count = other._ref_count;
    ++(*_ref_count);
}

char CowString::read(int index) const {
    // TODO
    return _data->buffer[index];
}

void CowString::write(int index, char c) {
    // TODO
    if (*_ref_count > 1) {
        StringData* new_data = new StringData(*_data);
        int* new_ref_count = new int(1);

        --(*_ref_count);

        _data = new_data;
        _ref_count = new_ref_count;
    }

    _data->buffer[index] = c;
}

void testCowString() {
    CowString s1("hello");
    CowString s2(s1);

    // 测试拷贝构造
    assert(s1.get_count() == 2);
    assert(s2.get_count() == 2);

    // 测试读取
    std::cout << s2.read(0) << std::endl;
    assert(s1.get_count() == 2);

    // 测试写时复制
    s2.write(0, 'X');

    std::cout << s1.read(0) << std::endl;
    std::cout << s2.read(0) << std::endl;

    assert(s1.get_count() == 1);
    assert(s2.get_count() == 1);

    // 测试独占情况下直接修改
    s2.write(1, 'Y');

    assert(s1.read(1) == 'e');
    assert(s2.read(1) == 'Y');
    assert(s1.get_count() == 1);
    assert(s2.get_count() == 1);
}

int main() {
    testCowString();
    return 0;
}
#pragma once
#include<iostream>
#include<string>

class Item{
public:
    Item(std::string name ="정보없음", int price = -1, int id =-1) : name_(name), price_(price), id_(id) {}
    virtual ~Item() {}

    // 정보를 출력하는 멤버 함수
    virtual void PrintInfo() const;
    std::string GetName() const;
    virtual std::string PrintName() const;
private:
    std::string name_;
    int price_;
    int id_;

};


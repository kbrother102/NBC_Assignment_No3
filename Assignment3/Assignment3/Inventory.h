#pragma once
#include"Item.h"

template<typename T>
class Inventory
{
public:
    Inventory(int capacity = 10) : capacity_(capacity), size_(0) { 
        if (capacity_ < 0){ capacity_ = 1;}

            pItems_ = new T[capacity_]; }
    ~Inventory() { delete[] pItems_; }

    void AddItem(const T& Item)
    {
        if(size_< capacity_)
        {
            pItems_[size_] = Item;
            size_++;
        }
        else
        {
            std::cout << "인벤토리가 꽉 찼습니다!!" << std::endl;
        }
    }

    void RemoveLastItem() {
        size_--;
        if (size_ <= 0)
        {
            size_ = 0;
            std::cout << "인벤토리가 비어있습니다." << std::endl;
        }
        
    }
    int GetSize() const { return size_; }
    int GetCapacity() const { return capacity_; }
    void PrintAllItems() const {
        for (int i = 0; i < size_ ; i++)
        {
            std::cout << i+1 <<"번 칸 : ";
            pItems_[i].PrintInfo();
        }
        if (size_ == 0)
        {
            std::cout << "아무것도... 없다!" << std::endl;
        }
    }

private:
    T* pItems_;
    int capacity_;
    int size_;

};


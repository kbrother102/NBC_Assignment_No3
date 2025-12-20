#include<iostream>
#include"Inventory.h"
#include"Item.h"
#include"Weapon.h"
#include"Potion.h"

using namespace std;





int main()
{
    Inventory<Item>* itemInventory = new Inventory<Item>(); // 아이템 인벤토리 하나 제작!
    Item* testItems = new Item[12];
    int n;
    testItems[0] = Item("TheSadOnion", 15, 1);
    testItems[1] = Item("TheInnerEye", 15, 2);
    testItems[2] = Item("SpoonBender", 15, 3);
    testItems[3] = Item("Cricket'sHead", 7, 4);
    testItems[4] = Item("MyReflection", 17, 5);
    testItems[5] = Item("음률", 512, 23);
    testItems[6] = Item("푸른사과", 30, 54);
    testItems[7] = Item("TheBookofBelial", 15, 34);
    testItems[8] = Item("TheNecronomicon", 10, 35);
    testItems[9] = Item("DrownSinger", 407, 9);
    //---------------나머지는 용량초과------
    testItems[10] = Item("RooftopCat", 120, 36);
    testItems[11] = Item("Oortcloud", 10, 37);


    cout << "인벤토리 용량 : " << itemInventory->GetCapacity() << endl;
    
    for (int i = 0; i < 12; i++)
    {
        cout << testItems[i].PrintName() <<"를 넣었습니다. " << endl;
        itemInventory->AddItem(testItems[i]);
    }
    
    cout << "인벤토리에 들어있는 내용물 " << endl;
    itemInventory->PrintAllItems();
    cout << "--------------------------------------" << endl;
    cout << "내용물 하나 지우기" << endl;
    itemInventory->RemoveLastItem();
    cout << "인벤토리에 들어있는 내용물 " << endl;
    itemInventory->PrintAllItems();
    cout << "--------------------------------------" << endl;
    cout << "다른 내용물 넣기 : 오르트 구름" << endl;
    itemInventory->AddItem(testItems[11]);

    cout << "인벤토리에 들어있는 내용물 " << endl;
    itemInventory->PrintAllItems();

    cout << "--------------------------------------" << endl;
    cout << "내용물 n개 지우고 n개 추가하기" << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        itemInventory->RemoveLastItem();
    }
    cout << "인벤토리에 들어있는 내용물 " << endl;
    itemInventory->PrintAllItems();

    
    delete[] testItems;
    delete itemInventory;
}
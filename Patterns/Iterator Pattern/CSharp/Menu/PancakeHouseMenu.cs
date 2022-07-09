using System;
using System.Collections.Generic;

using Iterator;

namespace Menu
{
    public class PancakeHouseMenu
    {
        public PancakeHouseMenu() 
        {
            MenuItems = new List<MenuItem>();

            AddItem("K&B 팬케이크 세트", "스크렘블 에그와 토스트가 곁들어진 팬케이크", true, 2.99);
            AddItem("레귤러 팬케이크 세트", "달걀 프라이와 소시지가 곁들어진 팬케이크", false, 2.99);
            AddItem("블루베리 팬케이크 세트", "신선한 블루베리와 블루베리 시럽으로 만든 팬케이크", true, 3.49);
            AddItem("와플", "취향에 따라 블루베리나 딸기를 얹을 수 있는 와플", true, 3.59);
        }

        public void AddItem(string name, string description, bool vegetarian, double price) 
            => MenuItems.Add(new MenuItem(name, description, vegetarian, price));

        public List<MenuItem> MenuItems { get; private set; }

        public Iterator.Iterator CreateIterator() => new Iterator.PancakeHouseMenuIterator(MenuItems);
    }
}
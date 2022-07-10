using System;

using Iterator;

namespace Menu
{
    public class DinnerMenu
    {
        private const int MaxItems = 6;
        private int numberOfItems;

        public DinnerMenu() 
        {
            numberOfItems = 0;
            MenuItems = new MenuItem[MaxItems];

            AddItem("채식주의자용 BLT", "통밀 위에 콩고기 베이컨, 상추, 토마토를 얹은 메뉴", true, 2.99);
            AddItem("BLT", "통밀 위에 베이컨, 상추, 토마토를 얹은 메뉴", false, 2.99);
            AddItem("오늘의 스프", "감자 샐러드를 곁들인 오늘의 스프", false, 3.29);
            AddItem("핫도그", "사워크라우트, 갖은 양념, 양파, 치즈가 겉들여진 핫도그", false, 3.05);
        }

        public void AddItem(string name, string description, bool vegetarian, double price) 
        {
            if (numberOfItems >= MaxItems) Console.WriteLine("죄송합니다, 메뉴가 꽉 찼습니다. 더 이상 추가할 수가 없습니다.");
            else MenuItems[numberOfItems++] = new MenuItem(name, description, vegetarian, price);
        }

        public MenuItem[] MenuItems { get; private set; }

        public Iterator.Iterator CreateIterator() => new Iterator.DinnerMenuIterator(MenuItems);
    }
}
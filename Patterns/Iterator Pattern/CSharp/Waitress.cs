using System;

using Iterator;
using Menu;

public class Waitress
{
    private Menu.PancakeHouseMenu pancakeHouseMenu;
    private Menu.DinnerMenu dinnerMenu;

    public Waitress(Menu.PancakeHouseMenu pancakeHouseMenu, Menu.DinnerMenu dinnerMenu) 
    {
        this.pancakeHouseMenu = pancakeHouseMenu;
        this.dinnerMenu = dinnerMenu;
    }

    public void PrintMenu() 
    {
        Iterator.Iterator pancakeIterator = pancakeHouseMenu.CreateIterator();
        Iterator.Iterator dinnerIterator = dinnerMenu.CreateIterator();

        Console.WriteLine("메뉴\n----\n아침 메뉴");
        PrintMenu(pancakeIterator);

        Console.WriteLine("\n점심 메뉴");
        PrintMenu(dinnerIterator);
    }

    public void PrintMenu(Iterator.Iterator iterator)
    {
        while (iterator.HasNext())
        {
            Menu.MenuItem menuItem = iterator.Next();
            Console.WriteLine($"{menuItem.Name}, {menuItem.Price} -- {menuItem.Description}");
        }
    }
}
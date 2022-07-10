using Menu;

public class Waitress
{
    private Menu.MenuComponent allMenus;

    public Waitress(MenuComponent allMenus) {
        this.allMenus = allMenus;
    }

    public void PrintMenu() => allMenus.Print();
}
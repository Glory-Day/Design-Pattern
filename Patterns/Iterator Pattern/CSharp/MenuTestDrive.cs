using Menu;

public class MenuTestDrive
{
    public static void Main(string[] args)
    {
        Menu.PancakeHouseMenu pancakeHouseMenu = new PancakeHouseMenu();
        Menu.DinnerMenu dinnerMenu = new DinnerMenu();

        Waitress waitress = new Waitress(pancakeHouseMenu, dinnerMenu);

        waitress.PrintMenu();
    }
}
#include "Menu/PancakeHouseMenu.cpp"
#include "Menu/DinerMenu.cpp"
#include "Waitress.cpp"

int main() {
    PancakeHouseMenu* pancakeHouseMenu = new PancakeHouseMenu();
    DinerMenu* dinerMenu = new DinerMenu();

    Waitress* waitress = new Waitress(pancakeHouseMenu, dinerMenu);

    waitress->printMenu();
}
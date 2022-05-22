#include "./Singleton.cpp"

int main() {
    Singleton::getInstance().log();
    Singleton::getInstance().log();
}
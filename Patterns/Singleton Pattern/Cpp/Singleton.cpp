#include <iostream>
#include <memory>
#include <mutex>

using namespace std;

class Singleton {
private:
    Singleton() = default;
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static unique_ptr<Singleton> __instance;
    static once_flag __once;

public:
    static Singleton& getInstance();

    void log() {
        cout << "Instance : " << __instance.get() << '\n';
    }

    ~Singleton() {
        cout << "Delete instance : " << this << '\n';
    }
};

unique_ptr<Singleton> Singleton::__instance;
once_flag Singleton::__once;

Singleton& Singleton::getInstance() {
    call_once(__once, []() {
        __instance.reset(new Singleton);
        cout << "Create instance : " << __instance.get() << '\n';
    });

    return (*__instance.get());
}
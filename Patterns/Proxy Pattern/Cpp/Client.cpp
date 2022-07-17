#include "Subject/Proxy.cpp"

int main() {
    Proxy* proxy = new Proxy("/web/image/test.png");
    proxy->render();

    delete proxy;
}
using MenuItem = Menu.MenuItem;

namespace Iterator
{
    public interface Iterator
    {
        public bool HasNext();
        public MenuItem Next();
    }
}
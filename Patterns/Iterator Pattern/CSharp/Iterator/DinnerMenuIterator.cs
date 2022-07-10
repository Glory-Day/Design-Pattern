using MenuItem = Menu.MenuItem;

namespace Iterator
{
    public class DinnerMenuIterator : Iterator
    {
        private MenuItem[] items;
        private int position;

        public DinnerMenuIterator(MenuItem[] items) 
        {
            this.items = items;
            position = 0;
        }

        public MenuItem Next() => items[position++];

        public bool HasNext() 
        {
            if (position >= items.Length || items[position] == null) return false;
            return true;
        }
    }
}
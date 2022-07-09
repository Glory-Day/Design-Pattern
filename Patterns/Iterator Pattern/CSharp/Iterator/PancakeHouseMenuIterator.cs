using System.Collections.Generic;

using MenuItem = Menu.MenuItem;

namespace Iterator
{
    public class PancakeHouseMenuIterator : Iterator
    {
        private List<MenuItem> items;
        private int position;

        public PancakeHouseMenuIterator(List<MenuItem> items) 
        {
            this.items = items;
            position = 0;
        }

        public MenuItem Next() => items[position++];

        public bool HasNext() 
        {
            if (position >= items.Count || items[position] == null) return false;
            return true;
        }
    }
}
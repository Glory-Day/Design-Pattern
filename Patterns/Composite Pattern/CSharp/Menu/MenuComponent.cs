using System;
using System.Collections.Generic;

namespace Menu
{
    public class MenuComponent
    {
        public virtual void Add(MenuComponent menuComponent) {}

        public virtual void Remove(MenuComponent menuComponent) {}

        public virtual MenuComponent? GetChild(int i) { return null; }

        public virtual string? Name { get; set; }

        public virtual string? Description { get; set; }

        public virtual bool Vegetarian { get; set; }

        public virtual double Price { get; set; }

        public virtual void Print() {}
    }
}
using System;
using System.Collections.Generic;

namespace Menu
{
    public class Menu : MenuComponent
    {
        private List<MenuComponent> menuComponents;
        private string? name;
        private string? description;

        public Menu(string? name, string? description) : base() {
            menuComponents = new List<MenuComponent>();
            Name = name;
            Description = description;
        }

        public override void Add(MenuComponent menuComponent) => menuComponents.Add(menuComponent);

        public override void Remove(MenuComponent menuComponent) => menuComponents.Remove(menuComponent);

        public override MenuComponent? GetChild(int i) => menuComponents[i];

        public override string? Name { get => name ?? "NoText"; set => name = value; }

        public override string? Description { get => description ?? "NoText"; set => description = value; }

        public override void Print() {
            Console.WriteLine($"\n{name}, {description}");
            Console.WriteLine("----------------------");

            foreach (var menuComponent in menuComponents) {
                menuComponent.Print();
            }
        }
    }
}
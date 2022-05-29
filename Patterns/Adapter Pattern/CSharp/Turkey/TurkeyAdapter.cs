using Duck;

namespace Turkey
{
    public class TurkeyAdapter : Duck.Duck
    {
        private Turkey turkey;

        public TurkeyAdapter(Turkey turkey)
        {
            this.turkey = turkey;
        }

        public void Quack() => turkey.Gobble();

        public void Fly()
        {
            for (var i = 0; i < 5; i++)
            {
                turkey.Fly();
            }
        }
    }
}
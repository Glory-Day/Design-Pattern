using static Singleton;

public class Program
{
    public static void Main(string[] args)
    {
        var instanceA = Singleton.Instance;
        instanceA.Log();

        var instanceB = Singleton.Instance;
        instanceB.Log();
    }
}

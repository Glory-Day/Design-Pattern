using Proxy = Subject.Proxy;

public class Client
{
    public static void Main(string[] argc)
    {
        Proxy proxy = new Proxy("/web/image/test.png");
        proxy.Render();
    }
}
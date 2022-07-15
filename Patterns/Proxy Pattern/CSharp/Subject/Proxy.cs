namespace Subject
{
    public class Proxy : Image
    {
        private Image? image;
        private string path;

        public Proxy(string path) 
        {
            image = null;
            this.path = path;
        }

        public void Render() 
        {
            if (image == null) image = new Subject(path);
            image.Render();
        }
    }
}
public class Rectangle{
    private int length;
    private int width;

    public Rectangle(){
        length=12;
        width=7;
    }

    public Rectangle(int length,int width){
        this.length=length;
        this.width=width;
    }

    public void setLength(int length){
        this.length=length;
    }

    public void setWidth(int width){
        this.width=width;
    }

    public int getLength(){
        return length;
    }

    public int getWidth(){
        return width;
    }
    public int computeArea(){
        return length*width;
    }
    public int computePerimeter(){
        return 2*(length+width);
    }

    public void printDetails(){
        System.out.println("Length is "+ getLength());
        System.out.println("Width is "+ getWidth());
        System.out.println("Area is "+ computeArea());
        System.out.println("Perimeter is "+ computePerimeter());
    }
}
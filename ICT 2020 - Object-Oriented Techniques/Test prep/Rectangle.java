public class Rectangle {
    private double width;
    private double height;


    public Rectangle(){
        this.width=1.0;
        this.height=1.0;
    }


    public Rectangle(double width,double height){
        this.width=width;
        this.height=height;
    }

    public void setWidth(double width){
        this.width=width;
    }

    public double getWidth(){
        return width;
    }

    public void setHeight(double height){
        this.height=height;
    }

    public double getHeight(){
        return height;
    }

    public double getArea(){
        double result1=this.width*this.height;
        return result1;
    }

    public double getPerimeter(){
        double result2=2*(this.height+this.width);
        return result2;
    }

    public void display(){
        System.out.println("Rectangle width: "+getWidth());
        System.out.println("Rectangle height: "+getHeight());
        System.out.println("Rectangle area: "+getArea());
        System.out.println("Rectangle perimeter: "+getPerimeter());
    }
}
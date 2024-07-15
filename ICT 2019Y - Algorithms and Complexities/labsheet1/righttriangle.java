import java.util.Scanner;

public class righttriangle {
    public static void main(String[] args){
        Scanner scanIn=new Scanner(System.in);
        int x1,x2,x3;
        System.out.print("Enter side: ");
        x1=scanIn.nextInt();
        System.out.print("Enter side: ");
        x2=scanIn.nextInt();
        System.out.print("Enter side: ");
        x3=scanIn.nextInt();

        int hypo = Math.max(Math.max(x1,x2),x3);

        int side1=0,side2=0;
        if(hypo==x1){
             side1=x2;
             side2=x3;

        }else if (hypo==x2){
            side1=x1;
            side2=x3;}
            else if (hypo==x3){
                side1=x1;
                side2=x2;}
        System.out.print("Right");
        System.out.print("\n");
        if(side1*side1+side2*side2==hypo*hypo){
            System.out.print("right");
        }else{
            System.out.print("not right");
        }

        
       

        scanIn.close();
    }

    
}

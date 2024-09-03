public class LinearSearch{
     public static void main(String []args){
         int[] numbers= {0,-10,100,1000,500,38};
         
         int guess=500;
         for(int i=0;i<numbers.length;i++){
             if(numbers[i]==guess){
                 System.out.println(i);
                 System.exit(1);
             }
         }
     }
}

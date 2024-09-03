public class Maximum{
     public static void main(String []args){
         int[] numbers= {0,-10,100,1000,500,38};
         int maximum=numbers[0];
         for(int number:numbers){
             if(number>maximum){
                 maximum=number;
             }
         }
         System.out.println(maximum);
     }
}

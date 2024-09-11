abstract class Animal {
     abstract void sound();
}


class Dog extends Animal {
     void sound(){
          System.out.println("Woof");
     }
}

class Cat extends Animal{
     void sound(){
          System.out.println("Meow");
     }
}
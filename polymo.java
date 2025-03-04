class Animal {
    public void animalSound() {
        System.out.println("The animal makes sound");
    }
}

class Pig extends Animal {
    
    public void animalSound() {
        System.out.println("The pig says wee wee");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal ob1 = new Animal();
        ob1.animalSound(); 
        Animal ob2 = new Pig();
        ob2.animalSound();
    }
}


interface A{
    int age=10; //final n static
    void show(); // public abstract
}

interface B extends A{
 // have access of A items
}

class C implements B{
    public void show(){
        System.out.println("in C");
    }
}

public class interfaces{
    public static void main(String[] args) {
        C obj= new C();
        obj.show();
        System.out.println(B.age);
        
        
    }

}
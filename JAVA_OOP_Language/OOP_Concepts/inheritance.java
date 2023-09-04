class A {
    protected int i, j;

    void show() {
        System.out.print(i + " " + j + " ");
    }
}


class B extends A{
    int k;
    void showall(){
        show();
        System.out.println(" "+k);
    }
}
public class inheritance {
    public static void main(String[] args) {
        A obj= new A();
        B obj1= new B();

        obj.i=10;
        obj.j=100;
        obj.show();

        // class B

        obj1.i=10;
        obj1.j=100;
        obj1.k=1000;
        obj1.showall();

        
    }
    
}

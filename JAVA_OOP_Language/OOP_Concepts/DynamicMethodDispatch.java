class A{
    void show(){
        System.out.println("In A");
    }
}
class B extends A{
    void show(){
        System.out.println("In B");
    }
}
class C extends A{
    void show(){
        System.out.println("In C");
    }
}


public class DynamicMethodDispatch {
    public static void main(String[] args) {
        A obj= new A();
        obj.show();
        obj=new B();
        obj.show();
        obj=new C();
        obj.show();
        
        /*Dynamic Method Dispatch is related to run time Polymorphism. 
output - In A
In B
In C

In this case we use method overriding on run time like in the first time obj.show() was called since we initialized the obj with class A it prints "In A", in the second time the obj was initialized with Class B ( reassigned the memory address on obj) and  obj.show() was called and it printed "In B"( method overriding). Same for C. */
    }
}

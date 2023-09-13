class A{
    //super() in constructor
    A(){
        System.out.println("A cons");
    }
}

class B extends A{
    //super() in constructor
    B(){
        System.out.println("B cons");

    }
    B(int n){
        this();
        System.out.println("B INT cons");
    }
}

class C extends B{
    //super() in constructor
    C(){
        super(3);
        System.out.println("C cons");
    }
}

//super in vars & methods

class D{
    int i, j;
    void show(){
        System.out.println(i +" "+ j);
    }
}

class E extends D{
    void show (){
        super.i=10;
        super.j=110;
        super.show();
    }

}

public class supernThis {
    public static void main(String[] args) {
        C obj= new C(); 
        /*output will be A cons
        B cons
        C cons since we have a default super(); in every constructor, super() just passes params to its parent class and execute as a stack, we can easily manipulate the output through changing the params in the super method.
        
        Adding super(3) in the C constructor
        as a result the C constructor's super(3); will check its parent class's constructor which needs a single int param and again since that single int constructor has a default super() it will head to its parents class's constructor which has no params
        output - A cons
        B INT cons
        C cons*/

        E obj1= new E(); 
        obj1.show();
        /* super.varname changes or initialize the varname of its parent class however we have to do it in a constructor or in a function, in this case show(); is overridden in order to use parent class's show() we have to use super.show(), we cant use only show(); inside of it bcz int that case it will be recursion with no base condition */
        obj= new C(); 
        /* output - A cons
B cons
B INT cons
C cons

bcz this(); executed its own class's constructor which has no params note : this(); only executes it's own class's constructors not its methods
*/

        
    }
    
}

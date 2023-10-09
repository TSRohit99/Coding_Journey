

abstract class fig{
    double d1,d2;
    fig(double a, double b){
        d1=a;
        d2=b;
    }
  abstract double area();

}

class rec extends fig{
    rec(double a, double b){
        super(a, b);
    }

    double area(){
        return d1*d2;
    }
}

class tri extends fig{
    tri(double a, double b){
        super(a, b);
    }

    double area(){
        return 0.5*d1*d2;
    }
}

public class abstractSuperMethodOverridding {
    public static void main(String[] args) {
        rec r= new rec(10, 20);
        tri t= new tri(10, 20);

        fig f;

        f=r;
        System.out.println("rec: "+ f.area());
        f=t;
        System.out.println("tri: "+ f.area());
    }
}

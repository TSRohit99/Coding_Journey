
 class box {
        
        int h;
        int w;
        int d;
        int vol(){
            return h*w*d;
        }
    }

class circle{
    int r;
    double area(){
        return 3.14*r*r;
    }
}

class converter{
    int d;
    int d2t(){
        return d*110;
    }
}

class student{
    int marks;
    boolean info= true;
}

class boy{
    String gender;
    boolean state;
    boolean verification(){
        if(gender=="male")
          state= true;
        return state;
    }
    
}



public class classes {
    public static void main (String args[]){

        box b= new box();
        b.h=10;
        b.w=20;
        b.d=30;
        box b1= new box();
        b1=b;
        System.out.println("Volume : "+ b1.vol());
        
        circle c= new circle();
        c.r=15;
        System.out.println("Area :" +c.area());

        converter bdt = new converter();
        bdt.d=17;
        System.out.println("Dollars to BDT : "+ bdt.d2t());

        student s= new student();
        s.marks=10;
        if(s.marks<90)
          s.info=false;
        if(s.info)
        System.out.println("He is a good student ");
        else
        System.out.println("He is a bad student ");

        boy by= new boy();
        by.gender="male";
        if(by.verification())
        System.out.println("He is a boy, confirmed");
        else
         System.out.println("He is not a boy, confirmed");
         System.out.println("checking git");


    }

    
}

class num{
    int myabs(int x){
        return (x>0? x:-x);
        
    }
    double myabs(double y){
        return (y>0? y:-y);
        
    }

    boolean myabs(int x,int y){
        return (x>y);
    }
}

class vol{
    int h;
    int d;
    int w;

    vol(int height, int width, int depth){
        h=height;
        d=depth;
        w=width;
    }

    vol(int l){
        h=d=w=l;
    }

    int volume(){
        return h*d*w;
    }
}



public class methodOverloading {
    public static void main(String[] args) {
        num n = new num();
        System.out.println(n.myabs(-10));
        System.out.println(n.myabs(-10.56));
        System.out.println(n.myabs(10,5));

        vol v= new vol(10);
        System.out.println("Vol of cube "+ v.volume());
        vol v1= new vol(10, 20, 30);
        System.out.println("Vol of rect "+ v1.volume());
        
    }
    
}

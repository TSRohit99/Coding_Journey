public class typeCasting {
    public static void main (String args[]){
      //casting & conversion
        int a=240;
        float f=a; //conversion Auto
        int c=(int)f;//casting
        
        System.out.println(c);
        byte b;
        b=(byte) a;
        System.out.println(b);

        //dynamic init 
        //float r= (float)Math.sqrt(a);//we can use (class.method) when its static void (it executes on RUN TIME), have to typecast since math.sqrt returns double 
        
        float h=12.31f;//have to use f after value
        System.out.println(h);  
    }
    
}

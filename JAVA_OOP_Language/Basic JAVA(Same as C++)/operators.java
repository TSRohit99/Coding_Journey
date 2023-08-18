public class operators {
    public static void main(String args[]){

        //operrators are same as c +,_,/,%,etccc
        //System.out.println((int)42.5%10); //type casted the float value
        // int a=10;
        // int b=a++;
        // System.out.println(b);
        // System.out.println(a);
        // int c=++a;
        // System.out.println(c);
        byte a=0b1010;
        byte b= (byte)~a;//have to type cast maybe ~ it returns int
        System.out.println(b);

        int x,y;
        x=0b100000000;//256
       x>>=1; //right sift 1 decreases half 2 do another half
        System.out.println(x);
        x<<=2; //left sift 1 increases double 2 do another double
        System.out.println(x);

        // not valid like C
        // if(x)
        //  System.out.println("ok");
        if(1<2)
         System.out.println("ok");
        boolean k;
        k=2>1;
        System.out.println(k);




    }
    
}

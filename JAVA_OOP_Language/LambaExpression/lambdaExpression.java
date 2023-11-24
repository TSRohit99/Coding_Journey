
/* Lamba expression requires funtional interface (means single method) */

interface num {
    int getval();
}

interface evenodd {
    boolean isEven(int n);
}

interface facto{
    int fact(int n);
}

public class lambdaExpression {
    public static void main(String[] args) {
        num N = () -> (99); // using arrow function 
        System.out.println(N.getval());

        evenodd S = (n) -> ( n%2==0); // single expression
        System.out.println(S.isEven(43));

        facto T = (n)-> { // block of codes
            int v = 1;
            for(int i =2; i<=n; i++){
                v*=i;
            }
            return v;
        }; // for block of codes you have to use coma at the end

        System.out.println(T.fact(5));

    }
}

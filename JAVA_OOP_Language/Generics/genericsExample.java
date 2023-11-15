
/* Generics is a way to use any civilised Datatypes whenever we want, using <T> we can use sny DT classes like Integer Double String datatypes we want. declearation is available below */

class maximum<T extends Comparable<T>> { // Compareable <T> is the interface that is being extended using <T> in the end ensures that we are using same data type to compare

    public T var1, var2, var3;

    maximum(T var1, T var2, T var3) {
        this.var1 = var1;
        this.var2 = var2;
        this.var3 = var3;
    }

    public T result() { // T return type
        if (var1.compareTo(var2) > 0 && var1.compareTo(var3) > 0)
            return var1;
        if (var2.compareTo(var1) > 0 && var2.compareTo(var3) > 0)
            return var2;
        else
            return var3;
    }

    public static <T> void test(T v) { // taking <T> input
        System.out.println(v);
    }

}

public class genericsExample {
    public static void main(String[] args) {
        // maximum<Integer> obj= new maximum <Integer>(10, 20, 30);
        // maximum<Double> obj= new maximum <Double>(10.2, 20.1, 1.30);
        maximum<String> obj = new maximum<String>("Rohit", "Kumar", "Sen");
        System.out.println(obj.result());
        maximum.test("Rohit");

    }
}

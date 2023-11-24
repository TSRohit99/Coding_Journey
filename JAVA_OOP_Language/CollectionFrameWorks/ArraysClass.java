import java.util.Arrays;

public class ArraysClass {
    public static void main(String[] args) {
        
        int arr[]= {1,2,3,4,5,6,7,8};
        System.out.println("tThe index of 5 is " + Arrays.binarySearch(arr, 5));

        int b[]={45,4,3,36,23,2,1};
        Arrays.sort(b);

        // Arrays.fill(b, 1);
        for(int i: b)
        System.out.print(i +" ");
        
    }
}

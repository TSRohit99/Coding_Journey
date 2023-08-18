import java.util.Scanner;

public class controlStatement {
    public static void main (String args[]){
        // //int age =9;
        // Scanner input = new Scanner(System.in);
        // int age = input.nextInt();
        // if(age>=18)
        //  System.out.println("You are an adult");
        // else
        //  System.out.println("You are a baby...");
        
        //  if(age>0)
        //  System.out.println("Positive");
        // else
        //  System.out.println("Negative");

        //  if(age%2==0)
        //  System.out.println("Even");
        // else
        //  System.out.println("odd");

        //  System.out.println("Enter you marks : ");

        //  int marks= input.nextInt();
        //  if(marks>100)
        //   System.out.println("You are a good student");
        //  else
        // System.out.println("Rohit or moto ow na kne...... ");

        //loops for,while,do while same as C++
        // int first=0;
        // int Second=1;
        // int fibo=0;
        // System.out.print(first+"+"+Second);
        // for(int i=3; i<=10; i++) {
        //      fibo=first+Second;
        //       System.out.print("+" +fibo);
        //      first=Second;
        //      Second=fibo;
      
        // }
      

  //for( ; i<2;) = while(i<2), for(a,b; condition; a++, b++)
// int i=0;
//   for(;i<2;) {
//    System.out.println("Working sir");
//    i++;
//   }

//   i=0;
// for(;;){
//     System.out.println(i);
//     if(i==10)
//      break;

//     i++;
// }

        //prime detaction

//        int primeNum=11;
//         boolean isPrime=true;

//         for(int i=2; i<primeNum; i++){
            
//             if(primeNum%i==0){
//                 System.out.println("its not a prime num");
//                 isPrime=false;
//                 break;
//             }

//         }
//  if(isPrime)
//   System.out.println("its a prime num"); 

// int a;
// int b;
// for(a=0,b=0; a<2 && b<2; a++, b++){
//     System.out.println(a+b);



      //NEW THINGS NOT IN C++

//for each 

 int num[]={0,1,2,3,4,5};
 boolean notFound= true;
 int n=12;

  for(int x: num){
    if(x==n){
        notFound=false;
        System.out.println("Item Found!");
        break;
    }
    
    //System.out.println(x);
  
}
if(notFound)
System.out.println("Item not Found!");


}


    } 
    

